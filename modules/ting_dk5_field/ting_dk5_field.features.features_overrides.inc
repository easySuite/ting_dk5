<?php
/**
 * @file
 * ting_dk5_field.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ting_dk5_field_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_group
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|0"] = 'ting_details_classification';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|1"] = 'ting_title';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|2"] = 'ting_type';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|3"] = 'ting_series';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|4"] = 'ting_abstract';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|5"] = 'ting_author';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|6"] = 'ting_subjects';
  $overrides["field_group.group_ting_object_right_column|ting_object|ting_object|default.data|children|7"] = 'ding_entity_buttons';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|0"] = 'ting_details_classification';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|1"] = 'ting_title';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|2"] = 'ting_series';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|3"] = 'ting_abstract';
  $overrides["field_group.group_ting_right_col_search|ting_object|ting_object|search_result.data|children|4"] = 'ting_author';

  // Exported overrides for: field_instance
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_list|label"] = 'hidden';
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_list|module"] = 'ting_material_details';
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_list|type"] = 'ting_details_single';
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_list|weight"] = 3;
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|collection_primary"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 24,
  );
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|default|label"] = 'hidden';
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|default|weight"] = 7;
  $overrides["field_instance.ting_object-ting_object-ting_details_classification.display|search_result"] = array(
    'label' => 'hidden',
    'module' => 'ting_material_details',
    'settings' => array(),
    'type' => 'ting_details_single',
    'weight' => 20,
  );

 return $overrides;
}
