<?php
/**
 * @file
 * Admin UI.
 */

/**
 * Ting DK5 settings form builder.
 *
 * @ingroup forms
 * @see system_settings_form()
 */
function ting_dk5_settings() {
  $form = array();

  $form['ting_dk5_show_collection_list'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 on collection page'),
    '#default_value' => variable_get('ting_dk5_show_collection_list', TRUE),
    '#description' => t(
      "Check to show DK5 field on Ting collection page."
    ),
  );

  $form['ting_dk5_show_full'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 on item page'),
    '#default_value' => variable_get('ting_dk5_show_full', TRUE),
    '#description' => t(
      "Check to show DK5 field on Ting item page."
    ),
  );

  $form['ting_dk5_show_search_result'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 in search result'),
    '#default_value' => variable_get('ting_dk5_show_search_result', TRUE),
    '#description' => t(
      "Check to show DK5 field on search result page."
    ),
  );

  return system_settings_form($form);
}
