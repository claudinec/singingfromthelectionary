<?php
/**
 * @file
 * lectionary_imports.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function lectionary_imports_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_imported_song_id'.
  $field_bases['field_imported_song_id'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_imported_song_id',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  return $field_bases;
}
