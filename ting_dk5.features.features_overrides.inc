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
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|teaser|label"] = 'inline';
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|teaser|module"] = 'ding_ting_frontend';
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|teaser|type"] = 'ting_details_single';
  $overrides["field.ting_object-ting_object-ting_details_classification.field_instance|display|teaser|weight"] = '40';

  // Exported overrides for: field_group
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|children|0"] = 'ting_series';
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|children|1"] = 'ting_abstract';
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|children|2"] = 'ting_author';
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|children|3"] = 'ting_subjects';
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|children|4"] = 'ting_details_classification';
  $overrides["field_group.group_content|ting_object|ting_object|teaser.data|weight"] = '2';

 return $overrides;
}
