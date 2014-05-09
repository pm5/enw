<?php
/**
 * @file
 * enw_sidebars.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function enw_sidebars_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'banner';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'banner';
  $fe_block_boxes->body = '<p style="text-align: center;"><a href="http://www.tcap.cepd.gov.tw/"><img alt="環保署" src="http://farm9.staticflickr.com/8235/8488768322_3c87a300ae_o.jpg" style="text-align: center; display: block; margin-left: auto; margin-right: auto;" title="環保署" height="80" width="250"></a><br><a href="http://healthyforest.blogspot.tw/"><img alt="森林我的家" src="http://farm8.staticflickr.com/7446/9796043724_e8d5b39d7e.jpg" style="text-align: center; display: block; margin-left: auto; margin-right: auto;" title="森林我的家" height="69" width="250"><br><img alt="上課了生物多樣性電子書線上看！" src="http://e-info.org.tw/files/banner20130126.gif" style="display: block; margin-left: auto; margin-right: auto;" title="上課了生物多樣性電子書線上看！" height="80" width="250"><br><img alt="" src="http://farm8.staticflickr.com/7418/9415080150_e7e3607cd4_o.gif" style="text-align: center; width: 250px; height: 80px;"></a></p>';

  $export['banner'] = $fe_block_boxes;

  return $export;
}
