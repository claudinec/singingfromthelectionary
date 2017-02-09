<?php
/**
 * @file
 * lectionary_core.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function lectionary_core_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_blocks';
  $context->description = 'Blocks to display on all pages.';
  $context->tag = 'blocks';
  $context->conditions = array(
    'default' => array(
      'values' => array(
        'context_condition_default' => 'context_condition_default',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'sidebar_second',
          'weight' => '-17',
        ),
        'menu-menu-indexes' => array(
          'module' => 'menu',
          'delta' => 'menu-indexes',
          'region' => 'sidebar_second',
          'weight' => '-16',
        ),
        'menu-menu-other-useful-resources' => array(
          'module' => 'menu',
          'delta' => 'menu-other-useful-resources',
          'region' => 'sidebar_second',
          'weight' => '-15',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '-14',
        ),
        'system-navigation' => array(
          'module' => 'system',
          'delta' => 'navigation',
          'region' => 'sidebar_second',
          'weight' => '-13',
        ),
        'system-management' => array(
          'module' => 'system',
          'delta' => 'management',
          'region' => 'sidebar_second',
          'weight' => '-12',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Blocks to display on all pages.');
  t('blocks');
  $export['all_blocks'] = $context;

  return $export;
}
