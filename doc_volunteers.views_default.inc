<?php
/**
 * @file
 * doc_volunteers.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function doc_volunteers_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'volunteers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'profile';
  $view->human_name = 'Our Volunteers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'volunteer';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Profile: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'profile';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['relationship'] = 'user';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_profile_org']['label'] = '';
  $handler->display->display_options['fields']['field_profile_org']['element_label_colon'] = FALSE;
  /* Field: User: Drupal.org Username */
  $handler->display->display_options['fields']['field_drupal_org_username']['id'] = 'field_drupal_org_username';
  $handler->display->display_options['fields']['field_drupal_org_username']['table'] = 'field_data_field_drupal_org_username';
  $handler->display->display_options['fields']['field_drupal_org_username']['field'] = 'field_drupal_org_username';
  $handler->display->display_options['fields']['field_drupal_org_username']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_drupal_org_username']['label'] = 'Drupal.org';
  $handler->display->display_options['fields']['field_drupal_org_username']['alter']['text'] = '<a [field_drupal_org_username-attributes]>[field_drupal_org_username-title]</a>
';
  $handler->display->display_options['fields']['field_drupal_org_username']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_drupal_org_username']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_drupal_org_username']['click_sort_column'] = 'url';
  /* Field: Profile: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['type'] = 'twitterfield_twitter_link';
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer' => 'volunteer',
  );

  /* Display: Organizers Volunteers List */
  $handler = $view->new_display('panel_pane', 'Organizers Volunteers List', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: User: Last name (field_profile_last:format) */
  $handler->display->display_options['sorts']['field_profile_last_format']['id'] = 'field_profile_last_format';
  $handler->display->display_options['sorts']['field_profile_last_format']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['sorts']['field_profile_last_format']['field'] = 'field_profile_last_format';
  $handler->display->display_options['sorts']['field_profile_last_format']['relationship'] = 'user';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer' => 'volunteer',
  );
  /* Filter criterion: Profile: Volunteer Contribution (field_volunteer_contribution) */
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['id'] = 'field_volunteer_contribution_value';
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['table'] = 'field_data_field_volunteer_contribution';
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['field'] = 'field_volunteer_contribution_value';
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['value'] = array(
    2 => '2',
  );

  /* Display: Volunteer List */
  $handler = $view->new_display('panel_pane', 'Volunteer List', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_profile_first']['id'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['table'] = 'field_data_field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['field'] = 'field_profile_first';
  $handler->display->display_options['fields']['field_profile_first']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_profile_first']['label'] = '';
  $handler->display->display_options['fields']['field_profile_first']['element_label_colon'] = FALSE;
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_profile_last']['id'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['table'] = 'field_data_field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['field'] = 'field_profile_last';
  $handler->display->display_options['fields']['field_profile_last']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_profile_last']['label'] = '';
  $handler->display->display_options['fields']['field_profile_last']['element_label_colon'] = FALSE;
  /* Field: User: Job title */
  $handler->display->display_options['fields']['field_profile_job_title']['id'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['table'] = 'field_data_field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['field'] = 'field_profile_job_title';
  $handler->display->display_options['fields']['field_profile_job_title']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_profile_job_title']['label'] = '';
  $handler->display->display_options['fields']['field_profile_job_title']['element_label_colon'] = FALSE;
  /* Field: User: Organization */
  $handler->display->display_options['fields']['field_profile_org']['id'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['table'] = 'field_data_field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['field'] = 'field_profile_org';
  $handler->display->display_options['fields']['field_profile_org']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_profile_org']['label'] = '';
  $handler->display->display_options['fields']['field_profile_org']['element_label_colon'] = FALSE;
  /* Field: Profile: Twitter */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['type'] = 'twitterfield_twitter_link';
  /* Field: User: Drupal.org Username */
  $handler->display->display_options['fields']['field_drupal_org_username']['id'] = 'field_drupal_org_username';
  $handler->display->display_options['fields']['field_drupal_org_username']['table'] = 'field_data_field_drupal_org_username';
  $handler->display->display_options['fields']['field_drupal_org_username']['field'] = 'field_drupal_org_username';
  $handler->display->display_options['fields']['field_drupal_org_username']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_drupal_org_username']['label'] = 'Drupal.org';
  $handler->display->display_options['fields']['field_drupal_org_username']['alter']['text'] = '<a [field_drupal_org_username-attributes]>[field_drupal_org_username-title]</a>
';
  $handler->display->display_options['fields']['field_drupal_org_username']['alter']['external'] = TRUE;
  $handler->display->display_options['fields']['field_drupal_org_username']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_drupal_org_username']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Profile: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'profile';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'volunteer' => 'volunteer',
  );
  /* Filter criterion: Profile: Volunteer Contribution (field_volunteer_contribution) */
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['id'] = 'field_volunteer_contribution_value';
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['table'] = 'field_data_field_volunteer_contribution';
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['field'] = 'field_volunteer_contribution_value';
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['operator'] = 'and';
  $handler->display->display_options['filters']['field_volunteer_contribution_value']['value'] = array(
    2 => '2',
  );
  $translatables['volunteers'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('User'),
    t('Drupal.org'),
    t('<a [field_drupal_org_username-attributes]>[field_drupal_org_username-title]</a>
'),
    t('Twitter'),
    t('Organizers Volunteers List'),
    t('View panes'),
    t('Volunteer List'),
  );
  $export['volunteers'] = $view;

  return $export;
}
