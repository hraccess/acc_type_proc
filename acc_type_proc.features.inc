<?php
/**
 * @file
 * acc_type_proc.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_type_proc_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
