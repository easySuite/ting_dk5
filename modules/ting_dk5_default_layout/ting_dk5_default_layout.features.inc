<?php
/**
 * @file
 * ting_dk5_default_layout.features.inc
 */

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
