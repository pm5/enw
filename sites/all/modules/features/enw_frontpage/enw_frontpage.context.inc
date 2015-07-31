<?php
/**
 * @file
 * enw_frontpage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function enw_frontpage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop_frontpage';
  $context->description = '';
  $context->tag = 'desktop';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        3 => 3,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slider-block' => array(
          'module' => 'views',
          'delta' => 'slider-block',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('desktop');
  $export['desktop_frontpage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mobile_frontpage';
  $context->description = '';
  $context->tag = 'mobile';
  $context->conditions = array(
    'cmd' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-slider-block_1' => array(
          'module' => 'views',
          'delta' => 'slider-block_1',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  $export['mobile_frontpage'] = $context;

  return $export;
}
