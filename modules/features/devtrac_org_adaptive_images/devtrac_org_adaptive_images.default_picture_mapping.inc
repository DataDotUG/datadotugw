<?php
/**
 * @file
 * devtrac_org_adaptive_images.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function devtrac_org_adaptive_images_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Inline Images';
  $picture_mapping->machine_name = 'inline_images';
  $picture_mapping->breakpoint_group = 'devtrac_org';
  $picture_mapping->mapping = array(
    'breakpoints.theme.devtrac_org.mobile' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_breakpoints_theme_devtrac_org_mobile_1x',
      ),
    ),
    'breakpoints.theme.devtrac_org.narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_breakpoints_theme_devtrac_org_narrow_1x',
      ),
    ),
    'breakpoints.theme.devtrac_org.narrow_landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_breakpoints_theme_devtrac_org_narrow_landscape_1x',
      ),
    ),
    'breakpoints.theme.devtrac_org.normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_breakpoints_theme_devtrac_org_normal_1x',
      ),
    ),
    'breakpoints.theme.devtrac_org.normal_desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_breakpoints_theme_devtrac_org_normal_desktop_1x',
      ),
    ),
    'breakpoints.theme.devtrac_org.wide_desktop' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_breakpoints_theme_devtrac_org_wide_desktop_1x',
      ),
    ),
    'breakpoints.theme.devtrac_org.wide' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'resp_breakpoints_theme_devtrac_org_wide_1x',
      ),
    ),
  );
  $export['inline_images'] = $picture_mapping;

  return $export;
}
