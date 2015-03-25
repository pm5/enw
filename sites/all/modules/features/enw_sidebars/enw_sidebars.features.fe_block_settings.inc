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

  $export['fb_likebox-0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => '0',
    'module' => 'fb_likebox',
    'node_types' => array(),
    'pages' => 'events
events/*
monthly-topics
monthly-topics/*
video/*',
    'roles' => array(),
    'themes' => array(
      'enwmobile' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'enwmobile',
        'weight' => '-27',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme721',
        'weight' => '-27',
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
events
events/*
month_topic
month_topic/*
monthly-topics
monthly-topics/*
video-list
video-list/*
video/*',
    'roles' => array(),
    'themes' => array(
      'enwmobile' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'enwmobile',
        'weight' => '-30',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme721',
        'weight' => '-31',
      ),
    ),
    'title' => '最新新聞',
    'visibility' => '0',
  );

  $export['views-most_recommended-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
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
      'enwmobile' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'enwmobile',
        'weight' => '-28',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme721',
        'weight' => '-28',
      ),
    ),
    'title' => '本月主打影片',
    'visibility' => '0',
  );

  $export['views-videolist-block_1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'videolist-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'video/*',
    'roles' => array(),
    'themes' => array(
      'enwmobile' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'enwmobile',
        'weight' => '-30',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme721',
        'weight' => '-31',
      ),
    ),
    'title' => '影片列表',
    'visibility' => '1',
  );

  $export['visitors-0'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => '0',
    'module' => 'visitors',
    'node_types' => array(),
    'pages' => 'video_main
month_topic
video-list/*
events
events/*
month_topic/*
monthly-topics
monthly-topics/*
video-list',
    'roles' => array(),
    'themes' => array(
      'enwmobile' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'enwmobile',
        'weight' => '-26',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'theme721',
        'weight' => '-26',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
