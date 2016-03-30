<?php
/**
 * @file
 * lectionary_imports.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function lectionary_imports_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'song_index-comments-array_filter';
  $feeds_tamper->importer = 'song_index';
  $feeds_tamper->source = 'Comments';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['song_index-comments-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'song_index-comments-explode';
  $feeds_tamper->importer = 'song_index';
  $feeds_tamper->source = 'Comments';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '%t',
    'limit' => '',
    'real_separator' => '	',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['song_index-comments-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'song_index-songbooks-array_filter';
  $feeds_tamper->importer = 'song_index';
  $feeds_tamper->source = 'songbooks';
  $feeds_tamper->plugin_id = 'array_filter';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Filter empty items';
  $export['song_index-songbooks-array_filter'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'song_index-songbooks-explode';
  $feeds_tamper->importer = 'song_index';
  $feeds_tamper->source = 'songbooks';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '%t',
    'limit' => '',
    'real_separator' => '	',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['song_index-songbooks-explode'] = $feeds_tamper;

  return $export;
}
