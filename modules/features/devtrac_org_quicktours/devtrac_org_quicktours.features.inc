<?php
/**
 * @file
 * devtrac_org_quicktours.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_org_quicktours_ctools_plugin_api($module = NULL, $api = NULL) {
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
function devtrac_org_quicktours_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function devtrac_org_quicktours_image_default_styles() {
  $styles = array();

  // Exported image style: quick_tour_images.
  $styles['quick_tour_images'] = array(
    'name' => 'quick_tour_images',
    'label' => 'quick tour images',
    'effects' => array(
      11 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 300,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function devtrac_org_quicktours_node_info() {
  $items = array(
    'quick_tour' => array(
      'name' => t('Quick Tour'),
      'base' => 'node_content',
      'description' => t('For adding new quick tour items'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
