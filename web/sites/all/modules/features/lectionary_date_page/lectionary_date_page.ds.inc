<?php
/**
 * @file
 * lectionary_date_page.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function lectionary_date_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_lectionary_section|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_lectionary_section';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_section',
        1 => 'field_scripture',
        2 => 'field_scripture_notes',
        3 => 'field_song',
      ),
    ),
    'fields' => array(
      'field_section' => 'ds_content',
      'field_scripture' => 'ds_content',
      'field_scripture_notes' => 'ds_content',
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
  $export['field_collection_item|field_lectionary_section|default'] = $ds_layout;

  return $export;
}
