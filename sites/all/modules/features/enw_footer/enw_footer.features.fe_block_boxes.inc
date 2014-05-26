<?php
/**
 * @file
 * enw_footer.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function enw_footer_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'banner';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'banner';
  $fe_block_boxes->body = '<p style="display: block: margin: 0 auto"><a href="http://www.tcap.cepd.gov.tw/"><img alt="環保署" src="http://farm9.staticflickr.com/8235/8488768322_3c87a300ae_o.jpg" title="環保署" height="80" width="250"></a> <a href="http://healthyforest.blogspot.tw/"><img alt="森林我的家" src="http://farm8.staticflickr.com/7446/9796043724_e8d5b39d7e.jpg" title="森林我的家" height="80" width="250"></a> <img alt="上課了生物多樣性電子書線上看！" src="http://e-info.org.tw/files/banner20130126.gif" title="上課了生物多樣性電子書線上看！" height="80" width="250"> <img alt="" src="http://farm8.staticflickr.com/7418/9415080150_e7e3607cd4_o.gif" height="80" width="250"></p>';

  $export['banner'] = $fe_block_boxes;

  return $export;
}
