<?php
/**
 * @file
 * enw_movies.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function enw_movies_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_http_response';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'http_response';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'HTTP 403: 環境影展',
    'contexts' => array(),
    'relationships' => array(),
    'code' => '403',
    'destination' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'ruleset:tw_user_only',
          'settings' => NULL,
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'movie' => 'movie',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $export['node_view_http_response'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function enw_movies_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'movies';
  $page->task = 'page';
  $page->admin_title = '環境影展';
  $page->admin_description = '「環境影展」landing page。';
  $page->path = 'movies';
  $page->access = array(
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
  $handler->name = 'page_movies_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'movies';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
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
  $display->title = '環境影展';
  $display->uuid = '21c150cd-44c6-4035-b81f-f1f711025bb3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c8d577b5-1a31-42df-83fe-67ebabd399b8';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'movie-theater_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'ruleset:tw_user_only',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_id' => 'enw-movies-slideshow',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c8d577b5-1a31-42df-83fe-67ebabd399b8';
    $display->content['new-c8d577b5-1a31-42df-83fe-67ebabd399b8'] = $pane;
    $display->panels['middle'][0] = 'new-c8d577b5-1a31-42df-83fe-67ebabd399b8';
    $pane = new stdClass();
    $pane->pid = 'new-8131f5f6-42e7-48bb-bede-9a57fcafe92f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'movie-theater_slider_pane';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'ruleset:tw_user_only',
          'settings' => NULL,
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_id' => 'enw-movies-navigation',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8131f5f6-42e7-48bb-bede-9a57fcafe92f';
    $display->content['new-8131f5f6-42e7-48bb-bede-9a57fcafe92f'] = $pane;
    $display->panels['middle'][1] = 'new-8131f5f6-42e7-48bb-bede-9a57fcafe92f';
    $pane = new stdClass();
    $pane->pid = 'new-2326c2ca-da5a-4459-aa8a-f87e2702b36a';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-video_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2326c2ca-da5a-4459-aa8a-f87e2702b36a';
    $display->content['new-2326c2ca-da5a-4459-aa8a-f87e2702b36a'] = $pane;
    $display->panels['middle'][2] = 'new-2326c2ca-da5a-4459-aa8a-f87e2702b36a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['movies'] = $page;

  return $pages;

}
