<?php
/**
 * @file
 * devtrac_org_plans.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function devtrac_org_plans_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'plans_page';
  $view->description = 'Display a list of all Support Packages on the support page';
  $view->tag = 'content';
  $view->base_table = 'node';
  $view->human_name = 'Support Packages';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Queue \'Support Packages\'';
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'queue';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="#[title]">[title]</a>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Weight: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'weight_weights';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Plans Page */
  $handler = $view->new_display('page', 'Plans Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_image' => 'field_image',
    'title' => 'title',
    'field_24hour_support' => 'field_24hour_support',
    'field_acquia_hosting' => 'field_acquia_hosting',
    'field_email_support' => 'field_email_support',
    'field_mapbox_subscription' => 'field_mapbox_subscription',
    'field_mapit_subscription' => 'field_mapit_subscription',
    'field_number_of_users' => 'field_number_of_users',
    'field_price' => 'field_price',
    'field_product_updates' => 'field_product_updates',
    'field_telephone_email_support' => 'field_telephone_email_support',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_24hour_support' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_acquia_hosting' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_support' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mapbox_subscription' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mapit_subscription' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_number_of_users' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_product_updates' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_telephone_email_support' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<h1>IT ONLY TAKES A SHORT WHILE TO GET STARTED</h1>
';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = 'Pick a plan';
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<a href="#[title_1]" >[field_image]</a>';
  $handler->display->display_options['fields']['field_image']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_label_class'] = 'pick-a-plan';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'package-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Acquia Hosting */
  $handler->display->display_options['fields']['field_acquia_hosting']['id'] = 'field_acquia_hosting';
  $handler->display->display_options['fields']['field_acquia_hosting']['table'] = 'field_data_field_acquia_hosting';
  $handler->display->display_options['fields']['field_acquia_hosting']['field'] = 'field_acquia_hosting';
  $handler->display->display_options['fields']['field_acquia_hosting']['element_label_colon'] = FALSE;
  /* Field: Content: Number of users */
  $handler->display->display_options['fields']['field_number_of_users']['id'] = 'field_number_of_users';
  $handler->display->display_options['fields']['field_number_of_users']['table'] = 'field_data_field_number_of_users';
  $handler->display->display_options['fields']['field_number_of_users']['field'] = 'field_number_of_users';
  $handler->display->display_options['fields']['field_number_of_users']['element_label_colon'] = FALSE;
  /* Field: Content: Mapbox Subscription */
  $handler->display->display_options['fields']['field_mapbox_subscription']['id'] = 'field_mapbox_subscription';
  $handler->display->display_options['fields']['field_mapbox_subscription']['table'] = 'field_data_field_mapbox_subscription';
  $handler->display->display_options['fields']['field_mapbox_subscription']['field'] = 'field_mapbox_subscription';
  $handler->display->display_options['fields']['field_mapbox_subscription']['element_label_colon'] = FALSE;
  /* Field: Content: Mapit Subscription */
  $handler->display->display_options['fields']['field_mapit_subscription']['id'] = 'field_mapit_subscription';
  $handler->display->display_options['fields']['field_mapit_subscription']['table'] = 'field_data_field_mapit_subscription';
  $handler->display->display_options['fields']['field_mapit_subscription']['field'] = 'field_mapit_subscription';
  $handler->display->display_options['fields']['field_mapit_subscription']['element_label_colon'] = FALSE;
  /* Field: Content: Product Updates */
  $handler->display->display_options['fields']['field_product_updates']['id'] = 'field_product_updates';
  $handler->display->display_options['fields']['field_product_updates']['table'] = 'field_data_field_product_updates';
  $handler->display->display_options['fields']['field_product_updates']['field'] = 'field_product_updates';
  $handler->display->display_options['fields']['field_product_updates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_product_updates']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: 24 hour support (7 days a week, 24 hoursa day) */
  $handler->display->display_options['fields']['field_24hour_support']['id'] = 'field_24hour_support';
  $handler->display->display_options['fields']['field_24hour_support']['table'] = 'field_data_field_24hour_support';
  $handler->display->display_options['fields']['field_24hour_support']['field'] = 'field_24hour_support';
  $handler->display->display_options['fields']['field_24hour_support']['element_label_colon'] = FALSE;
  /* Field: Content: Email support for dedicated contact, 1-5 days a month */
  $handler->display->display_options['fields']['field_email_support']['id'] = 'field_email_support';
  $handler->display->display_options['fields']['field_email_support']['table'] = 'field_data_field_email_support';
  $handler->display->display_options['fields']['field_email_support']['field'] = 'field_email_support';
  $handler->display->display_options['fields']['field_email_support']['element_label_colon'] = FALSE;
  /* Field: Content: Telephone and email support during Uganda office hours (3 days a month) */
  $handler->display->display_options['fields']['field_telephone_email_support']['id'] = 'field_telephone_email_support';
  $handler->display->display_options['fields']['field_telephone_email_support']['table'] = 'field_data_field_telephone_email_support';
  $handler->display->display_options['fields']['field_telephone_email_support']['field'] = 'field_telephone_email_support';
  $handler->display->display_options['fields']['field_telephone_email_support']['element_label_colon'] = FALSE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'packages' => 'packages',
  );
  $handler->display->display_options['path'] = 'plans';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'PLANS';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['plans_page'] = $view;

  return $export;
}
