<?php
/**
 * @file
 * lectionary_imports.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function lectionary_imports_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-song-field_imported_song_id'.
  $field_instances['node-song-field_imported_song_id'] = array(
    'bundle' => 'song',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_imported_song_id',
    'label' => 'Imported song ID',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Imported song ID');

  return $field_instances;
}
