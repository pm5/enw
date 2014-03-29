<?php
/**
 * @file
 * enw_movies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enw_movies_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function enw_movies_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function enw_movies_node_info() {
  $items = array(
    'movie' => array(
      'name' => t('Movie'),
      'base' => 'node_content',
      'description' => t('「環境影展」影片。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  return $items;
}
