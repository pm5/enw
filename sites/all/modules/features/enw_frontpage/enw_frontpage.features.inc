<?php
/**
 * @file
 * enw_frontpage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enw_frontpage_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "quicktabs" && $api == "quicktabs") {
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
function enw_frontpage_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function enw_frontpage_image_default_styles() {
  $styles = array();

  // Exported image style: enw_slider.
  $styles['enw_slider'] = array(
    'name' => 'enw_slider',
    'label' => 'enw slider',
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
          'width' => '660',
          'height' => '390',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: frontpage_promotion_medium.
  $styles['frontpage_promotion_medium'] = array(
    'name' => 'frontpage_promotion_medium',
    'label' => '首頁推薦中圖',
    'effects' => array(
      12 => array(
        'label' => '縮放和裁剪',
        'help' => '比例縮放將會保持原始圖片的寬高比，然後裁切最大邊。這通常對建立不拉伸的完美的方形縮略圖是最有用的。',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '210',
          'height' => '166',
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
function enw_frontpage_node_info() {
  $items = array(
    'slider' => array(
      'name' => t('Slider'),
      'base' => 'node_content',
      'description' => t('Use to create slides in header-slider.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
