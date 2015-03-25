<?php
/**
 * @file
 * enw_footer.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function enw_footer_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-banner'] = array(
    'cache' => -1,
    'css_class' => '',
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
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}
