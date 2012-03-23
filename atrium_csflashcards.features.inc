<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_csflashcards_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function atrium_csflashcards_imagecache_default_presets() {
  $items = array(
    'csflashcards_medium' => array(
      'presetname' => 'csflashcards_medium',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '300',
            'height' => '300',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function atrium_csflashcards_node_info() {
  $items = array(
    'csflashcards' => array(
      'name' => t('Flashcards entry'),
      'module' => 'features',
      'description' => t('Create a collection of flashcards for your group.'),
      'has_title' => '1',
      'title_label' => t('Flashcard'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_csflashcards_views_api() {
  return array(
    'api' => '2',
  );
}
