<?php
/**
 * @file
 * ting_dk5_default_layout.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ting_dk5_default_layout_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_ting_right_col_collection|ting_object|ting_object|collection_list.data"] = array(
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
  );
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|0"] = 'ting_details_classification';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|1"] = 'ting_title';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|2"] = 'ting_series';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|3"] = 'ting_abstract';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|4"] = 'ting_author';

  // Exported overrides for: field_instance
  $overrides["field_instance.ting_object-ting_object-ding_entity_buttons.display|collection_list|weight"] = 9;
  $overrides["field_instance.ting_object-ting_object-ting_abstract.display|collection_list|weight"] = 6;
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_list|label"] = 'inline';
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_list|module"] = 'ting_material_details';
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_list|type"] = 'ting_details_single';
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_list|weight"] = 5;
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|default|weight"] = 7;
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|search_result"] = array(
    'label' => 'hidden',
    'module' => 'ting_material_details',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => 20,
  );
  $overrides["field_instance.ting_object-ting_object-ting_series.display|collection_list|weight"] = 7;
  $overrides["field_instance.ting_object-ting_object-ting_subjects.display|collection_list|weight"] = 8;

 return $overrides;
}
