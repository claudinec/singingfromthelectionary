<?php
/**
 * @file
 * lectionary_core.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function lectionary_core_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-indexes_lectionary-index:lectionary-index.
  $menu_links['menu-indexes_lectionary-index:lectionary-index'] = array(
    'menu_name' => 'menu-indexes',
    'link_path' => 'lectionary-index',
    'router_path' => 'lectionary-index',
    'link_title' => 'Lectionary Index',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-indexes_lectionary-index:lectionary-index',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-indexes_other-occasions:other-occasions.
  $menu_links['menu-indexes_other-occasions:other-occasions'] = array(
    'menu_name' => 'menu-indexes',
    'link_path' => 'other-occasions',
    'router_path' => 'other-occasions',
    'link_title' => 'Other Occasions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-indexes_other-occasions:other-occasions',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-other-useful-resources_lectionary-liturgies:http://lectionaryliturgies.blogspot.com/.
  $menu_links['menu-other-useful-resources_lectionary-liturgies:http://lectionaryliturgies.blogspot.com/'] = array(
    'menu_name' => 'menu-other-useful-resources',
    'link_path' => 'http://lectionaryliturgies.blogspot.com/',
    'router_path' => '',
    'link_title' => 'Lectionary Liturgies',
    'options' => array(
      'attributes' => array(
        'title' => 'Prayers for each week',
      ),
      'identifier' => 'menu-other-useful-resources_lectionary-liturgies:http://lectionaryliturgies.blogspot.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-other-useful-resources_metrical-index:http://www.hymntime.com/tch/mid/met/met.htm.
  $menu_links['menu-other-useful-resources_metrical-index:http://www.hymntime.com/tch/mid/met/met.htm'] = array(
    'menu_name' => 'menu-other-useful-resources',
    'link_path' => 'http://www.hymntime.com/tch/mid/met/met.htm',
    'router_path' => '',
    'link_title' => 'Metrical index',
    'options' => array(
      'attributes' => array(
        'title' => 'Sound samples arranged by meter; handy if you need a standard tune to some new words',
      ),
      'identifier' => 'menu-other-useful-resources_metrical-index:http://www.hymntime.com/tch/mid/met/met.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-other-useful-resources_the-text-this-week:http://www.textweek.com/.
  $menu_links['menu-other-useful-resources_the-text-this-week:http://www.textweek.com/'] = array(
    'menu_name' => 'menu-other-useful-resources',
    'link_path' => 'http://www.textweek.com/',
    'router_path' => '',
    'link_title' => 'The Text This Week',
    'options' => array(
      'attributes' => array(
        'title' => 'Sermons, prayers, liturgies',
      ),
      'identifier' => 'menu-other-useful-resources_the-text-this-week:http://www.textweek.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-other-useful-resources_together-to-celebrate:http://www.togethertocelebrate.com.au/.
  $menu_links['menu-other-useful-resources_together-to-celebrate:http://www.togethertocelebrate.com.au/'] = array(
    'menu_name' => 'menu-other-useful-resources',
    'link_path' => 'http://www.togethertocelebrate.com.au/',
    'router_path' => '',
    'link_title' => 'Together to Celebrate',
    'options' => array(
      'attributes' => array(
        'title' => 'Praise and worship songs',
      ),
      'identifier' => 'menu-other-useful-resources_together-to-celebrate:http://www.togethertocelebrate.com.au/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_contact:contact.
  $menu_links['navigation_contact:contact'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact',
    'options' => array(
      'identifier' => 'navigation_contact:contact',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Lectionary Index');
  t('Lectionary Liturgies');
  t('Metrical index');
  t('Other Occasions');
  t('The Text This Week');
  t('Together to Celebrate');

  return $menu_links;
}
