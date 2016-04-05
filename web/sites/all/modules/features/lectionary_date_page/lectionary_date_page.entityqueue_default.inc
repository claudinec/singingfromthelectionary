<?php
/**
 * @file
 * lectionary_date_page.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function lectionary_date_page_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'lectionary_pages';
  $queue->label = 'Lectionary pages';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'article' => 'article',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['lectionary_pages'] = $queue;

  return $export;
}
