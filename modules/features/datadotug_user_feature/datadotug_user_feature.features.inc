<?php
/**
 * @file
 * datadotug_user_feature.features.inc
 */

/**
 * Implements hook_default_cer().
 */
function datadotug_user_feature_default_cer() {
  $items = array();
  $items['node:organisation:field_members*user:user:field_organisation'] = entity_import('cer', '{
    "identifier" : "node:organisation:field_members*user:user:field_organisation",
    "cer_bidirectional" : { "und" : [ { "value" : "1" } ] },
    "cer_enabled" : { "und" : [ { "value" : "1" } ] },
    "cer_weight" : { "und" : [ { "value" : "0" } ] },
    "cer_left" : { "und" : [ { "path" : "node:organisation:field_members" } ] },
    "cer_right" : { "und" : [ { "path" : "user:user:field_organisation" } ] },
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function datadotug_user_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function datadotug_user_feature_node_info() {
  $items = array(
    'organisation' => array(
      'name' => t('Organisation'),
      'base' => 'node_content',
      'description' => t('Organisations are any group of users who are active with Open Data.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => t('Have you checked wether your organisation already exists?'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
