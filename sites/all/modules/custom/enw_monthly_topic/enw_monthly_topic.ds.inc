<?php
/**
 * @file
 * enw_monthly_topic.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function enw_monthly_topic_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|monthly_topic|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'monthly_topic';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'panels-twocol_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_doll',
      ),
      'right' => array(
        1 => 'body',
      ),
    ),
    'fields' => array(
      'field_doll' => 'left',
      'body' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'top' => 'div',
      'left' => 'div',
      'right' => 'div',
      'bottom' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|monthly_topic|default'] = $ds_layout;

  return $export;
}
