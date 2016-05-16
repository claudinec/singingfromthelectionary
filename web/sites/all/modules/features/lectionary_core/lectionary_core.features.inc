<?php
/**
 * @file
 * lectionary_core.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lectionary_core_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lectionary_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
