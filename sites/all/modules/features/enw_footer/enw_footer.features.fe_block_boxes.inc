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
  $fe_block_boxes->body = '<p style="text-align: center;"><a href="http://www.tcap.cepd.gov.tw/"><img alt="環保署" height="80" src="http://farm9.staticflickr.com/8235/8488768322_3c87a300ae_o.jpg" title="環保署" width="250"></a> <a href="http://healthyforest.blogspot.tw/"><img alt="森林我的家" height="80" src="http://farm8.staticflickr.com/7446/9796043724_e8d5b39d7e.jpg" title="森林我的家" width="250"></a> <a href="http://www.tcap.ndc.gov.tw/"><img alt="" height="80" src="http://farm8.staticflickr.com/7418/9415080150_e7e3607cd4_o.gif" width="250"></a></p>';

  $export['banner'] = $fe_block_boxes;

  return $export;
}
