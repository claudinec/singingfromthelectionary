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
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_songbook_references' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-songbook-references',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-4',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
    'field_scripture_references' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lbw' => 1,
          'lbw-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-scripture-references',
          'ow-def-cl' => TRUE,
          'ow-at' => '',
          'ow-def-at' => TRUE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'col-md-4',
          'fi-at' => '',
          'fi-def-at' => TRUE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => TRUE,
        ),
      ),
    ),
    'field_lyrics_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'link-field',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_sheet_music_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_sound_sample_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'link-field',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
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
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'group_title_author',
        1 => 'title',
        2 => 'field_author',
        3 => 'field_song_notes',
        4 => 'field_song_notes_public',
        5 => 'field_tags',
      ),
      'left' => array(
        6 => 'field_lyrics_link',
        7 => 'field_sheet_music_link',
        8 => 'field_sound_sample_link',
      ),
      'right' => array(
        9 => 'field_scripture_references',
        10 => 'field_songbook_references',
      ),
    ),
    'fields' => array(
      'group_title_author' => 'header',
      'title' => 'header',
      'field_author' => 'header',
      'field_song_notes' => 'header',
      'field_song_notes_public' => 'header',
      'field_tags' => 'header',
      'field_lyrics_link' => 'left',
      'field_sheet_music_link' => 'left',
      'field_sound_sample_link' => 'left',
      'field_scripture_references' => 'right',
      'field_songbook_references' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|song|default'] = $ds_layout;

  return $export;
}
