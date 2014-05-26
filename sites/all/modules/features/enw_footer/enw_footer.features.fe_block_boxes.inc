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
  $fe_block_boxes->body = '<p style="text-align: center;"><a href="http://www.tcap.cepd.gov.tw/"><img alt="環保署" src="http://farm9.staticflickr.com/8235/8488768322_3c87a300ae_o.jpg" style="text-align: center; display: block; margin-left: auto; margin-right: auto;" title="環保署" height="80" width="250"></a><br><a href="http://healthyforest.blogspot.tw/"><img alt="森林我的家" src="http://farm8.staticflickr.com/7446/9796043724_e8d5b39d7e.jpg" style="text-align: center; display: block; margin-left: auto; margin-right: auto;" title="森林我的家" height="69" width="250"><br><img alt="上課了生物多樣性電子書線上看！" src="http://e-info.org.tw/files/banner20130126.gif" style="display: block; margin-left: auto; margin-right: auto;" title="上課了生物多樣性電子書線上看！" height="80" width="250"><br><img alt="" src="http://farm8.staticflickr.com/7418/9415080150_e7e3607cd4_o.gif" style="text-align: center; width: 250px; height: 80px;"></a></p>';

  $export['banner'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer-text';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_text';
  $fe_block_boxes->body = '<p><strong><a href="http://www.epa.gov.tw/">行政院環境保護署</a> 版權所有 2013 All Right Reserved</strong><br><strong>10042台北市中正區中華路一段83號 總機:02-23117722 </strong><br><strong>維護單位: <a href="http://www.e-info.org.tw/">台灣環境資訊協會</a> 聯絡電話:02-29332233<br><a href="http://enw.e-info.org.tw/content/338">隱私權政策</a>&nbsp;<a href="http://enw.e-info.org.tw/content/339">資訊安全政策</a>&nbsp;<a href="http://enw.e-info.org.tw/content/340">版權宣告</a></strong><br><strong><a href="http://www.webguide.nat.gov.tw/wSite/sp?xdUrl=/wSite/enable/valid.jsp&amp;conId=20130326154811" target="_blank"><img alt="我的E政府" src="http://farm9.staticflickr.com/8100/8525994783_6235eac3d8_o.gif" title="我的E政府" height="45" width="43">&nbsp; &nbsp;</a></strong></p>';

  $export['footer_text'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Google Analytics';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'google_analytics';
  $fe_block_boxes->body = '<script type="text/javascript">

  var _gaq = _gaq || [];
  _gaq.push([\'_setAccount\', \'UA-38983798-1\']);
  _gaq.push([\'_trackPageview\']);

  (function() {
    var ga = document.createElement(\'script\'); ga.type = \'text/javascript\'; ga.async = true;
    ga.src = (\'https:\' == document.location.protocol ? \'https://ssl\' : \'http://www\') + \'.google-analytics.com/ga.js\';
    var s = document.getElementsByTagName(\'script\')[0]; s.parentNode.insertBefore(ga, s);
  })();

</script>';

  $export['google_analytics'] = $fe_block_boxes;

  return $export;
}
