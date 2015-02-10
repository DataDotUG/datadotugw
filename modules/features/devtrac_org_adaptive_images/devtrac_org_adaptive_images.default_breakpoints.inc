<?php
/**
 * @file
 * devtrac_org_adaptive_images.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function devtrac_org_adaptive_images_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_org.mobile';
  $breakpoint->name = 'mobile';
  $breakpoint->breakpoint = '(max-width: 480px)';
  $breakpoint->source = 'devtrac_org';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_org.mobile'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_org.narrow';
  $breakpoint->name = 'narrow';
  $breakpoint->breakpoint = '(max-width: 740px)';
  $breakpoint->source = 'devtrac_org';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 1;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_org.narrow'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_org.narrow_landscape';
  $breakpoint->name = 'narrow_landscape';
  $breakpoint->breakpoint = '(max-width: 800px)';
  $breakpoint->source = 'devtrac_org';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 2;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_org.narrow_landscape'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_org.normal';
  $breakpoint->name = 'normal';
  $breakpoint->breakpoint = '(max-width: 980px)';
  $breakpoint->source = 'devtrac_org';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 3;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_org.normal'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_org.normal_desktop';
  $breakpoint->name = 'normal_desktop';
  $breakpoint->breakpoint = '(max-width: 1024px)';
  $breakpoint->source = 'devtrac_org';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 4;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_org.normal_desktop'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_org.wide';
  $breakpoint->name = 'wide';
  $breakpoint->breakpoint = '(max-width: 1220px)';
  $breakpoint->source = 'devtrac_org';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 6;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_org.wide'] = $breakpoint;

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'breakpoints.theme.devtrac_org.wide_desktop';
  $breakpoint->name = 'wide_desktop';
  $breakpoint->breakpoint = '(max-width: 1180px)';
  $breakpoint->source = 'devtrac_org';
  $breakpoint->source_type = 'theme';
  $breakpoint->status = 1;
  $breakpoint->weight = 5;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['breakpoints.theme.devtrac_org.wide_desktop'] = $breakpoint;

  return $export;
}
