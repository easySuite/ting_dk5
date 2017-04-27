<?php
/**
 * @file
 * Admin UI.
 */

/**
 * Ting DK5 settings form builder.
 *
 * @ingroup forms
 *
 * @see system_settings_form()
 */
function ting_dk5_settings_admin_form($form, &$form_state) {
  $form = array();

  $form['ting_dk5_show_collection_list'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 on collection page'),
    '#default_value' => variable_get('ting_dk5_show_collection_list', FALSE),
    '#description' => t("Check to show DK5 field on Ting collection page."),
  );

  $form['ting_dk5_show_default'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 on item page'),
    '#default_value' => variable_get('ting_dk5_show_default', FALSE),
    '#description' => t("Check to show DK5 field on Ting item page."),
  );

  $form['ting_dk5_show_search_result'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 in search result'),
    '#default_value' => variable_get('ting_dk5_show_search_result', FALSE),
    '#description' => t("Check to show DK5 field on search result page."),
  );

  $form['#submit'][] = 'ting_dk5_settings_admin_form_submit';

  return system_settings_form($form);
}

/**
 * Custom submit handler for admin form.
 *
 * @see ting_dk5_settings_admin_form()
 */
function ting_dk5_settings_admin_form_submit($form, &$form_state) {
  $input = $form_state['input'];
  $modes = array('default', 'search_result', 'collection_list');

  $instance = field_info_instance('ting_object', 'ting_details_classification', 'ting_object');

  foreach ($modes as $mode) {
    $_mode = isset($input['ting_dk5_show_' . $mode]) ? $mode : '_hidden_';
    $instance['display'][$mode] = ting_dk5_view_mode_settings($_mode);
  }

  field_update_instance($instance);
}
