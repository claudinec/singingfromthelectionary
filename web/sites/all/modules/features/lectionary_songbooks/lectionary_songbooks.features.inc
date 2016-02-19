<?php
/**
 * @file
 * lectionary_songbooks.features.inc
 */

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
