<?php
/**
 * @file
 * ses_profiles_variables.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ses_profiles_variables_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'manage_profiles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Manage Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Profiles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Bulk operations: User */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'users';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::_ses_custom_convert_to_non_cap' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::user_block_user_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_user_cancel_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::_ses_custom_convert_to_alumni' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          'user::field_ses_non_cap_profile' => 'user::field_ses_non_cap_profile',
          'user::field_alumnus' => 'user::field_alumnus',
        ),
      ),
    ),
    'action::views_bulk_operations_user_roles_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_user_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Personnel Type */
  $handler->display->display_options['fields']['field_personnel_type']['id'] = 'field_personnel_type';
  $handler->display->display_options['fields']['field_personnel_type']['table'] = 'field_data_field_personnel_type';
  $handler->display->display_options['fields']['field_personnel_type']['field'] = 'field_personnel_type';
  $handler->display->display_options['fields']['field_personnel_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Secondary Affiliations */
  $handler->display->display_options['fields']['field_secondary_affiliations']['id'] = 'field_secondary_affiliations';
  $handler->display->display_options['fields']['field_secondary_affiliations']['table'] = 'field_data_field_secondary_affiliations';
  $handler->display->display_options['fields']['field_secondary_affiliations']['field'] = 'field_secondary_affiliations';
  $handler->display->display_options['fields']['field_secondary_affiliations']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_secondary_affiliations']['delta_offset'] = '0';
  /* Field: User: Allow Non CAP Profile */
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['id'] = 'field_ses_non_cap_profile';
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['table'] = 'field_data_field_ses_non_cap_profile';
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['field'] = 'field_ses_non_cap_profile';
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['empty'] = 'No';
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_ses_non_cap_profile']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Alumnus */
  $handler->display->display_options['fields']['field_alumnus']['id'] = 'field_alumnus';
  $handler->display->display_options['fields']['field_alumnus']['table'] = 'field_data_field_alumnus';
  $handler->display->display_options['fields']['field_alumnus']['field'] = 'field_alumnus';
  $handler->display->display_options['fields']['field_alumnus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_alumnus']['alter']['text'] = 'Yes';
  $handler->display->display_options['fields']['field_alumnus']['empty'] = 'No';
  $handler->display->display_options['fields']['field_alumnus']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_alumnus']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_alumnus']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Directory Name */
  $handler->display->display_options['fields']['field_account_directory_name']['id'] = 'field_account_directory_name';
  $handler->display->display_options['fields']['field_account_directory_name']['table'] = 'field_data_field_account_directory_name';
  $handler->display->display_options['fields']['field_account_directory_name']['field'] = 'field_account_directory_name';
  $handler->display->display_options['fields']['field_account_directory_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_account_directory_name']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: User: Directory Name (field_account_directory_name) */
  $handler->display->display_options['sorts']['field_account_directory_name_value']['id'] = 'field_account_directory_name_value';
  $handler->display->display_options['sorts']['field_account_directory_name_value']['table'] = 'field_data_field_account_directory_name';
  $handler->display->display_options['sorts']['field_account_directory_name_value']['field'] = 'field_account_directory_name_value';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  /* Filter criterion: Field: Personnel Type (field_personnel_type) */
  $handler->display->display_options['filters']['field_personnel_type_value']['id'] = 'field_personnel_type_value';
  $handler->display->display_options['filters']['field_personnel_type_value']['table'] = 'field_data_field_personnel_type';
  $handler->display->display_options['filters']['field_personnel_type_value']['field'] = 'field_personnel_type_value';
  $handler->display->display_options['filters']['field_personnel_type_value']['value'] = array(
    'Faculty - Regular' => 'Faculty - Regular',
    'Faculty - Emeritus' => 'Faculty - Emeritus',
    'Faculty - Affiliated' => 'Faculty - Affiliated',
    'Students - Graduate' => 'Students - Graduate',
    'Students - Undergraduate' => 'Students - Undergraduate',
    'Post Doctoral Scholar' => 'Post Doctoral Scholar',
    'Research Staff' => 'Research Staff',
    'Administrative Staff' => 'Administrative Staff',
    'Teaching Staff' => 'Teaching Staff',
  );
  $handler->display->display_options['filters']['field_personnel_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_personnel_type_value']['expose']['operator_id'] = 'field_personnel_type_value_op';
  $handler->display->display_options['filters']['field_personnel_type_value']['expose']['label'] = 'Personnel Type';
  $handler->display->display_options['filters']['field_personnel_type_value']['expose']['operator'] = 'field_personnel_type_value_op';
  $handler->display->display_options['filters']['field_personnel_type_value']['expose']['identifier'] = 'field_personnel_type_value';
  $handler->display->display_options['filters']['field_personnel_type_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_personnel_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    15 => 0,
    11 => 0,
    8 => 0,
    6 => 0,
    14 => 0,
    13 => 0,
    12 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_personnel_type_value']['expose']['reduce'] = TRUE;
  /* Filter criterion: Field: Secondary Affiliations (field_secondary_affiliations) */
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['id'] = 'field_secondary_affiliations_value';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['table'] = 'field_data_field_secondary_affiliations';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['field'] = 'field_secondary_affiliations_value';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['operator_id'] = 'field_secondary_affiliations_value_op';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['label'] = 'Affiliations';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['operator'] = 'field_secondary_affiliations_value_op';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['identifier'] = 'field_secondary_affiliations_value';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    15 => 0,
    11 => 0,
    8 => 0,
    6 => 0,
    14 => 0,
    13 => 0,
    12 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage-profiles';
  $export['manage_profiles'] = $view;

  $view = new view();
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_account_directory_name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'uid' => 'uid',
    'name' => 'name',
    'field_personnel_type' => 'field_personnel_type',
    'field_cap_short_title' => 'field_cap_short_title',
    'field_secondary_affiliations' => 'field_secondary_affiliations',
    'field_account_directory_name' => 'field_account_directory_name',
    'field_cap_short_address' => 'field_cap_short_address',
    'field_cap_primary_email' => 'field_cap_primary_email',
    'field_cap_primary_phone' => 'field_cap_primary_phone',
    'field_office_location' => 'field_office_location',
    'field_phone' => 'field_office_location',
    'field_stanford_email' => 'field_office_location',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'uid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_personnel_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cap_short_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_secondary_affiliations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_account_directory_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cap_short_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cap_primary_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cap_primary_phone' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_office_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br />',
      'empty_column' => 0,
    ),
    'field_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_stanford_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'user/[uid]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = '0';
  $handler->display->display_options['fields']['name']['element_class'] = 'ses-people-column-name';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Field: Personnel Type */
  $handler->display->display_options['fields']['field_personnel_type']['id'] = 'field_personnel_type';
  $handler->display->display_options['fields']['field_personnel_type']['table'] = 'field_data_field_personnel_type';
  $handler->display->display_options['fields']['field_personnel_type']['field'] = 'field_personnel_type';
  $handler->display->display_options['fields']['field_personnel_type']['label'] = '';
  $handler->display->display_options['fields']['field_personnel_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_personnel_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_personnel_type']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Title (System Provided) */
  $handler->display->display_options['fields']['field_cap_short_title']['id'] = 'field_cap_short_title';
  $handler->display->display_options['fields']['field_cap_short_title']['table'] = 'field_data_field_cap_short_title';
  $handler->display->display_options['fields']['field_cap_short_title']['field'] = 'field_cap_short_title';
  $handler->display->display_options['fields']['field_cap_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_cap_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_short_title']['element_type'] = '0';
  $handler->display->display_options['fields']['field_cap_short_title']['element_class'] = 'ses-people-column-title';
  $handler->display->display_options['fields']['field_cap_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_short_title']['empty'] = '[field_personnel_type]';
  $handler->display->display_options['fields']['field_cap_short_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_short_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Title (Override) */
  $handler->display->display_options['fields']['field_ses_title_override']['id'] = 'field_ses_title_override';
  $handler->display->display_options['fields']['field_ses_title_override']['table'] = 'field_data_field_ses_title_override';
  $handler->display->display_options['fields']['field_ses_title_override']['field'] = 'field_ses_title_override';
  $handler->display->display_options['fields']['field_ses_title_override']['label'] = 'Title';
  $handler->display->display_options['fields']['field_ses_title_override']['empty'] = '[field_cap_short_title]';
  $handler->display->display_options['fields']['field_ses_title_override']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ses_title_override']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Current Research - Short */
  $handler->display->display_options['fields']['field_cap_research_short']['id'] = 'field_cap_research_short';
  $handler->display->display_options['fields']['field_cap_research_short']['table'] = 'field_data_field_cap_research_short';
  $handler->display->display_options['fields']['field_cap_research_short']['field'] = 'field_cap_research_short';
  $handler->display->display_options['fields']['field_cap_research_short']['label'] = '';
  $handler->display->display_options['fields']['field_cap_research_short']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_research_short']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_research_short']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Current Research - Terse */
  $handler->display->display_options['fields']['field_cap_research_terse']['id'] = 'field_cap_research_terse';
  $handler->display->display_options['fields']['field_cap_research_terse']['table'] = 'field_data_field_cap_research_terse';
  $handler->display->display_options['fields']['field_cap_research_terse']['field'] = 'field_cap_research_terse';
  $handler->display->display_options['fields']['field_cap_research_terse']['label'] = '';
  $handler->display->display_options['fields']['field_cap_research_terse']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_research_terse']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_research_terse']['empty'] = '[field_cap_research_short]';
  $handler->display->display_options['fields']['field_cap_research_terse']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_cap_research_terse']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Current Research - Override */
  $handler->display->display_options['fields']['field_ses_research_override']['id'] = 'field_ses_research_override';
  $handler->display->display_options['fields']['field_ses_research_override']['table'] = 'field_data_field_ses_research_override';
  $handler->display->display_options['fields']['field_ses_research_override']['field'] = 'field_ses_research_override';
  $handler->display->display_options['fields']['field_ses_research_override']['label'] = 'Current Research';
  $handler->display->display_options['fields']['field_ses_research_override']['empty'] = '[field_cap_research_terse]';
  $handler->display->display_options['fields']['field_ses_research_override']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Secondary Affiliations */
  $handler->display->display_options['fields']['field_secondary_affiliations']['id'] = 'field_secondary_affiliations';
  $handler->display->display_options['fields']['field_secondary_affiliations']['table'] = 'field_data_field_secondary_affiliations';
  $handler->display->display_options['fields']['field_secondary_affiliations']['field'] = 'field_secondary_affiliations';
  $handler->display->display_options['fields']['field_secondary_affiliations']['label'] = 'Affiliations';
  $handler->display->display_options['fields']['field_secondary_affiliations']['element_type'] = '0';
  $handler->display->display_options['fields']['field_secondary_affiliations']['element_class'] = 'ses-people-column-affils';
  $handler->display->display_options['fields']['field_secondary_affiliations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_affiliations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_secondary_affiliations']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_secondary_affiliations']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_secondary_affiliations']['delta_offset'] = '0';
  /* Field: User: Directory Name */
  $handler->display->display_options['fields']['field_account_directory_name']['id'] = 'field_account_directory_name';
  $handler->display->display_options['fields']['field_account_directory_name']['table'] = 'field_data_field_account_directory_name';
  $handler->display->display_options['fields']['field_account_directory_name']['field'] = 'field_account_directory_name';
  $handler->display->display_options['fields']['field_account_directory_name']['label'] = '';
  $handler->display->display_options['fields']['field_account_directory_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_account_directory_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_account_directory_name']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_account_directory_name']['settings'] = array(
    'trim_length' => '1',
    'field_formatter_class' => '',
  );
  /* Field: User: Short Address */
  $handler->display->display_options['fields']['field_cap_short_address']['id'] = 'field_cap_short_address';
  $handler->display->display_options['fields']['field_cap_short_address']['table'] = 'field_data_field_cap_short_address';
  $handler->display->display_options['fields']['field_cap_short_address']['field'] = 'field_cap_short_address';
  $handler->display->display_options['fields']['field_cap_short_address']['label'] = '';
  $handler->display->display_options['fields']['field_cap_short_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_short_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_short_address']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Email */
  $handler->display->display_options['fields']['field_cap_primary_email']['id'] = 'field_cap_primary_email';
  $handler->display->display_options['fields']['field_cap_primary_email']['table'] = 'field_data_field_cap_primary_email';
  $handler->display->display_options['fields']['field_cap_primary_email']['field'] = 'field_cap_primary_email';
  $handler->display->display_options['fields']['field_cap_primary_email']['label'] = '';
  $handler->display->display_options['fields']['field_cap_primary_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_primary_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_primary_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_primary_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Phone Numbers */
  $handler->display->display_options['fields']['field_cap_primary_phone']['id'] = 'field_cap_primary_phone';
  $handler->display->display_options['fields']['field_cap_primary_phone']['table'] = 'field_data_field_cap_primary_phone';
  $handler->display->display_options['fields']['field_cap_primary_phone']['field'] = 'field_cap_primary_phone';
  $handler->display->display_options['fields']['field_cap_primary_phone']['label'] = '';
  $handler->display->display_options['fields']['field_cap_primary_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_primary_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_primary_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_cap_primary_phone']['delta_offset'] = '0';
  /* Field: Field: Office Location (Override) */
  $handler->display->display_options['fields']['field_office_location']['id'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['table'] = 'field_data_field_office_location';
  $handler->display->display_options['fields']['field_office_location']['field'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['label'] = 'Contact';
  $handler->display->display_options['fields']['field_office_location']['element_type'] = '0';
  $handler->display->display_options['fields']['field_office_location']['element_class'] = 'ses-people-column-contact';
  $handler->display->display_options['fields']['field_office_location']['empty'] = '[field_cap_short_address]';
  $handler->display->display_options['fields']['field_office_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_office_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Phone (Override) */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['empty'] = '[field_cap_primary_phone]';
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Stanford E-mail (Override) */
  $handler->display->display_options['fields']['field_stanford_email']['id'] = 'field_stanford_email';
  $handler->display->display_options['fields']['field_stanford_email']['table'] = 'field_data_field_stanford_email';
  $handler->display->display_options['fields']['field_stanford_email']['field'] = 'field_stanford_email';
  $handler->display->display_options['fields']['field_stanford_email']['label'] = '';
  $handler->display->display_options['fields']['field_stanford_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stanford_email']['empty'] = '[field_cap_primary_email]';
  $handler->display->display_options['fields']['field_stanford_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Sort criterion: User: Directory Name (field_account_directory_name) */
  $handler->display->display_options['sorts']['field_account_directory_name_value']['id'] = 'field_account_directory_name_value';
  $handler->display->display_options['sorts']['field_account_directory_name_value']['table'] = 'field_data_field_account_directory_name';
  $handler->display->display_options['sorts']['field_account_directory_name_value']['field'] = 'field_account_directory_name_value';
  /* Contextual filter: User: Directory Name (field_account_directory_name) */
  $handler->display->display_options['arguments']['field_account_directory_name_value']['id'] = 'field_account_directory_name_value';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['table'] = 'field_data_field_account_directory_name';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['field'] = 'field_account_directory_name_value';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_account_directory_name_value']['limit'] = '1';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '>';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '1';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: Associate Type (field_ses_associate_type) */
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['id'] = 'field_ses_associate_type_tid_1';
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['table'] = 'field_data_field_ses_associate_type';
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['field'] = 'field_ses_associate_type_tid';
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['group'] = 1;
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['expose']['operator_id'] = 'field_ses_associate_type_tid_1_op';
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['expose']['operator'] = 'field_ses_associate_type_tid_1_op';
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['expose']['identifier'] = 'field_ses_associate_type_tid_1';
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    10 => 0,
    15 => 0,
    11 => 0,
    8 => 0,
    6 => 0,
    14 => 0,
    13 => 0,
    12 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['type'] = 'select';
  $handler->display->display_options['filters']['field_ses_associate_type_tid_1']['vocabulary'] = 'profile_personnel_types';
  /* Filter criterion: Field: Secondary Affiliations (field_secondary_affiliations) */
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['id'] = 'field_secondary_affiliations_value';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['table'] = 'field_data_field_secondary_affiliations';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['field'] = 'field_secondary_affiliations_value';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['group'] = 1;
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['operator_id'] = 'field_secondary_affiliations_value_op';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['label'] = 'Affiliation';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['operator'] = 'field_secondary_affiliations_value_op';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['identifier'] = 'field_secondary_affiliations_value';
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    10 => 0,
    15 => 0,
    11 => 0,
    8 => 0,
    6 => 0,
    14 => 0,
    13 => 0,
    12 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_secondary_affiliations_value']['reduce_duplicates'] = TRUE;
  /* Filter criterion: User: Alumnus (field_alumnus) */
  $handler->display->display_options['filters']['field_alumnus_value']['id'] = 'field_alumnus_value';
  $handler->display->display_options['filters']['field_alumnus_value']['table'] = 'field_data_field_alumnus';
  $handler->display->display_options['filters']['field_alumnus_value']['field'] = 'field_alumnus_value';
  $handler->display->display_options['filters']['field_alumnus_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_alumnus_value']['group'] = 2;
  /* Filter criterion: User: Alumnus (field_alumnus) */
  $handler->display->display_options['filters']['field_alumnus_value_1']['id'] = 'field_alumnus_value_1';
  $handler->display->display_options['filters']['field_alumnus_value_1']['table'] = 'field_data_field_alumnus';
  $handler->display->display_options['filters']['field_alumnus_value_1']['field'] = 'field_alumnus_value';
  $handler->display->display_options['filters']['field_alumnus_value_1']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_alumnus_value_1']['group'] = 2;
  /* Filter criterion: User: Name (raw) */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'users';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'or Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    10 => 0,
    15 => 0,
    11 => 0,
    8 => 0,
    6 => 0,
    14 => 0,
    13 => 0,
    12 => 0,
    3 => 0,
    7 => 0,
    4 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'people/all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'People';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Gloassary */
  $handler = $view->new_display('attachment', 'Gloassary', 'glossary');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Directory Name (field_account_directory_name) */
  $handler->display->display_options['arguments']['field_account_directory_name_value']['id'] = 'field_account_directory_name_value';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['table'] = 'field_data_field_account_directory_name';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['field'] = 'field_account_directory_name_value';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['summary']['format'] = 'unformatted_summary';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['summary_options']['count'] = FALSE;
  $handler->display->display_options['arguments']['field_account_directory_name_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_account_directory_name_value']['glossary'] = TRUE;
  $handler->display->display_options['arguments']['field_account_directory_name_value']['limit'] = '1';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_arguments'] = FALSE;
  $handler->display->display_options['inherit_exposed_filters'] = TRUE;
  $export['people'] = $view;

  $view = new view();
  $view->name = 'user_profile_contact_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Profile Contact Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Profile Contact Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: User: Email */
  $handler->display->display_options['fields']['field_cap_primary_email']['id'] = 'field_cap_primary_email';
  $handler->display->display_options['fields']['field_cap_primary_email']['table'] = 'field_data_field_cap_primary_email';
  $handler->display->display_options['fields']['field_cap_primary_email']['field'] = 'field_cap_primary_email';
  $handler->display->display_options['fields']['field_cap_primary_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_primary_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cap_primary_email']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_cap_primary_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_primary_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Stanford E-mail (Override) */
  $handler->display->display_options['fields']['field_stanford_email']['id'] = 'field_stanford_email';
  $handler->display->display_options['fields']['field_stanford_email']['table'] = 'field_data_field_stanford_email';
  $handler->display->display_options['fields']['field_stanford_email']['field'] = 'field_stanford_email';
  $handler->display->display_options['fields']['field_stanford_email']['label'] = 'Email';
  $handler->display->display_options['fields']['field_stanford_email']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_stanford_email']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_stanford_email']['empty'] = '[field_cap_primary_email]';
  $handler->display->display_options['fields']['field_stanford_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_stanford_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Additional Email */
  $handler->display->display_options['fields']['field_alternate_email']['id'] = 'field_alternate_email';
  $handler->display->display_options['fields']['field_alternate_email']['table'] = 'field_data_field_alternate_email';
  $handler->display->display_options['fields']['field_alternate_email']['field'] = 'field_alternate_email';
  $handler->display->display_options['fields']['field_alternate_email']['label'] = 'Alternate email';
  $handler->display->display_options['fields']['field_alternate_email']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_alternate_email']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_alternate_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_alternate_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Phone Numbers */
  $handler->display->display_options['fields']['field_cap_primary_phone']['id'] = 'field_cap_primary_phone';
  $handler->display->display_options['fields']['field_cap_primary_phone']['table'] = 'field_data_field_cap_primary_phone';
  $handler->display->display_options['fields']['field_cap_primary_phone']['field'] = 'field_cap_primary_phone';
  $handler->display->display_options['fields']['field_cap_primary_phone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_cap_primary_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_primary_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cap_primary_phone']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_cap_primary_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_primary_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_cap_primary_phone']['delta_offset'] = '0';
  /* Field: Field: Phone (Override) */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Phone';
  $handler->display->display_options['fields']['field_phone']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_phone']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_phone']['empty'] = '[field_cap_primary_phone]';
  $handler->display->display_options['fields']['field_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Fax */
  $handler->display->display_options['fields']['field_cap_fax']['id'] = 'field_cap_fax';
  $handler->display->display_options['fields']['field_cap_fax']['table'] = 'field_data_field_cap_fax';
  $handler->display->display_options['fields']['field_cap_fax']['field'] = 'field_cap_fax';
  $handler->display->display_options['fields']['field_cap_fax']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_fax']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cap_fax']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_cap_fax']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_fax']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Fax (Override) */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['label'] = 'Fax';
  $handler->display->display_options['fields']['field_fax']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_fax']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_fax']['empty'] = '[field_cap_fax]';
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_fax']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Address */
  $handler->display->display_options['fields']['field_cap_address']['id'] = 'field_cap_address';
  $handler->display->display_options['fields']['field_cap_address']['table'] = 'field_data_field_cap_address';
  $handler->display->display_options['fields']['field_cap_address']['field'] = 'field_cap_address';
  $handler->display->display_options['fields']['field_cap_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_address']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_cap_address']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_cap_address']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_address']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Office Location (Override) */
  $handler->display->display_options['fields']['field_office_location']['id'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['table'] = 'field_data_field_office_location';
  $handler->display->display_options['fields']['field_office_location']['field'] = 'field_office_location';
  $handler->display->display_options['fields']['field_office_location']['label'] = 'Office';
  $handler->display->display_options['fields']['field_office_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_office_location']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_office_location']['empty'] = '[field_cap_address]';
  $handler->display->display_options['fields']['field_office_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_office_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: Field: Lab Location */
  $handler->display->display_options['fields']['field_lab_location']['id'] = 'field_lab_location';
  $handler->display->display_options['fields']['field_lab_location']['table'] = 'field_data_field_lab_location';
  $handler->display->display_options['fields']['field_lab_location']['field'] = 'field_lab_location';
  $handler->display->display_options['fields']['field_lab_location']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_lab_location']['element_label_class'] = 'cap-contact-label';
  $handler->display->display_options['fields']['field_lab_location']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lab_location']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Alternate Contact Label */
  $handler->display->display_options['fields']['field_cap_alternate_label']['id'] = 'field_cap_alternate_label';
  $handler->display->display_options['fields']['field_cap_alternate_label']['table'] = 'field_data_field_cap_alternate_label';
  $handler->display->display_options['fields']['field_cap_alternate_label']['field'] = 'field_cap_alternate_label';
  $handler->display->display_options['fields']['field_cap_alternate_label']['label'] = '';
  $handler->display->display_options['fields']['field_cap_alternate_label']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_alternate_label']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_alternate_label']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Alternate Contact Name */
  $handler->display->display_options['fields']['field_cap_alternate_name']['id'] = 'field_cap_alternate_name';
  $handler->display->display_options['fields']['field_cap_alternate_name']['table'] = 'field_data_field_cap_alternate_name';
  $handler->display->display_options['fields']['field_cap_alternate_name']['field'] = 'field_cap_alternate_name';
  $handler->display->display_options['fields']['field_cap_alternate_name']['label'] = '';
  $handler->display->display_options['fields']['field_cap_alternate_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_alternate_name']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_alternate_name']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Alternate Contact Title */
  $handler->display->display_options['fields']['field_cap_alternate_title']['id'] = 'field_cap_alternate_title';
  $handler->display->display_options['fields']['field_cap_alternate_title']['table'] = 'field_data_field_cap_alternate_title';
  $handler->display->display_options['fields']['field_cap_alternate_title']['field'] = 'field_cap_alternate_title';
  $handler->display->display_options['fields']['field_cap_alternate_title']['label'] = '';
  $handler->display->display_options['fields']['field_cap_alternate_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_alternate_title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_alternate_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Alternate Contact Email */
  $handler->display->display_options['fields']['field_cap_alternate_email']['id'] = 'field_cap_alternate_email';
  $handler->display->display_options['fields']['field_cap_alternate_email']['table'] = 'field_data_field_cap_alternate_email';
  $handler->display->display_options['fields']['field_cap_alternate_email']['field'] = 'field_cap_alternate_email';
  $handler->display->display_options['fields']['field_cap_alternate_email']['label'] = '';
  $handler->display->display_options['fields']['field_cap_alternate_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_alternate_email']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_alternate_email']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Alternate Contact Phone Numbers */
  $handler->display->display_options['fields']['field_cap_alternate_phone']['id'] = 'field_cap_alternate_phone';
  $handler->display->display_options['fields']['field_cap_alternate_phone']['table'] = 'field_data_field_cap_alternate_phone';
  $handler->display->display_options['fields']['field_cap_alternate_phone']['field'] = 'field_cap_alternate_phone';
  $handler->display->display_options['fields']['field_cap_alternate_phone']['label'] = '';
  $handler->display->display_options['fields']['field_cap_alternate_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_alternate_phone']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_alternate_phone']['settings'] = array(
    'field_formatter_class' => '',
  );
  $handler->display->display_options['fields']['field_cap_alternate_phone']['delta_offset'] = '0';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['user_profile_contact_block'] = $view;

  $view = new view();
  $view->name = 'user_profile_courses_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Profile Courses Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Title Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: User: Courses Taught */
  $handler->display->display_options['fields']['field_cap_courses_taught']['id'] = 'field_cap_courses_taught';
  $handler->display->display_options['fields']['field_cap_courses_taught']['table'] = 'field_data_field_cap_courses_taught';
  $handler->display->display_options['fields']['field_cap_courses_taught']['field'] = 'field_cap_courses_taught';
  $handler->display->display_options['fields']['field_cap_courses_taught']['label'] = '';
  $handler->display->display_options['fields']['field_cap_courses_taught']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_courses_taught']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_courses_taught']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['user_profile_courses_block'] = $view;

  $view = new view();
  $view->name = 'user_profile_image_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Profile Image Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Title Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: User: Stanford Profile Image */
  $handler->display->display_options['fields']['field_cap_profile_image']['id'] = 'field_cap_profile_image';
  $handler->display->display_options['fields']['field_cap_profile_image']['table'] = 'field_data_field_cap_profile_image';
  $handler->display->display_options['fields']['field_cap_profile_image']['field'] = 'field_cap_profile_image';
  $handler->display->display_options['fields']['field_cap_profile_image']['label'] = '';
  $handler->display->display_options['fields']['field_cap_profile_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_profile_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cap_profile_image']['settings'] = array(
    'image_style' => 'med-profile',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Field: User: Profile Image (Override) */
  $handler->display->display_options['fields']['field_ses_image_override_']['id'] = 'field_ses_image_override_';
  $handler->display->display_options['fields']['field_ses_image_override_']['table'] = 'field_data_field_ses_image_override_';
  $handler->display->display_options['fields']['field_ses_image_override_']['field'] = 'field_ses_image_override_';
  $handler->display->display_options['fields']['field_ses_image_override_']['label'] = '';
  $handler->display->display_options['fields']['field_ses_image_override_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ses_image_override_']['empty'] = '[field_cap_profile_image]';
  $handler->display->display_options['fields']['field_ses_image_override_']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ses_image_override_']['settings'] = array(
    'image_style' => 'large-profile',
    'image_link' => '',
    'field_formatter_class' => '',
  );
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['user_profile_image_block'] = $view;

  $view = new view();
  $view->name = 'user_profile_research_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Profile Research Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Title Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: User: Current Research - Full */
  $handler->display->display_options['fields']['field_cap_research']['id'] = 'field_cap_research';
  $handler->display->display_options['fields']['field_cap_research']['table'] = 'field_data_field_cap_research';
  $handler->display->display_options['fields']['field_cap_research']['field'] = 'field_cap_research';
  $handler->display->display_options['fields']['field_cap_research']['label'] = 'Research';
  $handler->display->display_options['fields']['field_cap_research']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_research']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cap_research']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['user_profile_research_block'] = $view;

  $view = new view();
  $view->name = 'user_title_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Title Block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Title Block';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: User: Title (System Provided) */
  $handler->display->display_options['fields']['field_cap_short_title']['id'] = 'field_cap_short_title';
  $handler->display->display_options['fields']['field_cap_short_title']['table'] = 'field_data_field_cap_short_title';
  $handler->display->display_options['fields']['field_cap_short_title']['field'] = 'field_cap_short_title';
  $handler->display->display_options['fields']['field_cap_short_title']['label'] = '';
  $handler->display->display_options['fields']['field_cap_short_title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cap_short_title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cap_short_title']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Field: User: Title (Override) */
  $handler->display->display_options['fields']['field_ses_title_override']['id'] = 'field_ses_title_override';
  $handler->display->display_options['fields']['field_ses_title_override']['table'] = 'field_data_field_ses_title_override';
  $handler->display->display_options['fields']['field_ses_title_override']['field'] = 'field_ses_title_override';
  $handler->display->display_options['fields']['field_ses_title_override']['label'] = '';
  $handler->display->display_options['fields']['field_ses_title_override']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ses_title_override']['empty'] = '[field_cap_short_title]';
  $handler->display->display_options['fields']['field_ses_title_override']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ses_title_override']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['user_title_block'] = $view;

  return $export;
}
