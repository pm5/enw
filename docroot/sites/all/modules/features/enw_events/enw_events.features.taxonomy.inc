<?php
/**
 * @file
 * enw_events.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function enw_events_taxonomy_default_vocabularies() {
  return array(
    'expert' => array(
      'name' => '環境教育專業領域',
      'machine_name' => 'expert',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
