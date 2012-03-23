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
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete any csflashcards content
  $permissions['delete any csflashcards content'] = array(
    'name' => 'delete any csflashcards content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own csflashcards content
  $permissions['delete own csflashcards content'] = array(
    'name' => 'delete own csflashcards content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit any csflashcards content
  $permissions['edit any csflashcards content'] = array(
    'name' => 'edit any csflashcards content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own csflashcards content
  $permissions['edit own csflashcards content'] = array(
    'name' => 'edit own csflashcards content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'instructor',
      '3' => 'manager',
    ),
  );

  // Exported permission: view imagecache csflashcards_medium
  $permissions['view imagecache csflashcards_medium'] = array(
    'name' => 'view imagecache csflashcards_medium',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'authenticated user',
      '2' => 'instructor',
      '3' => 'manager',
      '4' => 'sts-manager',
    ),
  );

  return $permissions;
}
