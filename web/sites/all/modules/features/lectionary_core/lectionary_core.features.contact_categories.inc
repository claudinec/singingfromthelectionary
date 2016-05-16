<?php
/**
 * @file
 * lectionary_core.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function lectionary_core_contact_categories_defaults() {
  return array(
    'Website feedback' => array(
      'category' => 'Website feedback',
      'recipients' => 'info@claudinec.net',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
