<?php
/**
 * @file
 * lectionary_imports.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function lectionary_imports_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'song_index';
  $feeds_importer->config = array(
    'name' => 'Song index',
    'description' => 'Song index from Natalie',
    'fetcher' => array(
      'plugin_key' => 'FeedsSQLFetcher',
      'config' => array(
        'databases' => array(
          'lectionary-rds' => 'lectionary-rds',
          'default' => 0,
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSQLParser',
      'config' => array(
        'query' => 'select song_id,
First_line,
Author,
concat_ws(\'\\t\',
REGEXP_REPLACE(TiS,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(AHB,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(AoV,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(All_together_books,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(NCH,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Iona_books,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(CH4,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(UMH,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(VU_MV,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(StJ_StS,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Lutheran_sources,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Evangelical_Lutheran_Worship,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Alleluia_Aotearoa_Faith_Forever_Singing,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(StF_FwS,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Hymns_for_a_Pilgrim_People_Congregational,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Presbyterian_Hymnal,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
Gather_2nd_Ed,
REGEXP_REPLACE(Gather_comprehensive,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Gather_Comprehensive_2,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
Ritual_Song,
REGEXP_REPLACE(CP_Canada,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
CP_England,
REGEXP_REPLACE(Column_24,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Chalice,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Zion_Still_Sings,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(The_Source,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(URW,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
Column_29,
REGEXP_REPLACE(StF,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
REGEXP_REPLACE(Column_31,\'(ATAR)*([0-9].*)\',\'\\\\1 \\\\2\'),
MP
) as songbooks,
concat_ws(\'\\t\', References_or_purpose, Comments, Column_39, Column_40, Column_42, Column_69, Column_71, Column_79) as Comments
from song_index',
        'database' => 'lectionary-rds',
        'mapping' => array(
          'Author' => 'Author',
          'Comments' => 'Comments',
          'First_line' => 'First_line',
          'song_id' => 'song_id',
          'songbooks' => 'songbooks',
        ),
        'results' => '',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'First_line',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'First_line',
            'target' => 'field_first_line',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Author',
            'target' => 'field_author',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'songbooks',
            'target' => 'field_songbook_references',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Comments',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'song_id',
            'target' => 'field_imported_song_id',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'song',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '900',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['song_index'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'songbook_list';
  $feeds_importer->config = array(
    'name' => 'Songbook list',
    'description' => 'List of songbooks from original site',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => 0,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
          'private' => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
        'encoding' => 'UTF-8',
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Abbreviation',
            'target' => 'field_abbreviation',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'Notes',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'songbook',
        'insert_new' => 1,
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['songbook_list'] = $feeds_importer;

  return $export;
}
