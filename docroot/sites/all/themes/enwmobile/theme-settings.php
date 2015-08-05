<?php

/**
 * @file
 * Theme settings for the enwmobile
 */
function enwmobile_form_system_theme_settings_alter(&$form, &$form_state) {

  /**
   * Breadcrumb settings
   */
  $form['enwmobile_breadcrumb'] = array(
    '#type' => 'fieldset',
    '#title' => t('Breadcrumb'),
  );

  $form['enwmobile_breadcrumb']['enwmobile_breadcrumb_display'] = array(
   '#type' => 'select',
   '#title' => t('Display breadcrumb'),
   '#default_value' => theme_get_setting('enwmobile_breadcrumb_display'),
   '#options' => array(
     'yes' => t('Yes'),
     'no' => t('No'),
   ),
  );

  $form['enwmobile_breadcrumb']['enwmobile_breadcrumb_hideonlyfront'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide the breadcrumb if the breadcrumb only contains the link to the front page.'),
    '#default_value' => theme_get_setting('enwmobile_breadcrumb_hideonlyfront'),
  );

  $form['enwmobile_breadcrumb']['enwmobile_breadcrumb_showtitle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show page title on breadcrumb.'),
    '#default_value' => theme_get_setting('enwmobile_breadcrumb_showtitle'),
  );

  $form['enwmobile_breadcrumb']['enwmobile_breadcrumb_separator'] = array(
    '#type' => 'textfield',
    '#title' => t('Breadcrumb separator'),
    '#default_value' => theme_get_setting('enwmobile_breadcrumb_separator'),
  );
}
