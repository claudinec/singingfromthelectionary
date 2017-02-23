<?php
/**
 * @file
 * lectionary_date_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function lectionary_date_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'eq_node'.
  $field_bases['eq_node'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'entityqueue_subqueue',
    ),
    'field_name' => 'eq_node',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'entityqueue',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 1,
          ),
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  // Exported field_base: 'field_image'.
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => FALSE,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_lectionary_scripture_refer'.
  $field_bases['field_lectionary_scripture_refer'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_lectionary_scripture_refer',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'scripture_references',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_lectionary_scripture_refs'.
  $field_bases['field_lectionary_scripture_refs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_lectionary_scripture_refs',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_lectionary_section'.
  $field_bases['field_lectionary_section'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_lectionary_section',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => FALSE,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  // Exported field_base: 'field_scripture_notes'.
  $field_bases['field_scripture_notes'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_scripture_notes',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_scripture_ref_book'.
  $field_bases['field_scripture_ref_book'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_scripture_ref_book',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Genesis',
        2 => 'Exodus',
        3 => 'Leviticus',
        4 => 'Numbers',
        5 => 'Deuteronomy',
        6 => 'Joshua',
        7 => 'Judges',
        8 => 'Ruth',
        9 => '1 Samuel',
        10 => '2 Samuel',
        11 => '1 Kings',
        12 => '2 Kings',
        13 => '1 Chronicles',
        14 => '2 Chronicles',
        15 => 'Ezra',
        16 => 'Nehemiah',
        17 => 'Esther',
        18 => 'Job',
        19 => 'Proverbs',
        20 => 'Ecclesiastes',
        21 => 'Song of Solomon',
        22 => 'Isaiah',
        23 => 'Jeremiah',
        24 => 'Lamentations',
        25 => 'Ezekiel',
        26 => 'Daniel',
        27 => 'Hosea',
        28 => 'Joel',
        29 => 'Amos',
        30 => 'Obadiah',
        31 => 'Jonah',
        32 => 'Micah',
        33 => 'Nahum',
        34 => 'Habakkuk',
        35 => 'Zephaniah',
        36 => 'Haggai',
        37 => 'Zechariah',
        38 => 'Malachi',
        39 => 'Psalm',
        40 => 'Matthew',
        41 => 'Mark',
        42 => 'Luke',
        43 => 'John',
        44 => 'Acts',
        45 => 'Romans',
        46 => '1 Corinthians',
        47 => '2 Corinthians',
        48 => 'Galatians',
        49 => 'Ephesians',
        50 => 'Philippians',
        51 => 'Colossians',
        52 => '1 Thessalonians',
        53 => '2 Thessalonians',
        54 => '1 Timothy',
        55 => '2 Timothy',
        56 => 'Titus',
        57 => 'Philemon',
        58 => 'Hebrews',
        59 => 'James',
        60 => '1 Peter',
        61 => '2 Peter',
        62 => '1 John',
        63 => '2 John',
        64 => '3 John',
        65 => 'Jude',
        66 => 'Revelation',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  // Exported field_base: 'field_scripture_ref_num'.
  $field_bases['field_scripture_ref_num'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_scripture_ref_num',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_section'.
  $field_bases['field_section'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_section',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        'Gen' => 'General',
        'OT' => 'Hebrew Scriptures',
        'OT_alt' => 'Hebrew Scriptures (alternate)',
        'Acts' => 'Acts (Easter season)',
        'Ps' => 'Psalm',
        'Ps_alt' => 'Psalm (alternate)',
        'NT' => 'Epistle',
        'Gospel' => 'Gospel',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  // Exported field_base: 'field_song'.
  $field_bases['field_song'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_song',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'behaviors' => array(),
      'handler' => 'views',
      'handler_settings' => array(
        'behaviors' => array(
          'entityqueue' => array(
            'status' => 0,
          ),
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'view' => array(
          'args' => array(),
          'display_name' => 'entityreference_1',
          'view_name' => 'songs_and_authors',
        ),
      ),
      'target_type' => 'node',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
