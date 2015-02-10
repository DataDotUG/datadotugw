<?php
/**
 * @file
 * devtrac_org_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function devtrac_org_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = 'Context that places blocks and delta layout on the front page.';
  $context->tag = 'Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'pane-front_page_information' => array(
          'module' => 'pane',
          'delta' => 'front_page_information',
          'region' => 'content',
          'weight' => '-10',
        ),
        'simple_subscription-subscribe' => array(
          'module' => 'simple_subscription',
          'delta' => 'subscribe',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-frontpage_slogan_blocks-block' => array(
          'module' => 'views',
          'delta' => 'frontpage_slogan_blocks-block',
          'region' => 'content',
          'weight' => '10',
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
  t('Context that places blocks and delta layout on the front page.');
  t('Page');
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'one_column_layout_pages';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~tour' => '~tour',
        '~<front>' => '~<front>',
      ),
    ),
  );
  $context->reactions = array(
    'delta' => array(
      'delta_template' => 'slideshow_layout',
    ),
    'theme_html' => array(
      'class' => 'pageborder',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['one_column_layout_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'site_wide';
  $context->description = '';
  $context->tag = 'Site wide';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'nice_menus-2' => array(
          'module' => 'nice_menus',
          'delta' => '2',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'pane-credit_footer_block' => array(
          'module' => 'pane',
          'delta' => 'credit_footer_block',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'pane-social_links_footer' => array(
          'module' => 'pane',
          'delta' => 'social_links_footer',
          'region' => 'footer_second',
          'weight' => '-10',
        ),
      ),
    ),
    'delta' => array(
      'delta_template' => 'informationalpages',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Site wide');
  $export['site_wide'] = $context;

  return $export;
}
