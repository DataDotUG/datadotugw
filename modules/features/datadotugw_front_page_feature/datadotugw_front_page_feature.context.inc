<?php
/**
 * @file
 * datadotugw_front_page_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function datadotugw_front_page_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'join_us';
  $context->description = '';
  $context->tag = 'wwwdu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'get_involved' => 'get_involved',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'content',
          'weight' => '-10',
        ),
        'social_media_links-social-media-links' => array(
          'module' => 'social_media_links',
          'delta' => 'social-media-links',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('wwwdu');
  $export['join_us'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_all_pages';
  $context->description = 'Things that are on every page (like the footer)';
  $context->tag = 'wwwdu';
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
        'menu-menu-footer-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-footer-menu',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'google_groups-gg1' => array(
          'module' => 'google_groups',
          'delta' => 'gg1',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'twitter_block-1' => array(
          'module' => 'twitter_block',
          'delta' => '1',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Things that are on every page (like the footer)');
  t('wwwdu');
  $export['wwwdu_all_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_book_pages';
  $context->description = 'Layout for Book Pages';
  $context->tag = 'wwwdu';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'book' => 'book',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'book-navigation' => array(
          'module' => 'book',
          'delta' => 'navigation',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout for Book Pages');
  t('wwwdu');
  $export['wwwdu_book_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_community_page';
  $context->description = '';
  $context->tag = 'wwwdu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'community' => 'community',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-community-block_2' => array(
          'module' => 'views',
          'delta' => 'community-block_2',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-community-block_3' => array(
          'module' => 'views',
          'delta' => 'community-block_3',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-user_roles-channels' => array(
          'module' => 'views',
          'delta' => 'user_roles-channels',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('wwwdu');
  $export['wwwdu_community_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_home_pages';
  $context->description = '';
  $context->tag = 'wwwdu';
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
        'pane-homepage_intro' => array(
          'module' => 'pane',
          'delta' => 'homepage_intro',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
        'ckan_search-ckan_search_block' => array(
          'module' => 'ckan_search',
          'delta' => 'ckan_search_block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-blog_posts-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_posts-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
        'views-event-block_2' => array(
          'module' => 'views',
          'delta' => 'event-block_2',
          'region' => 'content',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('wwwdu');
  $export['wwwdu_home_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'wwwdu_not_homepage';
  $context->description = 'Shows things that are on all pages but the homepage';
  $context->tag = 'wwwdu';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~profile' => '~profile',
        '~book' => '~book',
        '~user' => '~user',
        '~blog' => '~blog',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Shows things that are on all pages but the homepage');
  t('wwwdu');
  $export['wwwdu_not_homepage'] = $context;

  return $export;
}
