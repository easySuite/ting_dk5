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
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['teaser']['label'] = 'inline'; /* WAS: 'above' */
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['teaser']['module'] = 'ding_ting_frontend'; /* WAS: '' */
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['teaser']['type'] = 'ting_details_single'; /* WAS: 'hidden' */
    $data['ting_object-ting_object-ting_details_classification']['field_instance']['display']['teaser']['weight'] = '40'; /* WAS: '37' */
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function ting_dk5_field_group_info_alter(&$data) {
  if (isset($data['group_content|ting_object|ting_object|teaser'])) {
    $data['group_content|ting_object|ting_object|teaser']->data['children']['0'] = 'ting_series'; /* WAS: 'ting_title' */
    $data['group_content|ting_object|ting_object|teaser']->data['children']['1'] = 'ting_abstract'; /* WAS: 'ting_series' */
    $data['group_content|ting_object|ting_object|teaser']->data['children']['2'] = 'ting_author'; /* WAS: 'ting_abstract' */
    $data['group_content|ting_object|ting_object|teaser']->data['children']['3'] = 'ting_subjects'; /* WAS: 'ting_author' */
    $data['group_content|ting_object|ting_object|teaser']->data['children']['4'] = 'ting_details_classification'; /* WAS: 'ting_subjects' */
    $data['group_content|ting_object|ting_object|teaser']->data['weight'] = '2'; /* WAS: '1' */
  }
}
