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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
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
        'weight' => '-36',
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
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
        'weight' => '-40',
      ),
    ),
    'title' => '最新新聞',
    'visibility' => '0',
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
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => '0',
      ),
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
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
