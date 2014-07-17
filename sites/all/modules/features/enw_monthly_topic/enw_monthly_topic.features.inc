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
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
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
 * Implements hook_image_default_styles().
 */
function enw_monthly_topic_image_default_styles() {
  $styles = array();

  // Exported image style: monthly_topic_medium.
  $styles['monthly_topic_medium'] = array(
    'name' => 'monthly_topic_medium',
    'label' => '環境節日中圖',
    'effects' => array(
      15 => array(
        'label' => '縮放和裁剪',
        'help' => '比例縮放將會保持原始圖片的寬高比，然後裁切最大邊。這通常對建立不拉伸的完美的方形縮略圖是最有用的。',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '388',
          'height' => '295',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: monthly_topic_thumbnail.
  $styles['monthly_topic_thumbnail'] = array(
    'name' => 'monthly_topic_thumbnail',
    'label' => '環境節日縮圖',
    'effects' => array(
      14 => array(
        'label' => '縮放和裁剪',
        'help' => '比例縮放將會保持原始圖片的寬高比，然後裁切最大邊。這通常對建立不拉伸的完美的方形縮略圖是最有用的。',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '320',
          'height' => '255',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
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
