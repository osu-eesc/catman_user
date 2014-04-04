<?php
/**
 * @file
 * catman_user.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function catman_user_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-user-menu.
  $menus['menu-user-menu'] = array(
    'menu_name' => 'menu-user-menu',
    'title' => 'Catalog User menu',
    'description' => 'Custom user menu for catalog',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Catalog User menu');
  t('Custom user menu for catalog');


  return $menus;
}
