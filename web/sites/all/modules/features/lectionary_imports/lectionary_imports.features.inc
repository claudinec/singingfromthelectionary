<?php
/**
 * @file
 * lectionary_imports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lectionary_imports_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}