<?php
/**
 * @file
 * ting_dk5_feature.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function ting_dk5_feature_field_default_field_instances_alter(&$data) {
  if (isset($data['ting_object-ting_object-ting_details_classification'])) {
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['label'] = 'inline'; /* WAS: 'above' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['module'] = 'ting_material_details'; /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['type'] = 'ting_details_single'; /* WAS: 'hidden' */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_list']['weight'] = 8; /* WAS: 24 */
    $data['ting_object-ting_object-ting_details_classification']['display']['collection_primary'] = array(
      'label' => 'above',
      'settings' => array(),
      'type' => 'hidden',
      'weight' => 24,
    ); /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['display']['default']['weight'] = 9; /* WAS: 50 */
    $data['ting_object-ting_object-ting_details_classification']['display']['search_result'] = array(
      'label' => 'inline',
      'module' => 'ting_material_details',
      'settings' => array(),
      'type' => 'ting_details_single',
      'weight' => 20,
    ); /* WAS: '' */
  }
}
