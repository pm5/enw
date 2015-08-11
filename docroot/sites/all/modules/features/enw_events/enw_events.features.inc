<?php
/**
 * @file
 * enw_events.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enw_events_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function enw_events_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function enw_events_node_info() {
  $items = array(
    'event_info' => array(
      'name' => t('活動資訊'),
      'base' => 'node_content',
      'description' => t('「活動行事曆」與首頁「環境教育活動」的活動資訊。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  return $items;
}
