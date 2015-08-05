<?php
/**
 * @file
 * enw_movies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function enw_movies_taxonomy_default_vocabularies() {
  return array(
    'information' => array(
      'name' => '以作品類型分類',
      'machine_name' => 'information',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'vedios' => array(
      'name' => '環境教育影片分類',
      'machine_name' => 'vedios',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
