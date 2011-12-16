<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_csflashcards_user_default_permissions() {
  $permissions = array();

  // Exported permission: create csflashcards content
  $permissions['create csflashcards content'] = array(
    'name' => 'create csflashcards content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete own csflashcards content
  $permissions['delete own csflashcards content'] = array(
    'name' => 'delete own csflashcards content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own csflashcards content
  $permissions['edit own csflashcards content'] = array(
    'name' => 'edit own csflashcards content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
