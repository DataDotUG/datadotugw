<?php
/**
 * @file
 * devtrac_org_adaptive_images.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function devtrac_org_adaptive_images_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_field_picture';
  $file_display->weight = -50;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'picture_mapping' => 'inline_images',
    'fallback_image_style' => '',
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'inline_images',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  $export['image__teaser__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__teaser__file_picture';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_group' => 'inline_images',
    'fallback_image_style' => 'quick_tour_images',
    'alt' => '',
    'title' => '',
  );
  $export['image__teaser__file_picture'] = $file_display;

  return $export;
}
