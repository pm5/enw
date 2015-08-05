<?php
/**
 * @file
 * enw_press_release.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enw_press_release_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function enw_press_release_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function enw_press_release_node_info() {
  $items = array(
    'enw_press_release' => array(
      'name' => t('採訪通告'),
      'base' => 'node_content',
      'description' => t('首頁「環保署採訪通告」內容。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  return $items;
}
