<?php
/**
 * @file
 * lectionary_songs.features.inc
 */

/**
 * Implements hook_node_info().
 */
function lectionary_songs_node_info() {
  $items = array(
    'song' => array(
      'name' => t('Song'),
      'base' => 'node_content',
      'description' => t('Information about a song.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
