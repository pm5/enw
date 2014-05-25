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
  list($module, $api) = func_get_args();
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
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
 * Implements hook_image_default_styles().
 */
function enw_movies_image_default_styles() {
  $styles = array();

  // Exported image style: enw_movies_thumbnail_slider.
  $styles['enw_movies_thumbnail_slider'] = array(
    'name' => 'enw_movies_thumbnail_slider',
    'label' => '環境影展導覽',
    'effects' => array(
      13 => array(
        'label' => '縮放和裁剪',
        'help' => '比例縮放將會保持原始圖片的寬高比，然後裁切最大邊。這通常對建立不拉伸的完美的方形縮略圖是最有用的。',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '220',
          'height' => '125',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: video_list_thumbnail.
  $styles['video_list_thumbnail'] = array(
    'name' => 'video_list_thumbnail',
    'label' => 'Video list thumbnail',
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
          'width' => '240',
          'height' => '180',
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
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('標題'),
      'help' => '',
    ),
  );
  return $items;
}
