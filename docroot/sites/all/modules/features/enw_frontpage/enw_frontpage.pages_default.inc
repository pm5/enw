<?php
/**
 * @file
 * enw_frontpage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function enw_frontpage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = '首頁';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array(
    'plugins' => array(),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Panel: Mobile Device',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
  $display->uuid = '6f9dc0de-8c70-46ce-b1bf-6b49aa0bdc3e';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
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
  $display->uuid = 'ec586661-25d2-4120-a888-b5650661e5b3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-89984dea-7a11-409f-9e6a-edd8c32d34de';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-quicktab1';
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
    $pane->uuid = '89984dea-7a11-409f-9e6a-edd8c32d34de';
    $display->content['new-89984dea-7a11-409f-9e6a-edd8c32d34de'] = $pane;
    $display->panels['middle'][0] = 'new-89984dea-7a11-409f-9e6a-edd8c32d34de';
    $pane = new stdClass();
    $pane->pid = 'new-d1f645f4-5c70-4954-b8e5-cb9606913ac3';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-quicktabs2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd1f645f4-5c70-4954-b8e5-cb9606913ac3';
    $display->content['new-d1f645f4-5c70-4954-b8e5-cb9606913ac3'] = $pane;
    $display->panels['middle'][1] = 'new-d1f645f4-5c70-4954-b8e5-cb9606913ac3';
    $pane = new stdClass();
    $pane->pid = 'new-af504d03-34a4-437b-9ff5-e83237c394ea';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-quicktab3';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'af504d03-34a4-437b-9ff5-e83237c394ea';
    $display->content['new-af504d03-34a4-437b-9ff5-e83237c394ea'] = $pane;
    $display->panels['middle'][2] = 'new-af504d03-34a4-437b-9ff5-e83237c394ea';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
