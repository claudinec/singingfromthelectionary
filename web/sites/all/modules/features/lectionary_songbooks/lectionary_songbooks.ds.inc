<?php
/**
 * @file
 * lectionary_songbooks.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function lectionary_songbooks_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|songbook|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'songbook';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
      ),
    ),
  );
  $export['node|songbook|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function lectionary_songbooks_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|songbook|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'songbook';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_abbreviation',
        2 => 'body',
        3 => 'field_songbook_info_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_abbreviation' => 'ds_content',
      'body' => 'ds_content',
      'field_songbook_info_link' => 'ds_content',
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
  $export['node|songbook|default'] = $ds_layout;

  return $export;
}
