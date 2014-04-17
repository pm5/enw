<?php
/**
 * @file
 * enw_monthly_topic.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function enw_monthly_topic_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'monthly_topic';
  $view->description = '「環境節日」內容';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '環境節日';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '環境節日';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重設';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 欄位: 內容: 公仔 */
  $handler->display->display_options['fields']['field_doll']['id'] = 'field_doll';
  $handler->display->display_options['fields']['field_doll']['table'] = 'field_data_field_doll';
  $handler->display->display_options['fields']['field_doll']['field'] = 'field_doll';
  $handler->display->display_options['fields']['field_doll']['label'] = '';
  $handler->display->display_options['fields']['field_doll']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doll']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doll']['settings'] = array(
    'image_style' => 'month_topic_thumbnail',
    'image_link' => 'content',
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
    'monthly_topic' => 'monthly_topic',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'monthly-topic';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '環境節日';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-secondary-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['monthly_topic'] = array(
    t('Master'),
    t('環境節日'),
    t('more'),
    t('Apply'),
    t('重設'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Page'),
  );
  $export['monthly_topic'] = $view;

  return $export;
}
