<?php
/**
 * @file
 * catman_user.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function catman_user_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-user-menu_create-account:user/register
  $menu_links['menu-user-menu_create-account:user/register'] = array(
    'menu_name' => 'menu-user-menu',
    'link_path' => 'user/register',
    'router_path' => 'user/register',
    'link_title' => 'Create account',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-user-menu_create-account:user/register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 0,
  );
  // Exported menu link: menu-user-menu_log-out:user/logout
  $menu_links['menu-user-menu_log-out:user/logout'] = array(
    'menu_name' => 'menu-user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-user-menu_log-out:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 0,
  );
  // Exported menu link: menu-user-menu_my-account:user
  $menu_links['menu-user-menu_my-account:user'] = array(
    'menu_name' => 'menu-user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'My account',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
      'identifier' => 'menu-user-menu_my-account:user',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Create account');
  t('Log out');
  t('My account');


  return $menu_links;
}