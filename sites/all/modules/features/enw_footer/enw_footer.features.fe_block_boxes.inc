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
  $fe_block_boxes->body = '<p style="text-align: center;"><a href="http://www.epa.gov.tw/mp.asp?mp=epa"><img alt="行政院環境保護署" src="http://farm9.staticflickr.com/8235/8488768322_3c87a300ae_o.jpg" style="width: 250px; height: 80px;" title="行政院環境保護署"></a> <a href="http://green.ngo.org.tw/news/29522"><img alt="臺灣自然之窗影音頻道網站" src="https://c2.staticflickr.com/2/1642/25779326093_296a869694_o.gif" style="width: 250px; height: 80px;" title="臺灣自然之窗影音頻道網站"></a> <a href="http://www.tcap.cepd.gov.tw/"><img alt="共築方舟—氣候變遷調適入口網" src="http://farm8.staticflickr.com/7418/9415080150_e7e3607cd4_o.gif" style="width: 250px; height: 80px;" title="共築方舟—氣候變遷調適入口網"></a></p>';

  $export['banner'] = $fe_block_boxes;

  return $export;
}
