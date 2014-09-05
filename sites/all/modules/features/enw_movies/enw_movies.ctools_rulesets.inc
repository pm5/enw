<?php
/**
 * @file
 * enw_movies.ctools_rulesets.inc
 */

/**
 * Implements hook_default_ctools_access_ruleset().
 */
function enw_movies_default_ctools_access_ruleset() {
  $export = array();

  $ruleset = new stdClass();
  $ruleset->disabled = FALSE; /* Edit this to true to make a default ruleset disabled initially */
  $ruleset->api_version = 1;
  $ruleset->name = 'tw_user_only';
  $ruleset->admin_title = '限台灣來源使用者';
  $ruleset->admin_description = '';
  $ruleset->requiredcontexts = array();
  $ruleset->contexts = array();
  $ruleset->relationships = array();
  $ruleset->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'php',
        'settings' => array(
          'description' => '限台灣來源使用者',
          'php' => 'return token_replace(\'[smart_ip:country_code]\') === \'TW\';',
        ),
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $export['tw_user_only'] = $ruleset;

  return $export;
}
