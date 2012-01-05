<?php
// $Id: template.php,v 1.1.2.6.4.2 2011/01/11 01:08:49 dvessel Exp $


/**
 * Implements hook_form_alter
 */
function tuba_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    
    $form['search_block_form']['#title'] = t('Search'); // Change the text on the label element
    $form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
    $form['search_block_form']['#size'] = 20;  // define size of the textfield
    
    //$form['actions']['submit']['#value'] = t('GO!'); // Change the text on the submit button
    //$form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/search.png');
    
 
    
    //TUBA-modifications:
    // Add extra attributes to the text box
    $form['search_block_form']['#default_value'] = t('Type here...'); // Set a default value for the textfield
    $form['search_block_form']['#attributes']['onblur'] = "if (this.value == '') {this.value = 'Type here...';}";
    $form['search_block_form']['#attributes']['onfocus'] = "if (this.value == 'Type here...') {this.value = '';}";
   
    
    $form['search_block_form']['#attributes']['id'] =  array('search-text-area');
    
    $form['search_text'] = array(
      '#type' => 'markup', 
      '#markup' => "<span>".t('Enter e.g. alcohol, violence, family...')."</span>",
    ); 
    

  }
} 

/**
 * Implements hook_preprocess_html
 */
function tuba_preprocess_html(&$vars) {
  $vars['classes_array'][] = 'show-grid';
}

/**
 * Preprocessor for page.tpl.php template file.
 */
function tuba_preprocess_page(&$vars, $hook) {

  // For easy printing of variables.
  $vars['logo_img'] = '';
  if (!empty($vars['logo'])) {
    $vars['logo_img'] = theme('image', array(
      'path'  => $vars['logo'],
      'alt'   => t('Home'),
      'title' => t('Home'),
    ));
  }
  $vars['linked_logo_img']  = '';
  if (!empty($vars['logo_img'])) {
    $vars['linked_logo_img'] = l($vars['logo_img'], '<front>', array(
      'attributes' => array(
        'rel'   => 'home',
        'title' => t('Home'),
      ),
      'html' => TRUE,
    ));
  }
  $vars['linked_site_name'] = '';
  if (!empty($vars['site_name'])) {
    $vars['linked_site_name'] = l($vars['site_name'], '<front>', array(
      'attributes' => array(
        'rel'   => 'home',
        'title' => t('Home'),
      ),
    ));
  }

  // Site navigation links.
  $vars['main_menu_links'] = '';
  if (isset($vars['main_menu'])) {
    $vars['main_menu_links'] = theme('links__system_main_menu', array(
      'links' => $vars['main_menu'],
      'attributes' => array(
        'id' => 'main-menu',
        'class' => array('inline', 'main-menu'),
      ),
      'heading' => array(
        'text' => t('Main menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }
  $vars['secondary_menu_links'] = '';
  if (isset($vars['secondary_menu'])) {
    $vars['secondary_menu_links'] = theme('links__system_secondary_menu', array(
      'links' => $vars['secondary_menu'],
      'attributes' => array(
        'id'    => 'secondary-menu',
        'class' => array('inline', 'secondary-menu'),
      ),
      'heading' => array(
        'text' => t('Secondary menu'),
        'level' => 'h2',
        'class' => array('element-invisible'),
      ),
    ));
  }

}


/**
 * Implements hook_css_alter.
 * 
 * This rearranges how the style sheets are included so the framework styles
 * are included first.
 *
 * Sub-themes can override the framework styles when it contains css files with
 * the same name as a framework style. This mirrors the behavior of the 6--1
 * release of tuba warts and all. Future versions will make this obsolete.
 */
function tuba_css_alter(&$css) {
  global $theme_info, $base_theme_info;

  // Dig into the framework .info data.
  $framework = !empty($base_theme_info) ? $base_theme_info[0]->info : $theme_info->info;

  // Ensure framework CSS is always first.
  $on_top = CSS_NS_FRAMEWORK;

  // Pull framework styles from the themes .info file and place them above all stylesheets.
  if (isset($framework['stylesheets'])) {
    foreach ($framework['stylesheets'] as $media => $styles_from_960) {
      foreach ($styles_from_960 as $style_from_960) {
        // Force framework styles to come first.
        if (strpos($style_from_960, 'framework') !== FALSE) {
          $css[$style_from_960]['group'] = $on_top;
          // Handle styles that may be overridden from sub-themes.
          foreach (array_keys($css) as $style_from_var) {
            if ($style_from_960 != $style_from_var && basename($style_from_960) == basename($style_from_var)) {
              $css[$style_from_var]['group'] = $on_top;
            }
          }
        }
      }
    }
  }
}