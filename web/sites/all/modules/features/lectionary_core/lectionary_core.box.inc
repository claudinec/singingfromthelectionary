<?php
/**
 * @file
 * lectionary_core.box.inc
 */

/**
 * Implements hook_default_box().
 */
function lectionary_core_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'fb_group_link';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Facebook group';
  $box->options = array(
    'body' => array(
      'value' => 'Want to talk to others about songs based on the lectionary? Got a question to ask? Join our <a href="https://www.facebook.com/groups/SingingFromTheLectionary/">Facebook group</a>.',
      'format' => 'filtered_html',
    ),
  );
  $export['fb_group_link'] = $box;

  return $export;
}
