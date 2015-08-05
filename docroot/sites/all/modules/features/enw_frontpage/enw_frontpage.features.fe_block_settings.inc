<?php
/**
 * @file
 * enw_frontpage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function enw_frontpage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-slider-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'slider-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node
font
front
<front>',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'theme721' => array(
        'region' => 'header',
        'status' => '1',
        'theme' => 'theme721',
        'weight' => '-36',
      ),
    ),
    'title' => '<none>',
    'visibility' => '1',
  );

  return $export;
}
