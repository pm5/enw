<?php
/**
 * @file
 * tabs.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function tabs_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'default_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Default tabs';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'block_delta_6',
      'hide_title' => 1,
      'title' => 'headlines',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'block_delta_7',
      'hide_title' => 1,
      'title' => 'full schedule',
      'weight' => '-99',
      'type' => 'block',
    ),
    2 => array(
      'bid' => 'block_delta_8',
      'hide_title' => 1,
      'title' => 'appearances',
      'weight' => '-98',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Default tabs');
  t('appearances');
  t('full schedule');
  t('headlines');

  $export['default_tabs'] = $quicktabs;

  return $export;
}
