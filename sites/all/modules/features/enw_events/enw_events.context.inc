<?php
/**
 * @file
 * enw_events.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function enw_events_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop_events';
  $context->description = '「環境教育活動」側欄';
  $context->tag = 'desktop';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        2 => 2,
        3 => 3,
      ),
    ),
    'path' => array(
      'values' => array(
        'events' => 'events',
        'events/*' => 'events/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-enw_events-page' => array(
          'module' => 'views',
          'delta' => '-exp-enw_events-page',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('desktop');
  t('「環境教育活動」側欄');
  $export['desktop_events'] = $context;

  return $export;
}
