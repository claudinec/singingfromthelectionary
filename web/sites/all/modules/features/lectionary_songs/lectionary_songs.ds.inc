<?php
/**
 * @file
 * lectionary_songs.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function lectionary_songs_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|song|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'song';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => 'song-title',
        'ft' => array(),
      ),
    ),
  );
  $export['node|song|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function lectionary_songs_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_song_references|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_song_references';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_song',
      ),
    ),
    'fields' => array(
      'field_song' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_song_references|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|song|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'song';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_author',
        2 => 'body',
        3 => 'field_scripture_references',
        4 => 'field_songbook_references',
        5 => 'field_tags',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_author' => 'ds_content',
      'body' => 'ds_content',
      'field_scripture_references' => 'ds_content',
      'field_songbook_references' => 'ds_content',
      'field_tags' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|song|default'] = $ds_layout;

  return $export;
}
