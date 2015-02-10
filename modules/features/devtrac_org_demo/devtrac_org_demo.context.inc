<?php
/**
 * @file
 * devtrac_org_demo.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac_org_demo_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'demo_page';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'demo_page' => 'demo_page',
        'demo_page:page' => 'demo_page:page',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'slideshow_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['demo_page'] = $context;

  return $export;
}
