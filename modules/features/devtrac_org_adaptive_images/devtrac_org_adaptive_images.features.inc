<?php
/**
 * @file
 * devtrac_org_adaptive_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function devtrac_org_adaptive_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "file_entity" && $api == "file_default_displays") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function devtrac_org_adaptive_images_image_default_styles() {
  $styles = array();

  // Exported image style: resp_breakpoints_theme_devtrac_org_mobile_1x.
  $styles['resp_breakpoints_theme_devtrac_org_mobile_1x'] = array(
    'name' => 'resp_breakpoints_theme_devtrac_org_mobile_1x',
    'label' => 'resp_breakpoints_theme_devtrac_org_mobile_1x',
    'effects' => array(
      6 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 320,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: resp_breakpoints_theme_devtrac_org_narrow_1x.
  $styles['resp_breakpoints_theme_devtrac_org_narrow_1x'] = array(
    'name' => 'resp_breakpoints_theme_devtrac_org_narrow_1x',
    'label' => 'resp_breakpoints_theme_devtrac_org_narrow_1x',
    'effects' => array(
      7 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 488,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: resp_breakpoints_theme_devtrac_org_narrow_landscape_1x.
  $styles['resp_breakpoints_theme_devtrac_org_narrow_landscape_1x'] = array(
    'name' => 'resp_breakpoints_theme_devtrac_org_narrow_landscape_1x',
    'label' => 'resp_breakpoints_theme_devtrac_org_narrow_landscape_1x',
    'effects' => array(
      8 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: resp_breakpoints_theme_devtrac_org_normal_1x.
  $styles['resp_breakpoints_theme_devtrac_org_normal_1x'] = array(
    'name' => 'resp_breakpoints_theme_devtrac_org_normal_1x',
    'label' => 'resp_breakpoints_theme_devtrac_org_normal_1x',
    'effects' => array(
      9 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 740,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: resp_breakpoints_theme_devtrac_org_normal_desktop_1x.
  $styles['resp_breakpoints_theme_devtrac_org_normal_desktop_1x'] = array(
    'name' => 'resp_breakpoints_theme_devtrac_org_normal_desktop_1x',
    'label' => 'resp_breakpoints_theme_devtrac_org_normal_desktop_1x',
    'effects' => array(
      10 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 940,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: resp_breakpoints_theme_devtrac_org_wide_1x.
  $styles['resp_breakpoints_theme_devtrac_org_wide_1x'] = array(
    'name' => 'resp_breakpoints_theme_devtrac_org_wide_1x',
    'label' => 'resp_breakpoints_theme_devtrac_org_wide_1x',
    'effects' => array(
      12 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1180,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: resp_breakpoints_theme_devtrac_org_wide_desktop_1x.
  $styles['resp_breakpoints_theme_devtrac_org_wide_desktop_1x'] = array(
    'name' => 'resp_breakpoints_theme_devtrac_org_wide_desktop_1x',
    'label' => 'resp_breakpoints_theme_devtrac_org_wide_desktop_1x',
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
          'width' => 960,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}
