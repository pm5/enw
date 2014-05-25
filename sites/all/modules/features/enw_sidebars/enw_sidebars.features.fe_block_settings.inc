<?php
/**
 * @file
 * enw_sidebars.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function enw_sidebars_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-banner'] = array(
    'cache' => -1,
    'css_class' => 'banner-block',
    'custom' => '0',
    'machine_name' => 'banner',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'video-main
month_topic/*
month_topic
monthly-topics
monthly-topics/*
video-list
video-list/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'theme721',
        'weight' => '-32',
      ),
    ),
    'title' => '廣宣特區',
    'visibility' => '0',
  );

  $export['fb_likebox-0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => '0',
    'module' => 'fb_likebox',
    'node_types' => array(),
    'pages' => 'video-main
month_topic
month_topic/*
monthly-topics
monthly-topics/*
video-list
video-list/*
video/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'theme721',
        'weight' => '-31',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['views-latest_news-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'latest_news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'video-main
month_topic
month_topic/*
monthly-topics
monthly-topics/*
video-list
video-list/*
video/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'theme721',
        'weight' => '-35',
      ),
    ),
    'title' => '最新新聞',
    'visibility' => '0',
  );

  $export['views-most_recommended-block_1'] = array(
    'cache' => -1,
    'css_class' => 'recommand-block',
    'custom' => '0',
    'delta' => 'most_recommended-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'video-main
month_topic/*
month_topic
monthly-topics
monthly-topics/*
video-list
video-list/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'theme721',
        'weight' => '-33',
      ),
    ),
    'title' => '本月主打影片',
    'visibility' => '0',
  );

  $export['views-videolist-block_1'] = array(
    'cache' => -1,
    'css_class' => 'videolist-block',
    'custom' => '0',
    'delta' => 'videolist-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'video/*',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'theme721',
        'weight' => '-34',
      ),
    ),
    'title' => '影片列表',
    'visibility' => '1',
  );

  $export['visitors-0'] = array(
    'cache' => -1,
    'css_class' => 'vistors-block',
    'custom' => '0',
    'delta' => '0',
    'module' => 'visitors',
    'node_types' => array(),
    'pages' => 'video_main
month_topic
video-list/*
month_topic/*
monthly-topics
monthly-topics/*
video-list',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'theme721',
        'weight' => '-30',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
