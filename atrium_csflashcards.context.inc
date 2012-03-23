<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_csflashcards_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'csflashcards_listing';
  $context->description = '';
  $context->tag = 'Flashcards';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'csflashcards' => 'csflashcards',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'csflashcards_listing' => 'csflashcards_listing',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'csflashcards',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Flashcards');
  $export['csflashcards_listing'] = $context;

  return $export;
}
