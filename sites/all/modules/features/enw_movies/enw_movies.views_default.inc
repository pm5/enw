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
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'movies_theater_w_thumbnail_slider';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* 欄位: 內容: vvid */
  $handler->display->display_options['fields']['field_vvid']['id'] = 'field_vvid';
  $handler->display->display_options['fields']['field_vvid']['table'] = 'field_data_field_vvid';
  $handler->display->display_options['fields']['field_vvid']['field'] = 'field_vvid';
  $handler->display->display_options['fields']['field_vvid']['label'] = '';
  $handler->display->display_options['fields']['field_vvid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vvid']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_vvid']['settings'] = array(
    'video_style' => 'fullpage',
  );
  /* 欄位: 內容: 標題 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* 欄位: 內容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['pane_category']['name'] = '環境通訊網';
  $handler->display->display_options['pane_category']['weight'] = '0';

  /* Display: 導覽 */
  $handler = $view->new_display('panel_pane', '導覽', 'theater_slider_pane');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'movies_thumbnail_slider';
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
    'image_style' => 'enw_movies_thumbnail_slider',
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

  $view = new view();
  $view->name = 'video_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '環境教育影片列表';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一頁';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 上一頁';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一頁 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '最後一頁 »';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 欄位: 內容: vvid */
  $handler->display->display_options['fields']['field_vvid']['id'] = 'field_vvid';
  $handler->display->display_options['fields']['field_vvid']['table'] = 'field_data_field_vvid';
  $handler->display->display_options['fields']['field_vvid']['field'] = 'field_vvid';
  $handler->display->display_options['fields']['field_vvid']['label'] = '';
  $handler->display->display_options['fields']['field_vvid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_vvid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_vvid']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_vvid']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_vvid']['settings'] = array(
    'image_style' => 'video_list_thumbnail',
    'image_link' => 'content',
  );
  /* 欄位: 內容: Video link */
  $handler->display->display_options['fields']['field_video_link']['id'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['table'] = 'field_data_field_video_link';
  $handler->display->display_options['fields']['field_video_link']['field'] = 'field_video_link';
  $handler->display->display_options['fields']['field_video_link']['label'] = '';
  $handler->display->display_options['fields']['field_video_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video_link']['empty'] = '[field_vvid]';
  $handler->display->display_options['fields']['field_video_link']['click_sort_column'] = 'input';
  $handler->display->display_options['fields']['field_video_link']['type'] = 'youtube_thumbnail';
  $handler->display->display_options['fields']['field_video_link']['settings'] = array(
    'image_style' => 'video_list_thumbnail',
    'image_link' => 'content',
  );
  /* 欄位: 內容: 標題 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* 欄位: 內容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  /* Sort criterion: 內容: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: 內容: 類型 */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'node';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Contextual filter: 內容: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = '所有';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
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
    'video' => 'video',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Attachment: Movies */
  $handler = $view->new_display('attachment', 'Attachment: Movies', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
    'image_style' => 'enw_movies_thumbnail_slider',
    'image_link' => 'content',
  );
  /* 欄位: 內容: 標題 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* 欄位: 內容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '200',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block_1' => 0,
  );
  $translatables['video_list'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('重設'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« 第一頁'),
    t('‹ 上一頁'),
    t('下一頁 ›'),
    t('最後一頁 »'),
    t('[field_vvid]'),
    t('所有'),
    t('%1'),
    t('Block'),
    t('Attachment: Movies'),
  );
  $export['video_list'] = $view;

  return $export;
}
