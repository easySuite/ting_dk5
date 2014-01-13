<?php
/**
 * @file
 * ting_dk5.features.inc
 */

/**
 * Implements hook_field_default_fields_alter().
 */
function ting_dk5_field_default_fields_alter(&$data) {
  if (isset($data['ting_object-ting_object-ting_details_classification'])) {
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['collection_list']['weight'] = '3'; /* WAS: '28' */
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['teaser']['label'] = 'hidden'; /* WAS: 'above' */
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['teaser']['module'] = 'ding_ting_frontend'; /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['teaser']['type'] = 'ting_details_single'; /* WAS: 'hidden' */
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function ting_dk5_field_group_info_alter(&$data) {
  if (isset($data['group_content|ting_object|ting_object|teaser'])) {
    $data['group_content|ting_object|ting_object|teaser']->data['children']['5'] = 'ting_details_classification'; /* WAS: 'ting_details_series_description' */
    $data['group_content|ting_object|ting_object|teaser']->data['children']['6'] = 'ting_details_series_description'; /* WAS: 'voxb_rating' */
    $data['group_content|ting_object|ting_object|teaser']->data['children']['7'] = 'voxb_rating'; /* WAS: '' */
  }
}
