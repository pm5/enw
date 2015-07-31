<?php
/**
 * @file
 * enw_monthly_topic.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function enw_monthly_topic_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Panel: 環境節日',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'monthly-topics',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'monthly_topic' => 'monthly_topic',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '7e5cf5d9-4c0c-4202-bd60-fcfaf1624275';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f1fed27d-3d48-4388-b148-155c09ce164d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_topic-pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f1fed27d-3d48-4388-b148-155c09ce164d';
    $display->content['new-f1fed27d-3d48-4388-b148-155c09ce164d'] = $pane;
    $display->panels['middle'][0] = 'new-f1fed27d-3d48-4388-b148-155c09ce164d';
    $pane = new stdClass();
    $pane->pid = 'new-1125cac8-2fa0-4022-a68c-1cee32fad0a7';
    $pane->panel = 'middle';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 0,
      'no_extras' => 0,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1125cac8-2fa0-4022-a68c-1cee32fad0a7';
    $display->content['new-1125cac8-2fa0-4022-a68c-1cee32fad0a7'] = $pane;
    $display->panels['middle'][1] = 'new-1125cac8-2fa0-4022-a68c-1cee32fad0a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1125cac8-2fa0-4022-a68c-1cee32fad0a7';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function enw_monthly_topic_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'monthly_topics';
  $page->task = 'page';
  $page->admin_title = '環境節日';
  $page->admin_description = '「環境節日」專頁。';
  $page->path = 'monthly-topics';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => '環境節日',
    'name' => 'menu-secondary-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_monthly_topics_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'monthly_topics';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Panel: mobile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'monthly-topics',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'mobile_detect_ctools',
          'settings' => array(
            'type' => 'isMobile',
          ),
          'context' => array(),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '79f363fc-3f76-4c1f-a910-d427da6f17b7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7d1cea5f-f85c-430d-b5d4-7c5bfd608fd6';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_topic-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7d1cea5f-f85c-430d-b5d4-7c5bfd608fd6';
    $display->content['new-7d1cea5f-f85c-430d-b5d4-7c5bfd608fd6'] = $pane;
    $display->panels['middle'][0] = 'new-7d1cea5f-f85c-430d-b5d4-7c5bfd608fd6';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_monthly_topics_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'monthly_topics';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'monthly-topics',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->uuid = '79f363fc-3f76-4c1f-a910-d427da6f17b7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-eb5b101a-2317-4705-b069-f2a38e753557';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'monthly_topic-pane';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eb5b101a-2317-4705-b069-f2a38e753557';
    $display->content['new-eb5b101a-2317-4705-b069-f2a38e753557'] = $pane;
    $display->panels['middle'][0] = 'new-eb5b101a-2317-4705-b069-f2a38e753557';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['monthly_topics'] = $page;

  return $pages;

}
