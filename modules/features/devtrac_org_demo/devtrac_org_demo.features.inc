<?php
/**
 * @file
 * devtrac_org_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_org_demo_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac_org_demo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function devtrac_org_demo_node_info() {
  $items = array(
    'user_level' => array(
      'name' => t('User level'),
      'base' => 'node_content',
      'description' => t('Add a user level for logging in to the main demo website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
