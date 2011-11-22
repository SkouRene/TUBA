<?php
/**
 * @file
 * tubafeatures.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tubafeatures_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'slideshows';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshows';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Standard',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid' => 0,
    'field_youtube_video' => 0,
    'body' => 0,
    'field_youtube_video_1' => 0,
    'title' => 0,
    'field_slideshow_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_youtube_video_1' => 'field_youtube_video_1',
    'title' => 'title',
    'nid' => 0,
    'field_youtube_video' => 0,
    'body' => 0,
    'field_slideshow_image' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '2';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollRight';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Felt: Felt: Youtube video */
  $handler->display->display_options['fields']['field_youtube_video']['id'] = 'field_youtube_video';
  $handler->display->display_options['fields']['field_youtube_video']['table'] = 'field_data_field_youtube_video';
  $handler->display->display_options['fields']['field_youtube_video']['field'] = 'field_youtube_video';
  $handler->display->display_options['fields']['field_youtube_video']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_video']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_video']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_youtube_video']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_youtube_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube_video']['type'] = 'media';
  $handler->display->display_options['fields']['field_youtube_video']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_youtube_video']['field_api_classes'] = 0;
  /* Felt: Indhold: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Felt: Felt: Youtube video */
  $handler->display->display_options['fields']['field_youtube_video_1']['id'] = 'field_youtube_video_1';
  $handler->display->display_options['fields']['field_youtube_video_1']['table'] = 'field_data_field_youtube_video';
  $handler->display->display_options['fields']['field_youtube_video_1']['field'] = 'field_youtube_video';
  $handler->display->display_options['fields']['field_youtube_video_1']['label'] = '';
  $handler->display->display_options['fields']['field_youtube_video_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['path'] = 'node/[nid] ';
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_youtube_video_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_youtube_video_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_youtube_video_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_youtube_video_1']['type'] = 'media';
  $handler->display->display_options['fields']['field_youtube_video_1']['settings'] = array(
    'file_view_mode' => 'media_preview',
  );
  $handler->display->display_options['fields']['field_youtube_video_1']['field_api_classes'] = 0;
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Felt: Indhold: Billede til slideshow */
  $handler->display->display_options['fields']['field_slideshow_image']['id'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['table'] = 'field_data_field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['field'] = 'field_slideshow_image';
  $handler->display->display_options['fields']['field_slideshow_image']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_slideshow_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_slideshow_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_slideshow_image']['settings'] = array(
    'image_style' => 'slideshow',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_slideshow_image']['field_api_classes'] = 0;
  /* Sort criterion: Indhold: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'video' => 'video',
  );
  /* Filter criterion: Indhold: Forfremmet til forside */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Slideshow forside */
  $handler = $view->new_display('page', 'Slideshow forside', 'page');
  $handler->display->display_options['path'] = 'slideshow_forside';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Drikker de?';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $translatables['slideshows'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Gendan'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('node/[nid] '),
    t('Slideshow forside'),
  );
  $export['slideshows'] = $view;

  return $export;
}
