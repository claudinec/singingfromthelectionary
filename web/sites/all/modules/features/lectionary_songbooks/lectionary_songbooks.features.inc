<?php
/**
 * @file
 * lectionary_songbooks.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lectionary_songbooks_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function lectionary_songbooks_node_info() {
  $items = array(
    'songbook' => array(
      'name' => t('Songbook'),
      'base' => 'node_content',
      'description' => t('Information about a songbook/hymnal.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
