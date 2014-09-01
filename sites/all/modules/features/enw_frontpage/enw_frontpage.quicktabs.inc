<?php
/**
 * @file
 * enw_frontpage.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function enw_frontpage_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'quicktab1';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = '活動與採訪通告';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'enw_events',
      'display' => 'latest_block',
      'args' => '',
      'title' => '環境教育活動',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'enw_press_releases',
      'display' => 'latest_block',
      'args' => '',
      'title' => '環保署採訪通告',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Enw';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('活動與採訪通告');
  t('環保署採訪通告');
  t('環境教育活動');

  $export['quicktab1'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'quicktab3';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = '綠繪本與環境教案';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'frontpage_promotion',
      'display' => 'taxonomy_carousel_pane',
      'args' => '116',
      'title' => '綠繪本專區',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'frontpage_promotion',
      'display' => 'taxonomy_carousel_pane',
      'args' => '127',
      'title' => '環境教育教案',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Enw';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('環境教育教案');
  t('綠繪本專區');
  t('綠繪本與環境教案');

  $export['quicktab3'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'quicktabs2';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = '本月主題文章與影片';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'frontpage_promotion',
      'display' => 'article_carousel_pane',
      'args' => '',
      'title' => '本月主題文章',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'frontpage_promotion',
      'display' => 'video_carousel_pane',
      'args' => '',
      'title' => '本月主打影片',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Enw';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('本月主打影片');
  t('本月主題文章');
  t('本月主題文章與影片');

  $export['quicktabs2'] = $quicktabs;

  return $export;
}
