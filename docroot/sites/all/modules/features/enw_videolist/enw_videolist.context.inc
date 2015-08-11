<?php
/**
 * @file
 * enw_videolist.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function enw_videolist_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop_videolist';
  $context->description = '環境教育影片列表的側欄。';
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
        'video/*' => 'video/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-videolist-block_1' => array(
          'module' => 'views',
          'delta' => 'videolist-block_1',
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
  t('環境教育影片列表的側欄。');
  $export['desktop_videolist'] = $context;

  return $export;
}
