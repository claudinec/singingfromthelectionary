<?php
/**
 * @file
 * lectionary_core.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function lectionary_core_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-other-useful-resources.
  $menus['menu-other-useful-resources'] = array(
    'menu_name' => 'menu-other-useful-resources',
    'title' => 'Other useful resources',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Other useful resources');

  return $menus;
}
