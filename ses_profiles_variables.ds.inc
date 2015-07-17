<?php
/**
 * @file
 * ses_profiles_variables.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ses_profiles_variables_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'profile_image' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
        'field_formatter_class' => 'pull-left',
      ),
    ),
    'user_profile_contact_block' => array(
      'weight' => '25',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'user_profile_title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h2',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
        'field_formatter_class' => '',
      ),
    ),
    'field_secondary_affiliations' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
          'lb' => 'Affiliations',
        ),
      ),
    ),
    'field_cap_internet_links' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_cap_profile_link' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_cap_academic_appointments' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ses_profiles_variables_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'courses_taught';
  $ds_field->label = 'Courses Taught';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|141bec1b2dbf4ccfba92f96af906ee75',
    'block_render' => '3',
  );
  $export['courses_taught'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'profile_image';
  $ds_field->label = 'Profile Image';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|user_profile_image_block-block',
    'block_render' => '3',
  );
  $export['profile_image'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'research_block';
  $ds_field->label = 'Research Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|6a074c8859bb52fad5b383eb82a6634e',
    'block_render' => '3',
  );
  $export['research_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_contact_block';
  $ds_field->label = 'User Profile Contact Block';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|d33a841c493e668f784377a1b2eae025',
    'block_render' => '3',
  );
  $export['user_profile_contact_block'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_profile_title';
  $ds_field->label = 'User Profile Title';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|user_title_block-block',
    'block_render' => '3',
  );
  $export['user_profile_title'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ses_profiles_variables_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'two_column__3070';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'profile_image',
        1 => 'user_profile_title',
        5 => 'field_cap_short_title',
        8 => 'field_ses_title_override',
      ),
      'right' => array(
        2 => 'field_cap_courses_taught',
        3 => 'field_cap_research',
        4 => 'field_cap_academic_appointments',
        6 => 'field_ses_courses_override',
        7 => 'group_cap_current_role',
        9 => 'field_cap_bio',
        11 => 'field_ses_non_cap_bio',
        12 => 'group_cap_admin_appts',
        14 => 'group_cap_honors_and_awards',
        17 => 'group_cap_professional_orgs',
        18 => 'group_cap_education',
        20 => 'group_profile',
        21 => 'group_cap_work_experience',
        22 => 'group_cap_research',
        23 => 'group_cap_professional_interests',
        24 => 'group_cap_personal_interests',
        25 => 'group_cap_lab_affiliations',
        26 => 'group_cap_patents',
        27 => 'field_cap_current_stanford_role',
        28 => 'field_cap_international',
        29 => 'group_cap_projects',
        30 => 'group_cap_community',
        31 => 'group_cap_courses',
        32 => 'field_cap_admin_appointments',
        33 => 'group_cap_presentations',
        34 => 'group_cap_advisees',
        35 => 'group_cap_fellowships',
        36 => 'field_cap_education',
        37 => 'field_cap_grad_fellowship',
        38 => 'field_cap_honors_and_awards',
        39 => 'field_cap_patents',
        40 => 'field_cap_postdoc_advisees',
        41 => 'field_cap_stanford_advisors',
        43 => 'group_cap_publications',
        44 => 'field_cap_professional_interests',
        45 => 'field_cv_advisees_degrees',
        46 => 'field_cv_advisee_publications',
        47 => 'field_cap_professional_orgs',
        48 => 'field_cap_projects',
        49 => 'field_cap_presentations',
        50 => 'field_cap_lab_affiliations',
        51 => 'field_cap_work_experience',
        52 => 'field_cap_service_work',
        53 => 'field_cap_publications',
        54 => 'field_cap_personal_interests',
        55 => 'group_bio',
        56 => 'group_research_scholarship',
        57 => 'group_teaching',
        58 => 'group_publications',
      ),
      'left' => array(
        10 => 'group_cap_contact_info',
        13 => 'field_secondary_affiliations',
        15 => 'field_cap_profile_link',
        16 => 'field_cap_internet_links',
        19 => 'group_cap_internet_links',
        42 => 'user_profile_contact_block',
      ),
    ),
    'fields' => array(
      'profile_image' => 'header',
      'user_profile_title' => 'header',
      'field_cap_courses_taught' => 'right',
      'field_cap_research' => 'right',
      'field_cap_academic_appointments' => 'right',
      'field_cap_short_title' => 'header',
      'field_ses_courses_override' => 'right',
      'group_cap_current_role' => 'right',
      'field_ses_title_override' => 'header',
      'field_cap_bio' => 'right',
      'group_cap_contact_info' => 'left',
      'field_ses_non_cap_bio' => 'right',
      'group_cap_admin_appts' => 'right',
      'field_secondary_affiliations' => 'left',
      'group_cap_honors_and_awards' => 'right',
      'field_cap_profile_link' => 'left',
      'field_cap_internet_links' => 'left',
      'group_cap_professional_orgs' => 'right',
      'group_cap_education' => 'right',
      'group_cap_internet_links' => 'left',
      'group_profile' => 'right',
      'group_cap_work_experience' => 'right',
      'group_cap_research' => 'right',
      'group_cap_professional_interests' => 'right',
      'group_cap_personal_interests' => 'right',
      'group_cap_lab_affiliations' => 'right',
      'group_cap_patents' => 'right',
      'field_cap_current_stanford_role' => 'right',
      'field_cap_international' => 'right',
      'group_cap_projects' => 'right',
      'group_cap_community' => 'right',
      'group_cap_courses' => 'right',
      'field_cap_admin_appointments' => 'right',
      'group_cap_presentations' => 'right',
      'group_cap_advisees' => 'right',
      'group_cap_fellowships' => 'right',
      'field_cap_education' => 'right',
      'field_cap_grad_fellowship' => 'right',
      'field_cap_honors_and_awards' => 'right',
      'field_cap_patents' => 'right',
      'field_cap_postdoc_advisees' => 'right',
      'field_cap_stanford_advisors' => 'right',
      'user_profile_contact_block' => 'left',
      'group_cap_publications' => 'right',
      'field_cap_professional_interests' => 'right',
      'field_cv_advisees_degrees' => 'right',
      'field_cv_advisee_publications' => 'right',
      'field_cap_professional_orgs' => 'right',
      'field_cap_projects' => 'right',
      'field_cap_presentations' => 'right',
      'field_cap_lab_affiliations' => 'right',
      'field_cap_work_experience' => 'right',
      'field_cap_service_work' => 'right',
      'field_cap_publications' => 'right',
      'field_cap_personal_interests' => 'right',
      'group_bio' => 'right',
      'group_research_scholarship' => 'right',
      'group_teaching' => 'right',
      'group_publications' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}
