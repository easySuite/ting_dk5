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

  $form['ting_dk5_show_collection_primary'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 on collection page'),
    '#default_value' => variable_get('ting_dk5_show_collection_primary', TRUE),
    '#description' => t(
      "Check the box to show DK5 field on Ting collection page (default: checked)."
    ),
  );

  $form['ting_dk5_show__custom_display'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 on item page'),
    '#default_value' => variable_get('ting_dk5_show__custom_display', TRUE),
    '#description' => t(
      "Check the box to show DK5 field on Ting item page (default: checked)."
    ),
  );

  $form['ting_dk5_show_teaser'] = array(
    '#type' => 'checkbox',
    '#title' => t('Show DK5 in teaser'),
    '#default_value' => variable_get('ting_dk5_show_teaser', TRUE),
    '#description' => t(
      "Check the box to show DK5 field on Ting item teaser like search result page (default: checked)."
    ),
  );

  return system_settings_form($form);
}
