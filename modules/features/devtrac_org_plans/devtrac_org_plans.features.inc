<?php
/**
 * @file
 * devtrac_org_plans.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_org_plans_ctools_plugin_api($module = NULL, $api = NULL) {
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
function devtrac_org_plans_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function devtrac_org_plans_node_info() {
  $items = array(
    'packages' => array(
      'name' => t('Package'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Package Name'),
      'help' => '',
    ),
  );
  return $items;
}
