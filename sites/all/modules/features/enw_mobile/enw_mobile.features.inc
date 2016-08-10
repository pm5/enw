<?php
/**
 * @file
 * enw_mobile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function enw_mobile_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_themekey_features_rule_chain().
 */
function enw_mobile_themekey_features_rule_chain() {
if (!defined('THEMEKEY_PAGECACHE_UNSUPPORTED')) {
    define('THEMEKEY_PAGECACHE_UNSUPPORTED', 0);
    define('THEMEKEY_PAGECACHE_SUPPORTED', 1);
    define('THEMEKEY_PAGECACHE_TIMEBASED', 2);
  }
$rules = array(
  0 => array(
    'rule' => array(
      'property' => 'mobile_detect:isMobile',
      'operator' => '=',
      'value' => 'true',
      'theme' => 'enwmobile',
      'enabled' => '1',
      'wildcards' => 'a:0:{}',
      'module' => 'enw_mobile',
    ),
    'string' => '"mobile_detect:isMobile = true >>> enwmobile"',
    'childs' => array(),
  ),
);

return $rules;
}
