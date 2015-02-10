<?php
/**
 * @file
 * devtrac_org_quicktours.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac_org_quicktours_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'quick_tour';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'quick_tour' => 'quick_tour',
        'quick_tour:page' => 'quick_tour:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-quick_tour-block_1' => array(
          'module' => 'views',
          'delta' => 'quick_tour-block_1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-quick_tour-block_2' => array(
          'module' => 'views',
          'delta' => 'quick_tour-block_2',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-quick_tour-block_3' => array(
          'module' => 'views',
          'delta' => 'quick_tour-block_3',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views-quick_tour-block_4' => array(
          'module' => 'views',
          'delta' => 'quick_tour-block_4',
          'region' => 'content',
          'weight' => '-7',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'slideshow_layout',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['quick_tour'] = $context;

  return $export;
}
