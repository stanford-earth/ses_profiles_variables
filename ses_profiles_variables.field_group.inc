<?php
/**
 * @file
 * ses_profiles_variables.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ses_profiles_variables_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_admin|user|user|form';
  $field_group->group_name = 'group_account_admin';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_account_main';
  $field_group->data = array(
    'label' => 'Account Administration',
    'weight' => '7',
    'children' => array(
      0 => 'field_account_directory_name',
      1 => 'field_ses_non_cap_profile',
      2 => 'field_alumnus',
      3 => 'field_import_workgroup',
      4 => 'googleanalytics',
      5 => 'redirect',
      6 => 'account',
      7 => 'timezone',
      8 => 'wysiwyg',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Account Administration',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'ses-account-admin-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_account_admin|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_affiliations|user|user|form';
  $field_group->group_name = 'group_account_affiliations';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_account_main';
  $field_group->data = array(
    'label' => 'Department and Program Affiliations',
    'weight' => '6',
    'children' => array(
      0 => 'field_personnel_type',
      1 => 'field_primary_affiliations',
      2 => 'field_secondary_affiliations',
      3 => 'field_ses_research_group',
      4 => 'field_ses_associate_type',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_account_affiliations|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_emergency|user|user|form';
  $field_group->group_name = 'group_account_emergency';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_user_account';
  $field_group->data = array(
    'label' => 'Emergency Contact Info',
    'weight' => '170',
    'children' => array(
      0 => 'field_emergency_name',
      1 => 'field_emergency_phone1',
      2 => 'field_emergency_phone2',
      3 => 'field_emergency_relationship',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Emergency Contact Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'This emergency contact information is accessible only to School of Earth Sciences department managers and certain Dean\'s Office personnel.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_account_emergency|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account_main|user|user|form';
  $field_group->group_name = 'group_account_main';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account Tabs',
    'weight' => '2',
    'children' => array(
      0 => 'group_account_affiliations',
      1 => 'group_account_admin',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-account-main field-group-tabs',
      ),
    ),
  );
  $export['group_account_main|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|user|user|default';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'Bio',
    'weight' => '83',
    'children' => array(
      0 => 'field_cap_bio',
      1 => 'field_cap_academic_appointments',
      2 => 'field_ses_non_cap_bio',
      3 => 'group_cap_admin_appts',
      4 => 'group_cap_community',
      5 => 'group_cap_education',
      6 => 'group_cap_work_experience',
      7 => 'group_cap_current_role',
      8 => 'group_cap_professional_orgs',
      9 => 'group_cap_professional_interests',
      10 => 'group_cap_presentations',
      11 => 'group_cap_personal_interests',
      12 => 'group_cap_patents',
      13 => 'group_cap_honors_and_awards',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bio field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_bio|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_admin_appts|user|user|default';
  $field_group->group_name = 'group_cap_admin_appts';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Administrative Appointments',
    'weight' => '5',
    'children' => array(
      0 => 'field_cap_admin_appointments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Administrative Appointments',
      'instance_settings' => array(
        'classes' => 'group-cap-admin-appts field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_admin_appts|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_advisees|user|user|default';
  $field_group->group_name = 'group_cap_advisees';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_teaching';
  $field_group->data = array(
    'label' => 'Advisors/Advisees',
    'weight' => '15',
    'children' => array(
      0 => 'field_cap_postdoc_advisees',
      1 => 'field_cap_stanford_advisors',
      2 => 'field_cv_advisees_degrees',
      3 => 'field_cv_advisee_publications',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advisors/Advisees',
      'instance_settings' => array(
        'classes' => 'group-cap-advisees field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_advisees|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_community|user|user|default';
  $field_group->group_name = 'group_cap_community';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Community and International Work',
    'weight' => '13',
    'children' => array(
      0 => 'field_cap_international',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Community and International Work',
      'instance_settings' => array(
        'classes' => 'group-cap-community field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_community|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_courses|user|user|default';
  $field_group->group_name = 'group_cap_courses';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_teaching';
  $field_group->data = array(
    'label' => 'Courses Taught',
    'weight' => '14',
    'children' => array(
      0 => 'field_cap_courses_taught',
      1 => 'field_ses_courses_override',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Courses Taught',
      'instance_settings' => array(
        'classes' => 'group-cap-courses field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_courses|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_current_role|user|user|default';
  $field_group->group_name = 'group_cap_current_role';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Current Role at Stanford',
    'weight' => '2',
    'children' => array(
      0 => 'field_cap_current_stanford_role',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Current Role at Stanford',
      'instance_settings' => array(
        'classes' => 'group-cap-current-role field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_current_role|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_education|user|user|default';
  $field_group->group_name = 'group_cap_education';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Education',
    'weight' => '8',
    'children' => array(
      0 => 'field_cap_education',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Education',
      'instance_settings' => array(
        'classes' => 'group-cap-education field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_education|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_fellowships|user|user|default';
  $field_group->group_name = 'group_cap_fellowships';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_teaching';
  $field_group->data = array(
    'label' => 'Graduate and Fellowship Programs',
    'weight' => '16',
    'children' => array(
      0 => 'field_cap_grad_fellowship',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Graduate and Fellowship Programs',
      'instance_settings' => array(
        'classes' => 'group-cap-fellowships field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_fellowships|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_honors_and_awards|user|user|default';
  $field_group->group_name = 'group_cap_honors_and_awards';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Honors and Awards',
    'weight' => '6',
    'children' => array(
      0 => 'field_cap_honors_and_awards',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Honors and Awards',
      'instance_settings' => array(
        'classes' => 'group-cap-honors-and-awards field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_honors_and_awards|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_keywords|user|user|default';
  $field_group->group_name = 'group_cap_keywords';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Keywords',
    'weight' => '13',
    'children' => array(
      0 => 'field_cap_keywords',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Keywords',
      'instance_settings' => array(
        'classes' => 'group-cap-keywords field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_keywords|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_lab_affiliations|user|user|default';
  $field_group->group_name = 'group_cap_lab_affiliations';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_research_scholarship';
  $field_group->data = array(
    'label' => 'Lab Affiliations',
    'weight' => '11',
    'children' => array(
      0 => 'field_cap_lab_affiliations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Lab Affiliations',
      'instance_settings' => array(
        'classes' => 'group-cap-lab-affiliations field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_lab_affiliations|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_patents|user|user|default';
  $field_group->group_name = 'group_cap_patents';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Patents',
    'weight' => '12',
    'children' => array(
      0 => 'field_cap_patents',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Patents',
      'instance_settings' => array(
        'classes' => 'group-cap-patents field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_patents|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_personal_interests|user|user|default';
  $field_group->group_name = 'group_cap_personal_interests';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Personal Interests',
    'weight' => '11',
    'children' => array(
      0 => 'field_cap_personal_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Personal Interests',
      'instance_settings' => array(
        'classes' => 'group-cap-personal-interests field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_personal_interests|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_presentations|user|user|default';
  $field_group->group_name = 'group_cap_presentations';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Presentations',
    'weight' => '14',
    'children' => array(
      0 => 'field_cap_presentations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Presentations',
      'instance_settings' => array(
        'classes' => 'group-cap-presentations field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_presentations|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_professional_interests|user|user|default';
  $field_group->group_name = 'group_cap_professional_interests';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Professional Interests',
    'weight' => '10',
    'children' => array(
      0 => 'field_cap_professional_interests',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Professional Interests',
      'instance_settings' => array(
        'classes' => 'group-cap-professional-interests field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_professional_interests|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_professional_orgs|user|user|default';
  $field_group->group_name = 'group_cap_professional_orgs';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Professional Organizations',
    'weight' => '7',
    'children' => array(
      0 => 'field_cap_professional_orgs',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Professional Organizations',
      'instance_settings' => array(
        'classes' => 'group-cap-professional-orgs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_professional_orgs|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_projects|user|user|default';
  $field_group->group_name = 'group_cap_projects';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_research_scholarship';
  $field_group->data = array(
    'label' => 'Projects',
    'weight' => '12',
    'children' => array(
      0 => 'field_cap_projects',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Projects',
      'instance_settings' => array(
        'classes' => 'group-cap-projects field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_projects|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_publications|user|user|default';
  $field_group->group_name = 'group_cap_publications';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_publications';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '25',
    'children' => array(
      0 => 'field_cap_publications',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publications',
      'instance_settings' => array(
        'classes' => 'group-cap-publications field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_publications|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_research|user|user|default';
  $field_group->group_name = 'group_cap_research';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_research_scholarship';
  $field_group->data = array(
    'label' => 'Current Research and Scholarly Interests',
    'weight' => '10',
    'children' => array(
      0 => 'field_cap_research',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Current Research and Scholarly Interests',
      'instance_settings' => array(
        'classes' => 'group-cap-research field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_research|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cap_work_experience|user|user|default';
  $field_group->group_name = 'group_cap_work_experience';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_bio';
  $field_group->data = array(
    'label' => 'Work Experience',
    'weight' => '9',
    'children' => array(
      0 => 'field_cap_service_work',
      1 => 'field_cap_work_experience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Work Experience',
      'instance_settings' => array(
        'classes' => 'group-cap-work-experience field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_cap_work_experience|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile_info|user|user|form';
  $field_group->group_name = 'group_profile_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Profile Information',
    'weight' => '1',
    'children' => array(
      0 => 'field_cap_admin_appointments',
      1 => 'field_cap_bio',
      2 => 'field_cap_international',
      3 => 'field_cap_courses_taught',
      4 => 'field_cap_research',
      5 => 'field_cap_education',
      6 => 'field_cap_grad_fellowship',
      7 => 'field_cap_honors_and_awards',
      8 => 'field_cap_internet_links',
      9 => 'field_cap_keywords',
      10 => 'field_cap_patents',
      11 => 'field_cap_personal_interests',
      12 => 'field_cap_postdoc_advisees',
      13 => 'field_cap_presentations',
      14 => 'field_cap_professional_interests',
      15 => 'field_cap_professional_orgs',
      16 => 'field_cap_projects',
      17 => 'field_cap_publications',
      18 => 'field_cap_service_work',
      19 => 'field_cap_stanford_advisors',
      20 => 'field_cap_sunet_id',
      21 => 'field_cap_current_stanford_role',
      22 => 'field_cap_work_experience',
      23 => 'field_cap_profile_link',
      24 => 'field_cap_lab_affiliations',
      25 => 'field_cap_alternate_label',
      26 => 'field_cap_alternate_name',
      27 => 'field_cap_alternate_title',
      28 => 'field_cap_alternate_phone',
      29 => 'field_cap_alternate_email',
      30 => 'field_cap_academic_appointments',
      31 => 'field_cap_profile_id',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Profile Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'hidden-profile-section',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_profile_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile|user|user|default';
  $field_group->group_name = 'group_profile';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Group',
    'weight' => '9',
    'children' => array(
      0 => 'group_bio',
      1 => 'group_research_scholarship',
      2 => 'group_teaching',
      3 => 'group_publications',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-profile field-group-htabs',
      ),
    ),
  );
  $export['group_profile|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publications|user|user|default';
  $field_group->group_name = 'group_publications';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'Publications',
    'weight' => '86',
    'children' => array(
      0 => 'group_cap_publications',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publications field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_publications|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_research_scholarship|user|user|default';
  $field_group->group_name = 'group_research_scholarship';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'Research & Scholarship',
    'weight' => '84',
    'children' => array(
      0 => 'group_cap_research',
      1 => 'group_cap_lab_affiliations',
      2 => 'group_cap_projects',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-research-scholarship field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_research_scholarship|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaching|user|user|default';
  $field_group->group_name = 'group_teaching';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_profile';
  $field_group->data = array(
    'label' => 'Teaching',
    'weight' => '85',
    'children' => array(
      0 => 'group_cap_advisees',
      1 => 'group_cap_courses',
      2 => 'group_cap_fellowships',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-teaching field-group-htab',
        'id' => '',
      ),
    ),
  );
  $export['group_teaching|user|user|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_user_account|user|user|form';
  $field_group->group_name = 'group_user_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'School of Earth Sciences Overrides',
    'weight' => '0',
    'children' => array(
      0 => 'field_cap_profile_image',
      1 => 'field_cap_short_title',
      2 => 'field_cap_primary_email',
      3 => 'field_cap_primary_phone',
      4 => 'field_cap_address',
      5 => 'field_cv_advisees_degrees',
      6 => 'field_cv_advisee_publications',
      7 => 'field_office_location',
      8 => 'field_lab_location',
      9 => 'field_cap_fax',
      10 => 'field_cap_short_address',
      11 => 'field_phone',
      12 => 'field_fax',
      13 => 'field_stanford_email',
      14 => 'field_alternate_email',
      15 => 'field_ses_title_override',
      16 => 'field_ses_image_override_',
      17 => 'field_cap_research_terse',
      18 => 'field_cap_research_short',
      19 => 'field_ses_research_override',
      20 => 'field_ses_courses_override',
      21 => 'field_ses_non_cap_bio',
      22 => 'group_account_emergency',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'School of Earth Sciences Overrides',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'The following fields may be updated here for display only on School of Earth Sciences web sites. Information entered here will not be updated back to StanfordWho or Stanford Profiles.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_user_account|user|user|form'] = $field_group;

  return $export;
}
