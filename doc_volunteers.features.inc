<?php
/**
 * @file
 * doc_volunteers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function doc_volunteers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function doc_volunteers_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_profile2_type().
 */
function doc_volunteers_default_profile2_type() {
  $items = array();
  $items['volunteer'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "volunteer",
    "label" : "Volunteer",
    "weight" : "0",
    "data" : { "registration" : 0 }
  }');
  return $items;
}
