<?php
/**
 * @file
 * devtrac_org_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_org_frontpage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
  if ($module == "pane" && $api == "pane") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function devtrac_org_frontpage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
