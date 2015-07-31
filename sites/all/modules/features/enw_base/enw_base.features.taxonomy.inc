<?php
/**
 * @file
 * enw_base.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function enw_base_taxonomy_default_vocabularies() {
  return array(
    'area' => array(
      'name' => '以地區分類',
      'machine_name' => 'area',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'day' => array(
      'name' => '以環境節日分類',
      'machine_name' => 'day',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'main' => array(
      'name' => '主分類',
      'machine_name' => 'main',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'source' => array(
      'name' => '以資訊來源分類',
      'machine_name' => 'source',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'theme' => array(
      'name' => '熱門環境議題',
      'machine_name' => 'theme',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
