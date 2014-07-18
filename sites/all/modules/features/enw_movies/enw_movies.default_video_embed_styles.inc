<?php
/**
 * @file
 * enw_movies.default_video_embed_styles.inc
 */

/**
 * Implements hook_default_video_embed_styles().
 */
function enw_movies_default_video_embed_styles() {
  $export = array();

  $video_embed_style = new stdClass();
  $video_embed_style->disabled = FALSE; /* Edit this to true to make a default video_embed_style disabled initially */
  $video_embed_style->api_version = 1;
  $video_embed_style->name = 'fullpage';
  $video_embed_style->title = '';
  $video_embed_style->data = array(
    'facebook' => array(
      'height' => '540',
      'width' => '960',
      'allowfullscreen' => 1,
    ),
    'youtube' => array(
      'width' => '960px',
      'height' => '540px',
      'theme' => 'dark',
      'autoplay' => 0,
      'rel' => 0,
      'showinfo' => 1,
      'modestbranding' => 0,
      'iv_load_policy' => '1',
      'autohide' => '2',
      'vq' => 'hd720',
    ),
    'vimeo' => array(
      'width' => '960px',
      'height' => '540px',
      'color' => '00adef',
      'portrait' => 1,
      'title' => 1,
      'byline' => 1,
      'autoplay' => 0,
      'loop' => 0,
    ),
    'data__active_tab' => 'edit-data-facebook',
  );
  $export['fullpage'] = $video_embed_style;

  return $export;
}
