<?php
/**
 * @file
 * enw_frontpage.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function enw_frontpage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = '手機版首頁選單';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'mobile_menu';
  $fe_block_boxes->body = '<div id="mobile-menu">
  <div class="item"><a href="/monthly-topics"><img src="/sites/all/themes/enwmobile/images/icon-monthly-topics.png" class="icon"/>
      <div class="label">環境節日</div></a></div>
  <div class="item"><a href="/affair"><img src="/sites/all/themes/enwmobile/images/icon-affair.png" class="icon"/>
      <div class="label">最新新聞</div></a></div>
  <div class="item"><a href="/movies"><img src="/sites/all/themes/enwmobile/images/icon-movies.png" class="icon"/>
      <div class="label">環境影展</div></a></div>
  <div class="item"><a href="/issues"><img src="/sites/all/themes/enwmobile/images/icon-issues.png" class="icon"/>
      <div class="label">熱門議題</div></a></div>
  <div class="item"><a href="/events"><img src="/sites/all/themes/enwmobile/images/icon-events.png" class="icon"/>
      <div class="label">活動訊息</div></a></div>
  <div class="item"><a href="/熱門環境議題/綠繪本"><img src="/sites/all/themes/enwmobile/images/icon-picture-book.png" class="icon"/>
      <div class="label">綠繪本</div></a></div>
  <div class="item"><a href="/about-us"><img src="/sites/all/themes/enwmobile/images/icon-about-us.png" class="icon"/>
      <div class="label">關於我們</div></a></div>
  <div class="item"><a href="https://www.facebook.com/ENV.Republic"><img src="/sites/all/themes/enwmobile/images/icon-env-republic.png" class="icon"/>
      <div class="label">環境共和國</div></a></div>
  <div class="item"><a href="/2015%E5%BE%B5%E4%BB%B6"><img src="/sites/all/themes/enwmobile/images/icon-contactform.png" class="icon"/>
      <div class="label">徵件活動</div></a></div>
</div>';

  $export['mobile_menu'] = $fe_block_boxes;

  return $export;
}
