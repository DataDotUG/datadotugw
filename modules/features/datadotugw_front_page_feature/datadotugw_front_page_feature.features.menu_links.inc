<?php
/**
 * @file
 * datadotugw_front_page_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function datadotugw_front_page_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_blog:blog
  $menu_links['main-menu_blog:blog'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog',
    'router_path' => 'blog',
    'link_title' => 'Blog',
    'options' => array(
      'attributes' => array(
        'title' => 'News Items',
      ),
      'identifier' => 'main-menu_blog:blog',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_community:community
  $menu_links['main-menu_community:community'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'community',
    'router_path' => 'community',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_community:community',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_data:http://catalog.data.ug
  $menu_links['main-menu_data:http://catalog.data.ug'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://catalog.data.ug',
    'router_path' => '',
    'link_title' => 'Data',
    'options' => array(
      'attributes' => array(
        'title' => 'Datasets for Data.Ug',
      ),
      'identifier' => 'main-menu_data:http://catalog.data.ug',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_documentation:book
  $menu_links['main-menu_documentation:book'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'book',
    'router_path' => 'book',
    'link_title' => 'Documentation',
    'options' => array(
      'attributes' => array(
        'title' => 'All documentation about Data.Ug',
      ),
      'identifier' => 'main-menu_documentation:book',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:community',
  );
  // Exported menu link: main-menu_events:events
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:community',
  );
  // Exported menu link: main-menu_get-involved:get_involved
  $menu_links['main-menu_get-involved:get_involved'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'get_involved',
    'router_path' => 'get_involved',
    'link_title' => 'Get involved',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_get-involved:get_involved',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_community:community',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_layers:http://maps.data.ug
  $menu_links['main-menu_layers:http://maps.data.ug'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://maps.data.ug',
    'router_path' => '',
    'link_title' => 'Layers',
    'options' => array(
      'attributes' => array(
        'title' => 'Map layers about Uganda',
      ),
      'identifier' => 'main-menu_layers:http://maps.data.ug',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_maps:http://maps.data.ug',
  );
  // Exported menu link: main-menu_login:user/login
  $menu_links['main-menu_login:user/login'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_maps:http://maps.data.ug
  $menu_links['main-menu_maps:http://maps.data.ug'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://maps.data.ug',
    'router_path' => '',
    'link_title' => 'Maps',
    'options' => array(
      'attributes' => array(
        'title' => 'Maps on Data.Ug',
      ),
      'identifier' => 'main-menu_maps:http://maps.data.ug',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_people:http://maps.data.ug/people
  $menu_links['main-menu_people:http://maps.data.ug/people'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'http://maps.data.ug/people',
    'router_path' => '',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => 'Map Publishers',
      ),
      'identifier' => 'main-menu_people:http://maps.data.ug/people',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_maps:http://maps.data.ug',
  );
  // Exported menu link: main-menu_register:user/register
  $menu_links['main-menu_register:user/register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_register:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_your-role:user-roles
  $menu_links['main-menu_your-role:user-roles'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'user-roles',
    'router_path' => 'user-roles',
    'link_title' => 'Your role',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_your-role:user-roles',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_about-us:about
  $menu_links['menu-footer-menu_about-us:about'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'about',
    'router_path' => 'about',
    'link_title' => 'About us',
    'options' => array(
      'attributes' => array(
        'title' => 'the about u spage',
      ),
      'identifier' => 'menu-footer-menu_about-us:about',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_home:<front>
  $menu_links['menu-footer-menu_home:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-footer-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About us');
  t('Blog');
  t('Community');
  t('Data');
  t('Documentation');
  t('Events');
  t('Get involved');
  t('Home');
  t('Layers');
  t('Login');
  t('Maps');
  t('People');
  t('Register');
  t('User account');
  t('Your role');


  return $menu_links;
}
