<?php
// $Id: page.tpl.php,v 1.1.2.2.4.2 2011/01/11 01:08:49 dvessel Exp $
?>
<div id="page" class="clearfix">
  <div id="top-bar">
    <div id="site-header-wrapper" class="container-16 clearfix">
      <div id="site-header" class="clearfix">
        <div id="branding" class="grid-4 clearfix">
        <?php if ($linked_logo_img): ?>
          <span id="logo" class="grid-1 alpha"><?php print $linked_logo_img; ?></span>
        <?php endif; ?>
        <?php if ($linked_site_name): ?>
          <h1 id="site-name" class="grid-3 omega"><?php print $linked_site_name; ?></h1>
        <?php endif; ?>
        <?php if ($site_slogan): ?>
          <div id="site-slogan" class="grid-3 omega"><?php print $site_slogan; ?></div>
        <?php endif; ?>
      </div>
  
      <?php if ($main_menu_links): ?>
        <div id="primary-menu" class="grid-9 prefix-3">
          <?php print $main_menu_links; ?>
        </div>
      <?php endif; ?>
    
      </div>
    </div>
  </div>
  
  <div id="sub-bar">
    <div id="site-subheader-wrapper" class="container-16 clearfix">
  
      <div id="site-subheader" class="prefix-1 clearfix">
      <?php if ($page['highlighted']): ?>
        <div id="highlighted" class="<?php print ns('grid-12', $page['header'], 7); ?>">
          <?php print render($page['highlighted']); ?>
        </div>
      <?php endif; ?>

      <?php if ($page['header']): ?>
        <div id="header-region" class="region <?php print ns('grid-10', $page['highlighted'], 7); ?> prefix-2 clearfix">
          <?php print render($page['header']); ?>
        </div>
      <?php endif; ?>
            
      <?php if ($page['search_box']): ?>
        <div id="search-box" class="grid-2 push-1"><?php print render($page['search_box']); ?></div>
      <?php endif; ?>
    

      </div>
    </div>
  </div>
    
  <div id="main-wrapper" class="container-16 clearfix">  
    <!--TUBA-modification: the width of sidebar_second is prepared here - the integer parameter after $page[sidebar_second] is changed to 6.-->
    <div id="main" class="column <?php print ns('grid-16', $page['sidebar_first'], 4, $page['sidebar_second'], 6) . ' ' . ns('push-4', !$page['sidebar_first'], 4); ?>">
      <?php print $breadcrumb; ?>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="title" id="page-title"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>      
      <?php if ($tabs): ?>
        <div class="tabs"><?php print render($tabs); ?></div>
      <?php endif; ?>
      <?php print $messages; ?>
      <?php print render($page['help']); ?>
  
      <div id="main-content" class="region clearfix">
        <?php print render($page['content']); ?>
      </div>
  
      <?php print $feed_icons; ?>
    </div>

    <?php if ($page['sidebar_first']): ?>
      <div id="sidebar-left" class="column sidebar region grid-4 <?php print ns('pull-12', $page['sidebar_second'], 3); ?>">
        <?php print render($page['sidebar_first']); ?>
      </div>
    <?php endif; ?>
    
    <?php if ($page['sidebar_second']): ?>
      <!--TUBA-modification: the width of sidebar_second is prepared here - changed from the default "grid-3" to "grid-6".-->
      <div id="sidebar-right" class="column sidebar region grid-6">
        <?php print render($page['sidebar_second']); ?>
      </div>
    <?php endif; ?>
  </div>

  <div id="footer-bar">
      <div id="footer-wrapper" class="container-16">
        <div id="footer">
          <?php if ($page['footer']): ?>
            <div id="footer-region" class="region grid-16 clearfix">
              <?php print render($page['footer']); ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
  </div>
  
  <div id="bottom-bar">
      <div id="bottom-wrapper" class="container-16">
        <div id="bottom">
          <?php if ($page['sub_footer']): ?>
            <div id="sub-footer-region" class="region grid-16 clearfix">
              <?php print render($page['sub_footer']); ?>
            </div>
          <?php endif; ?>
        </div>
      </div>
   </div>
</div>
