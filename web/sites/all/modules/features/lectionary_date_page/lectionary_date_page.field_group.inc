<?php
/**
 * @file
 * lectionary_date_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function lectionary_date_page_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lectionary_scripture_ref|field_collection_item|field_lectionary_section|default';
  $field_group->group_name = 'group_lectionary_scripture_ref';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_lectionary_section';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_scripture_ref_book',
      1 => 'field_scripture_ref_num',
    ),
    'format_type' => 'inline',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'separator' => '',
        'extra_classes' => '',
      ),
    ),
  );
  $field_groups['group_lectionary_scripture_ref|field_collection_item|field_lectionary_section|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_lectionary_scripture_ref|field_collection_item|field_lectionary_section|form';
  $field_group->group_name = 'group_lectionary_scripture_ref';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_lectionary_section';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Lectionary scripture ref',
    'weight' => '3',
    'children' => array(
      0 => 'field_scripture_ref_book',
      1 => 'field_scripture_ref_num',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-lectionary-scripture-ref field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_lectionary_scripture_ref|field_collection_item|field_lectionary_section|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Lectionary scripture ref');

  return $field_groups;
}
