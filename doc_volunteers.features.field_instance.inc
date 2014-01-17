<?php
/**
 * @file
 * doc_volunteers.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function doc_volunteers_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'profile2-volunteer-field_twitter'
  $field_instances['profile2-volunteer-field_twitter'] = array(
    'bundle' => 'volunteer',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your twitter username.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_twitter',
    'label' => 'Twitter',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'twitterfield',
      'settings' => array(
        'allowed_types' => array(
          'hashtag' => 0,
          'list' => 0,
          'search' => 0,
          'username' => 'username',
        ),
        'size' => 60,
      ),
      'type' => 'twitterfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'profile2-volunteer-field_volunteer_contribution'
  $field_instances['profile2-volunteer-field_volunteer_contribution'] = array(
    'bundle' => 'volunteer',
    'default_value' => array(
      0 => array(
        'value' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => 'Select the volunteer contribution that best matches what you did. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'profile2',
    'field_name' => 'field_volunteer_contribution',
    'label' => 'Volunteer Contribution',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Select the volunteer contribution that best matches what you did. ');
  t('Twitter');
  t('Volunteer Contribution');
  t('Your twitter username.');

  return $field_instances;
}
