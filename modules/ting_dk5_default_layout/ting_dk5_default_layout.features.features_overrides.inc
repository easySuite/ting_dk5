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
