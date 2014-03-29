<?php
/**
 * @file
 * enw_movies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function enw_movies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'movie';
  $view->description = '「環境影展」影片';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '環境影展';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重設';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'slides';
  $handler->display->display_options['style_options']['wrapper_class'] = 'enw-movies-slideshow';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 欄位: 內容: vvid */
  $handler->display->display_options['fields']['field_vvid']['id'] = 'field_vvid';
  $handler->display->display_options['fields']['field_vvid']['table'] = 'field_data_field_vvid';
  $handler->display->display_options['fields']['field_vvid']['field'] = 'field_vvid';
  $handler->display->display_options['fields']['field_vvid']['label'] = '';
  $handler->display->display_options['fields']['field_vvid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vvid']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_vvid']['settings'] = array(
    'video_style' => 'normal',
  );
  /* Sort criterion: 內容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: 內容: 已發表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 內容: 類型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'movie' => 'movie',
  );

  /* Display: 影片 */
  $handler = $view->new_display('panel_pane', '影片', 'theater_pane');
  $handler->display->display_options['pane_category']['name'] = '環境通訊網';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: 導覽 */
  $handler = $view->new_display('panel_pane', '導覽', 'theater_slider_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'slides';
  $handler->display->display_options['style_options']['wrapper_class'] = 'enw-movies-navigation';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 欄位: 內容: vvid */
  $handler->display->display_options['fields']['field_vvid']['id'] = 'field_vvid';
  $handler->display->display_options['fields']['field_vvid']['table'] = 'field_data_field_vvid';
  $handler->display->display_options['fields']['field_vvid']['field'] = 'field_vvid';
  $handler->display->display_options['fields']['field_vvid']['label'] = '';
  $handler->display->display_options['fields']['field_vvid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vvid']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_vvid']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_vvid']['settings'] = array(
    'image_style' => 'theater_slider',
    'image_link' => '',
  );
  $handler->display->display_options['pane_category']['name'] = '環境通訊網';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $translatables['movie'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重設'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('影片'),
    t('環境通訊網'),
    t('導覽'),
  );
  $export['movie'] = $view;

  return $export;
}
