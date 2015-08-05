<?php
/**
 * @file
 * enw_desktop.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function enw_desktop_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'desktop_menu';
  $context->description = '全站: 選單';
  $context->tag = 'desktop';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'superfish-2' => array(
          'module' => 'superfish',
          'delta' => '2',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'user_menu',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'user_menu',
          'weight' => '-9',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => '1',
          'region' => 'user_menu',
          'weight' => '-8',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'footer',
          'weight' => '-9',
        ),
        'superfish-3' => array(
          'module' => 'superfish',
          'delta' => '3',
          'region' => 'footer',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('theme');
  t('全站: 選單');
  $export['desktop_menu'] = $context;

  return $export;
}
