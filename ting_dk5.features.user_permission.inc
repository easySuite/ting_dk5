<?php
/**
 * @file
 * ting_dk5.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ting_dk5_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer ting_dk5 settings.
  $permissions['administer ting_dk5 settings'] = array(
    'name' => 'administer ting_dk5 settings',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'ting_dk5',
  );

  return $permissions;
}
