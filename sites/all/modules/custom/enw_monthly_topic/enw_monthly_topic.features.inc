<?php
/**
 * @file
 * enw_monthly_topic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enw_monthly_topic_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function enw_monthly_topic_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function enw_monthly_topic_node_info() {
  $items = array(
    'monthly_topic' => array(
      'name' => t('環境節日'),
      'base' => 'node_content',
      'description' => t('「環境節日」內容。也就是「節日壽星」、「本月壽星」的內容。'),
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  return $items;
}
