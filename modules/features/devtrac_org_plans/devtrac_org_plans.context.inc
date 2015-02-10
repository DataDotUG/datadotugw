<?php
/**
 * @file
 * devtrac_org_plans.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac_org_plans_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'plans_page';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'plans_page:page' => 'plans_page:page',
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
  $export['plans_page'] = $context;

  return $export;
}
