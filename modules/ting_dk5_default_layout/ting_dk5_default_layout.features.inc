<?php
/**
 * @file
 * ting_dk5_default_layout.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function ting_dk5_default_layout_field_group_info_alter(&$data) {
  if (isset($data['group_ting_right_col_collection|ting_object|ting_object|collection_list'])) {
    $data['group_ting_right_col_collection|ting_object|ting_object|collection_list']->data = array(
      'label' => 'Right column',
      'weight' => 1,
      'children' => array(
        0 => 'ting_details_classification',
        1 => 'ding_entity_buttons',
        2 => 'ting_title',
        3 => 'ting_type',
        4 => 'ting_series',
        5 => 'ting_abstract',
        6 => 'ting_author',
        7 => 'ting_subjects',
      ),
      'format_type' => 'div',
      'format_settings' => array(
        'label' => 'Right column',
        'instance_settings' => array(
          'classes' => '',
          'description' => '',
          'show_label' => 0,
          'label_element' => 'h3',
          'effect' => 'none',
          'speed' => 'fast',
        ),
        'formatter' => 'open',
      ),
    ); /* WAS: '' */
  }
  if (isset($data['group_ting_right_col_search|ting_object|ting_object|search_result'])) {
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['0'] = 'ting_details_classification'; /* WAS: 'ting_title' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['1'] = 'ting_title'; /* WAS: 'ting_series' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['2'] = 'ting_series'; /* WAS: 'ting_abstract' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['3'] = 'ting_abstract'; /* WAS: 'ting_author' */
    $data['group_ting_right_col_search|ting_object|ting_object|search_result']->data['children']['4'] = 'ting_author'; /* WAS: '' */
  }
}

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ting_dk5_default_layout_field_default_field_instances_alter(&$data) {
  if (isset($data['ting_object-ting_object-ding_entity_buttons'])) {
    $data['ting_object-ting_object-ding_entity_buttons']['display']['collection_list']['weight'] = 9; /* WAS: 8 */
  }
  if (isset($data['ting_object-ting_object-ting_abstract'])) {
    $data['ting_object-ting_object-ting_abstract']['display']['collection_list']['weight'] = 6; /* WAS: 5 */
  }
  if (isset($data['ting_object-ting_object-ting_details_classification'])) {
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['label'] = 'inline'; /* WAS: 'above' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['module'] = 'ting_material_details'; /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['type'] = 'ting_details_single'; /* WAS: 'hidden' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['weight'] = 5; /* WAS: 24 */
    $data['ting_object-ting_object-ting_details_classification']['display']['default']['weight'] = 7; /* WAS: 50 */
    $data['ting_object-ting_object-ting_details_classification']['display']['search_result'] = array(
      'label' => 'hidden',
      'module' => 'ting_material_details',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => 20,
    ); /* WAS: '' */
  }
  if (isset($data['ting_object-ting_object-ting_series'])) {
    $data['ting_object-ting_object-ting_series']['display']['collection_list']['weight'] = 7; /* WAS: 6 */
  }
  if (isset($data['ting_object-ting_object-ting_subjects'])) {
    $data['ting_object-ting_object-ting_subjects']['display']['collection_list']['weight'] = 8; /* WAS: 7 */
  }
}
