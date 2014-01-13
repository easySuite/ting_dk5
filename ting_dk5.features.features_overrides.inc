<?php
/**
 * @file
 * ting_dk5.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ting_dk5_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|collection_list|weight"] = '3';
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|teaser|label"] = 'hidden';
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|teaser|module"] = 'ding_ting_frontend';
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|teaser|type"] = 'ting_details_single';

  // Exported overrides for: field_group
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|children|5"] = 'ting_details_classification';
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|children|6"] = 'ting_details_series_description';
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|children|7"] = 'voxb_rating';

 return $overrides;
}
