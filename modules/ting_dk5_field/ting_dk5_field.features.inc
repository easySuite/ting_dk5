<?php
/**
 * @file
 * ting_dk5_field.features.inc
 */

/**
 * Implements hook_field_group_info_alter().
 */
function ting_dk5_field_field_group_info_alter(&$data) {
  if (isset($data['group_ting_object_right_column|ting_object|ting_object|default'])) {
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['0'] = 'ting_details_classification'; /* WAS: 'ting_title' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['1'] = 'ting_title'; /* WAS: 'ting_type' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['2'] = 'ting_type'; /* WAS: 'ting_series' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['3'] = 'ting_series'; /* WAS: 'ting_abstract' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['4'] = 'ting_abstract'; /* WAS: 'ting_author' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['5'] = 'ting_author'; /* WAS: 'ting_subjects' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['6'] = 'ting_subjects'; /* WAS: 'ding_entity_buttons' */
    $data['group_ting_object_right_column|ting_object|ting_object|default']->data['children']['7'] = 'ding_entity_buttons'; /* WAS: '' */
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
function ting_dk5_field_field_default_field_instances_alter(&$data) {
  if (isset($data['ting_object-ting_object-ting_details_classification'])) {
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['label'] = 'hidden'; /* WAS: 'above' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['module'] = 'ting_material_details'; /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['type'] = 'ting_details_single'; /* WAS: 'hidden' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['weight'] = 3; /* WAS: 24 */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_primary'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 24,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['display']['default']['label'] = 'hidden'; /* WAS: 'inline' */
    $data['ting_object-ting_object-ting_details_classification']['display']['default']['weight'] = 7; /* WAS: 50 */
    $data['ting_object-ting_object-ting_details_classification']['display']['search_result'] = array(
      'label' => 'hidden',
      'module' => 'ting_material_details',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => 20,
    ); /* WAS: '' */
  }
}
