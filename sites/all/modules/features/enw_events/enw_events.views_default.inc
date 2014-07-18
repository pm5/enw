<?php
/**
 * @file
 * enw_events.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function enw_events_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'enw_events';
  $view->description = '「活動資訊」或「環境教育活動」相關內容列表。';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '活動行事曆';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '活動行事曆';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '搜尋';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重設';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '32';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_date' => 'field_event_date',
    'field_domain' => 'field_domain',
    'title' => 'title',
    'body' => 'body',
    'colorbox' => 'colorbox',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_domain' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'colorbox' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* 欄位: 內容: 活動時間 */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* 欄位: 內容: 標題 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* 欄位: 內容: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* 欄位: Colorbox: Colorbox trigger */
  $handler->display->display_options['fields']['colorbox']['id'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['table'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['field'] = 'colorbox';
  $handler->display->display_options['fields']['colorbox']['label'] = '';
  $handler->display->display_options['fields']['colorbox']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['colorbox']['trigger_field'] = 'title';
  $handler->display->display_options['fields']['colorbox']['popup'] = '[field_domain]
[field_event_date]
[title]
[body]';
  $handler->display->display_options['fields']['colorbox']['gid'] = 1;
  /* Sort criterion: 內容: 活動時間 -  start date (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
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
    'event_info' => 'event_info',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: 內容: 標題 */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = '活動名稱';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  /* Filter criterion: 日期: Between Dates (node) */
  $handler->display->display_options['filters']['between_date_filter']['id'] = 'between_date_filter';
  $handler->display->display_options['filters']['between_date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['between_date_filter']['field'] = 'between_date_filter';
  $handler->display->display_options['filters']['between_date_filter']['group'] = 1;
  $handler->display->display_options['filters']['between_date_filter']['exposed'] = TRUE;
  $handler->display->display_options['filters']['between_date_filter']['expose']['operator_id'] = 'between_date_filter_op';
  $handler->display->display_options['filters']['between_date_filter']['expose']['label'] = '活動日期';
  $handler->display->display_options['filters']['between_date_filter']['expose']['operator'] = 'between_date_filter_op';
  $handler->display->display_options['filters']['between_date_filter']['expose']['identifier'] = 'date';
  $handler->display->display_options['filters']['between_date_filter']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['between_date_filter']['group_info']['label'] = 'Between Dates (node)';
  $handler->display->display_options['filters']['between_date_filter']['group_info']['identifier'] = 'between_date_filter';
  $handler->display->display_options['filters']['between_date_filter']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['between_date_filter']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['between_date_filter']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['between_date_filter']['default_date'] = 'today';
  $handler->display->display_options['filters']['between_date_filter']['start_date_field'] = 'field_data_field_event_date.field_event_date_value';
  $handler->display->display_options['filters']['between_date_filter']['end_date_field'] = 'field_data_field_event_date.field_event_date_value2';
  /* Filter criterion: 內容: 環境教育專業領域 (field_domain) */
  $handler->display->display_options['filters']['field_domain_tid']['id'] = 'field_domain_tid';
  $handler->display->display_options['filters']['field_domain_tid']['table'] = 'field_data_field_domain';
  $handler->display->display_options['filters']['field_domain_tid']['field'] = 'field_domain_tid';
  $handler->display->display_options['filters']['field_domain_tid']['value'] = '';
  $handler->display->display_options['filters']['field_domain_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_domain_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_domain_tid']['expose']['operator_id'] = 'field_domain_tid_op';
  $handler->display->display_options['filters']['field_domain_tid']['expose']['label'] = '領域';
  $handler->display->display_options['filters']['field_domain_tid']['expose']['operator'] = 'field_domain_tid_op';
  $handler->display->display_options['filters']['field_domain_tid']['expose']['identifier'] = 'field_domain_tid';
  $handler->display->display_options['filters']['field_domain_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_domain_tid']['expose']['remember_roles'] = array(
    2 => 0,
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_domain_tid']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_domain_tid']['group_info']['label'] = '環境教育八大領域';
  $handler->display->display_options['filters']['field_domain_tid']['group_info']['identifier'] = 'field_domain_tid';
  $handler->display->display_options['filters']['field_domain_tid']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_domain_tid']['group_info']['remember'] = 1;
  $handler->display->display_options['filters']['field_domain_tid']['group_info']['group_items'] = array(
    1 => array(
      'title' => '學校及社會環境教育',
      'operator' => 'or',
      'value' => array(
        86 => '86',
      ),
    ),
    2 => array(
      'title' => '氣候變遷',
      'operator' => 'or',
      'value' => array(
        87 => '87',
      ),
    ),
    3 => array(
      'title' => '災害防救',
      'operator' => 'or',
      'value' => array(
        88 => '88',
      ),
    ),
    4 => array(
      'title' => '自然保育',
      'operator' => 'or',
      'value' => array(
        89 => '89',
      ),
    ),
    5 => array(
      'title' => '公害防治',
      'operator' => 'or',
      'value' => array(
        90 => '90',
      ),
    ),
    6 => array(
      'title' => '環境及資源管理',
      'operator' => 'or',
      'value' => array(
        91 => '91',
      ),
    ),
    7 => array(
      'title' => '文化保存',
      'operator' => 'or',
      'value' => array(
        92 => '92',
      ),
    ),
    8 => array(
      'title' => '社區參與',
      'operator' => 'or',
      'value' => array(
        93 => '93',
      ),
    ),
  );
  $handler->display->display_options['filters']['field_domain_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_domain_tid']['vocabulary'] = 'expert';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'events';

  /* Display: Block: Latest */
  $handler = $view->new_display('block', 'Block: Latest', 'latest_block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« 第一頁';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ 上一頁';
  $handler->display->display_options['pager']['options']['tags']['next'] = '下一頁 ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = '最後一頁 »';
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
    'event_info' => 'event_info',
  );
  /* Filter criterion: 內容: 活動時間 -  start date (field_event_date) */
  $handler->display->display_options['filters']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['filters']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator_id'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['label'] = '活動時間 -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['operator'] = 'field_event_date_value_op';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_event_date_value']['group_info']['label'] = '活動時間 -  start date (field_event_date)';
  $handler->display->display_options['filters']['field_event_date_value']['group_info']['identifier'] = 'field_event_date_value';
  $handler->display->display_options['filters']['field_event_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_event_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_event_date_value']['form_type'] = 'date_popup';
  $handler->display->display_options['filters']['field_event_date_value']['default_date'] = 'now';
  $translatables['enw_events'] = array(
    t('Master'),
    t('活動行事曆'),
    t('more'),
    t('搜尋'),
    t('重設'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('活動名稱'),
    t('活動日期'),
    t('Between Dates (node)'),
    t('領域'),
    t('環境教育八大領域'),
    t('Page'),
    t('Block: Latest'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« 第一頁'),
    t('‹ 上一頁'),
    t('下一頁 ›'),
    t('最後一頁 »'),
    t('活動時間 -  start date (field_event_date)'),
  );
  $export['enw_events'] = $view;

  return $export;
}
