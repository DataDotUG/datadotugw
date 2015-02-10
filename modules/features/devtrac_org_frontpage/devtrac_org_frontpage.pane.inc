<?php
/**
 * @file
 * devtrac_org_frontpage.pane.inc
 */

/**
 * Implements hook_default_pane_container().
 */
function devtrac_org_frontpage_default_pane_container() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'credit_footer_block';
  $template->title = '';
  $template->plugin = 'text';
  $template->description = 'This is the block in the bottom left corner footer of all devtrac pages. It contains the copy right information.';
  $template->configuration = '';
  $export['credit_footer_block'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'front_page_information';
  $template->title = '';
  $template->plugin = 'text';
  $template->description = 'Block with the information on the front page';
  $template->configuration = '';
  $export['front_page_information'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'social_links_footer';
  $template->title = '';
  $template->plugin = 'text';
  $template->description = 'This is the block in the bottom left corner footer of all devtrac pages containing the social links';
  $template->configuration = '';
  $export['social_links_footer'] = $template;

  return $export;
}

/**
 * Implements hook_default_pane_data().
 */
function devtrac_org_frontpage_default_pane_data() {
  $export = array();

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'credit_footer_block_und';
  $template->container = 'credit_footer_block';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<span id="project-info-footer">Built by  <a href="http://www.mountbatten.net/" target="_blank">Mountbatten Ltd</a> | Originally developed for <a href="http://www.unicef.org/uganda" target="_blank">Unicef Uganda</a> &copy; 2014<br /><!--<span id="Licensed-lower-footer">This work is licensed under a <a href="http://creativecommons.org/licenses/by-sa/3.0/" target="_blank" >Creative Commons Attribution-ShareAlike 3.0 Unported License</a></span>-->',
    'format' => 'full_html',
    'title' => '',
  );
  $export['credit_footer_block_und'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'front_page_information_und';
  $template->container = 'front_page_information';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<h4>Monitor your projects in the field</h4><p>Devtrac helps you manage and publish the ongoing impact of your organisation&#39;s work.</p><p><div id="banner-links"><span class="download"><a href="/demo">Demo</a></span> &nbsp;<span class="quick-tour"><a href="/tour">Quick Tour</a></span></div></p>',
    'format' => 'full_html',
    'title' => '',
  );
  $export['front_page_information_und'] = $template;

  $template = new stdClass();
  $template->disabled = FALSE; /* Edit this to true to make a default template disabled initially */
  $template->api_version = 2;
  $template->name = 'social_links_footer_und';
  $template->container = 'social_links_footer';
  $template->lang = 'und';
  $template->data = array(
    'value' => '<p><!--<img alt="" src="/profiles/devtracdoc/themes/devtrac7_theme/images/devtracorg-images/nice-facebook.png" style="line-height:1.6" />&nbsp;--><a href="http://drupal.org/project/devtrac"><img alt="" src="/profiles/devtracdoc/themes/devtrac7_theme/images/devtracorg-images/nice-drupal.png" /></a>&nbsp;<a href="http://www.twitter.com/devtrac"><img alt="" src="/profiles/devtracdoc/themes/devtrac7_theme/images/devtracorg-images/nice-twitter.png" /></a><!--&nbsp;<img alt="" src="/profiles/devtracdoc/themes/devtrac7_theme/images/devtracorg-images/nice-google.png" style="line-height:1.6" />&nbsp;&nbsp;--></p>
',
    'format' => 'full_html',
    'title' => '',
  );
  $export['social_links_footer_und'] = $template;

  return $export;
}
