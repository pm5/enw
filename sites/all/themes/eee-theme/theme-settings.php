<?php

/**
 * @file
 * Theme settings for the eee-theme
 */
function eee-theme_form_system_theme_settings_alter(&$form, &$form_state) {

  /**
   * Breadcrumb settings
   */
  $form['eee-theme_breadcrumb'] = array(
    '#type' => 'fieldset',
    '#title' => t('Breadcrumb'),
  );
  
  $form['eee-theme_breadcrumb']['eee-theme_breadcrumb_display'] = array(
   '#type' => 'select',
   '#title' => t('Display breadcrumb'),
   '#default_value' => theme_get_setting('eee-theme_breadcrumb_display'),
   '#options' => array(
     'yes' => t('Yes'),
     'no' => t('No'),
   ),
  );
  
  $form['eee-theme_breadcrumb']['eee-theme_breadcrumb_hideonlyfront'] = array(
    '#type' => 'checkbox',
    '#title' => t('Hide the breadcrumb if the breadcrumb only contains the link to the front page.'),
    '#default_value' => theme_get_setting('eee-theme_breadcrumb_hideonlyfront'),
  );
  
  $form['eee-theme_breadcrumb']['eee-theme_breadcrumb_showtitle'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show page title on breadcrumb.'),
    '#default_value' => theme_get_setting('eee-theme_breadcrumb_showtitle'),
  );

  $form['eee-theme_breadcrumb']['eee-theme_breadcrumb_separator'] = array(
    '#type' => 'textfield',
    '#title' => t('Breadcrumb separator'),
    '#default_value' => theme_get_setting('eee-theme_breadcrumb_separator'),
  );
}
