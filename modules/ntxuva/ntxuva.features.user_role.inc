<?php
/**
 * @file
 * ntxuva.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ntxuva_user_default_roles() {
  $roles = array();

  // Exported role: Gestores.
  $roles['Gestores'] = array(
    'name' => 'Gestores',
    'weight' => 3,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
