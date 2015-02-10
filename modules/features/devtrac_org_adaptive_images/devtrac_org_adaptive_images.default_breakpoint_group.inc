<?php
/**
 * @file
 * devtrac_org_adaptive_images.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function devtrac_org_adaptive_images_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'devtrac_org';
  $breakpoint_group->name = 'Devtrac Org';
  $breakpoint_group->breakpoints = array(
    0 => 'breakpoints.theme.devtrac_org.mobile',
    1 => 'breakpoints.theme.devtrac_org.narrow',
    2 => 'breakpoints.theme.devtrac_org.narrow_landscape',
    3 => 'breakpoints.theme.devtrac_org.normal',
    4 => 'breakpoints.theme.devtrac_org.normal_desktop',
    5 => 'breakpoints.theme.devtrac_org.wide_desktop',
    6 => 'breakpoints.theme.devtrac_org.wide',
  );
  $breakpoint_group->type = 'theme';
  $breakpoint_group->overridden = 0;
  $export['devtrac_org'] = $breakpoint_group;

  return $export;
}
