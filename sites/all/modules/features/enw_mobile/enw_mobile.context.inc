<?php
/**
 * @file
 * enw_mobile.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function enw_mobile_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'mobile_copyright';
  $context->description = '版權宣告';
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
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'footer',
          'weight' => '-7',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'footer',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('mobile');
  t('版權宣告');
  $export['mobile_copyright'] = $context;

  return $export;
}
