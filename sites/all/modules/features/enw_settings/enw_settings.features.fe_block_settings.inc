<?php
/**
 * @file
 * enw_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function enw_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['sharethis-sharethis_block'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => '0',
    'delta' => 'sharethis_block',
    'module' => 'sharethis',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
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
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
