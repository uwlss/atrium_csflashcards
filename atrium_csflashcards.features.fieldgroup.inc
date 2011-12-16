<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function atrium_csflashcards_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_side1
  $groups['csflashcards-group_side1'] = array(
    'group_type' => 'standard',
    'type_name' => 'csflashcards',
    'group_name' => 'group_side1',
    'label' => 'Side 1',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_side1title',
      '1' => 'field_side1desc',
      '2' => 'field_images',
      '3' => 'field_videolink',
    ),
  );

  // Exported group: group_side2
  $groups['csflashcards-group_side2'] = array(
    'group_type' => 'standard',
    'type_name' => 'csflashcards',
    'group_name' => 'group_side2',
    'label' => 'Side 2',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'weight' => '0',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '0',
    'fields' => array(
      '0' => 'field_side2title',
      '1' => 'field_side2desc',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Side 1');
  t('Side 2');

  return $groups;
}
