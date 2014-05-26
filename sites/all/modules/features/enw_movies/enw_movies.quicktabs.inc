<?php
/**
 * @file
 * enw_movies.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function enw_movies_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'video_list';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = '環境教育影片';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'video_list',
      'display' => 'default',
      'args' => '98',
      'title' => '學校及社會環境教育',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'video_list',
      'display' => 'default',
      'args' => '99',
      'title' => '氣候變遷',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'video_list',
      'display' => 'default',
      'args' => '100',
      'title' => '災害防救',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'video_list',
      'display' => 'default',
      'args' => '102',
      'title' => '自然保育',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'video_list',
      'display' => 'default',
      'args' => '101',
      'title' => '公害防治',
      'weight' => '-96',
      'type' => 'view',
    ),
    5 => array(
      'vid' => 'video_list',
      'display' => 'default',
      'args' => '103',
      'title' => '環境及資源管理',
      'weight' => '-95',
      'type' => 'view',
    ),
    6 => array(
      'vid' => 'video_list',
      'display' => 'default',
      'args' => '104',
      'title' => '文化保存',
      'weight' => '-94',
      'type' => 'view',
    ),
    7 => array(
      'vid' => 'video_list',
      'display' => 'default',
      'args' => '105',
      'title' => '社區參與',
      'weight' => '-93',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'Enw';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('公害防治');
  t('學校及社會環境教育');
  t('文化保存');
  t('氣候變遷');
  t('災害防救');
  t('環境及資源管理');
  t('環境教育影片');
  t('社區參與');
  t('自然保育');

  $export['video_list'] = $quicktabs;

  return $export;
}
