<?php
/**
 * @file
 * lectionary_songs.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lectionary_songs_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author|node|song|default';
  $field_group->group_name = 'group_title_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_author',
      1 => 'title',
    ),
    'format_type' => 'inline',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'separator' => '|',
        'extra_classes' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_author|node|song|teaser';
  $field_group->group_name = 'group_title_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'song';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_author',
      1 => 'title',
    ),
    'format_type' => 'inline',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'separator' => '|',
        'extra_classes' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  return $field_groups;
}
