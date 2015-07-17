<?php
/**
 * @file
 * ses_profiles_variables.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ses_profiles_variables_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-vocabulary_4-field_taxonomy_news_items'
  $field_instances['taxonomy_term-vocabulary_4-field_taxonomy_news_items'] = array(
    'bundle' => 'vocabulary_4',
    'default_value' => array(
      0 => array(
        'view_id' => 'taxonomy_views:block_1',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewreference',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'viewreference_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'viewreference',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'viewreference_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxonomy_news_items',
    'label' => 'Taxonomy News Items',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewreference',
      'settings' => array(),
      'type' => 'viewreference_select',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'user-user-field_account_directory_name'
  $field_instances['user-user-field_account_directory_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_account_directory_name',
    'label' => 'Directory Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 166,
    ),
  );

  // Exported field_instance: 'user-user-field_alternate_email'
  $field_instances['user-user-field_alternate_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may specify an additional email address here that will display only on School of Earth Sciences web sites.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_alternate_email',
    'label' => 'Additional Email',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 160,
    ),
  );

  // Exported field_instance: 'user-user-field_alumnus'
  $field_instances['user-user-field_alumnus'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_alumnus',
    'label' => 'Alumnus',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 168,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_academic_appointments'
  $field_instances['user-user-field_cap_academic_appointments'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_academic_appointments',
    'label' => 'Academic Appointments',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_address'
  $field_instances['user-user-field_cap_address'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is your work address as it appears in StanfordWho.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 255,
      ),
      'type' => 'text_textfield',
      'weight' => 150,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_admin_appointments'
  $field_instances['user-user-field_cap_admin_appointments'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_admin_appointments',
    'label' => 'Administrative Appointments',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_alternate_email'
  $field_instances['user-user-field_cap_alternate_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_alternate_email',
    'label' => 'Alternate Contact Email',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 120,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_alternate_label'
  $field_instances['user-user-field_cap_alternate_label'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_alternate_label',
    'label' => 'Alternate Contact Label',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_alternate_name'
  $field_instances['user-user-field_cap_alternate_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_alternate_name',
    'label' => 'Alternate Contact Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 117,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_alternate_phone'
  $field_instances['user-user-field_cap_alternate_phone'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_alternate_phone',
    'label' => 'Alternate Contact Phone Numbers',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 119,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_alternate_title'
  $field_instances['user-user-field_cap_alternate_title'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_alternate_title',
    'label' => 'Alternate Contact Title',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 118,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_bio'
  $field_instances['user-user-field_cap_bio'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_bio',
    'label' => 'Bio',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 121,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_courses_taught'
  $field_instances['user-user-field_cap_courses_taught'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_courses_taught',
    'label' => 'Courses Taught',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 123,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_current_stanford_role'
  $field_instances['user-user-field_cap_current_stanford_role'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_current_stanford_role',
    'label' => 'Current Role at Stanford',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 126,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_education'
  $field_instances['user-user-field_cap_education'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_education',
    'label' => 'Education',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 127,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_fax'
  $field_instances['user-user-field_cap_fax'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is your fax number as shown in StanfordWho.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_fax',
    'label' => 'Fax',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 156,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_grad_fellowship'
  $field_instances['user-user-field_cap_grad_fellowship'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_grad_fellowship',
    'label' => 'Graduate and Fellowship Programs',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 128,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_honors_and_awards'
  $field_instances['user-user-field_cap_honors_and_awards'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_honors_and_awards',
    'label' => 'Honors and Awards',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 129,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_international'
  $field_instances['user-user-field_cap_international'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_international',
    'label' => 'Community and International Work',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 122,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_internet_links'
  $field_instances['user-user-field_cap_internet_links'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_internet_links',
    'label' => 'Internet Links',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 130,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_keywords'
  $field_instances['user-user-field_cap_keywords'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_keywords',
    'label' => 'Keywords',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 131,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_lab_affiliations'
  $field_instances['user-user-field_cap_lab_affiliations'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_lab_affiliations',
    'label' => 'Lab Affiliations',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_patents'
  $field_instances['user-user-field_cap_patents'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_patents',
    'label' => 'Patents',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 133,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_personal_interests'
  $field_instances['user-user-field_cap_personal_interests'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 82,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_personal_interests',
    'label' => 'Personal Interests',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 134,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_postdoc_advisees'
  $field_instances['user-user-field_cap_postdoc_advisees'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_postdoc_advisees',
    'label' => 'Postdoctoral Advisees',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 135,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_presentations'
  $field_instances['user-user-field_cap_presentations'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_presentations',
    'label' => 'Presentations',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 136,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_primary_email'
  $field_instances['user-user-field_cap_primary_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is your email address as shown in StanfordWho.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_primary_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 158,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_primary_phone'
  $field_instances['user-user-field_cap_primary_phone'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These are your phone numbers as shown in StanfordWho.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_primary_phone',
    'label' => 'Phone Numbers',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 154,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_professional_interests'
  $field_instances['user-user-field_cap_professional_interests'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_professional_interests',
    'label' => 'Professional Interests',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 137,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_professional_orgs'
  $field_instances['user-user-field_cap_professional_orgs'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_professional_orgs',
    'label' => 'Professional Organizations',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 138,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_profile_id'
  $field_instances['user-user-field_cap_profile_id'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_profile_id',
    'label' => 'CAP Profile Id',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 146,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_profile_image'
  $field_instances['user-user-field_cap_profile_image'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => 'This is your profile image from the Stanford Profiles system. If you do not have a Stanford Profile or wish to display a different profile image only on School of Earth Sciences profile pages, you may specify it below.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_profile_image',
    'label' => 'Stanford Profile Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_3-col-header' => 0,
          'image_3-col-well-header' => 0,
          'image_3-col-well-profile' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-header' => 0,
          'image_6-col-header-short' => 0,
          'image_8-col-banner' => 0,
          'image_9-col-banner' => 0,
          'image_12-col-banner' => 0,
          'image_banner' => 0,
          'image_icon' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-profile' => 0,
          'image_large-square' => 0,
          'image_med-landscape' => 0,
          'image_med-profile' => 0,
          'image_med-square' => 0,
          'image_medium' => 0,
          'image_promo' => 0,
          'image_sm-landscape' => 0,
          'image_sm-square' => 0,
          'image_square_thumbnail' => 0,
          'image_stanfordeduhomepage' => 0,
          'image_stanfordhomepage-full' => 0,
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 161,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_profile_link'
  $field_instances['user-user-field_cap_profile_link'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_profile_link',
    'label' => 'Stanford Profile',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 143,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_projects'
  $field_instances['user-user-field_cap_projects'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_projects',
    'label' => 'Projects',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 139,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_publications'
  $field_instances['user-user-field_cap_publications'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 80,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_publications',
    'label' => 'Publications',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 140,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_research'
  $field_instances['user-user-field_cap_research'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_research',
    'label' => 'Current Research - Full',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 124,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_research_short'
  $field_instances['user-user-field_cap_research_short'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the "Current Research - Short" field from the Stanford Profiles system. It is limited to 500 characters and will be displayed on School of Earth Sciences directory pages if there is no "terse" research data and if the override field below is blank.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_research_short',
    'label' => 'Current Research - Short',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 164,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_research_terse'
  $field_instances['user-user-field_cap_research_terse'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the "Current Research Interest - Terse" field from the Stanford Profile system. It is limited to 80 characters long and, if it contains data and is not overridden by the override field below, will be displayed on the School of Earth Sciences directory pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_research_terse',
    'label' => 'Current Research - Terse',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 163,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_service_work'
  $field_instances['user-user-field_cap_service_work'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 48,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_service_work',
    'label' => 'Service Work',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 141,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_short_address'
  $field_instances['user-user-field_cap_short_address'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is an abbreviated version of your work address that comes from StanfordWho. It will be displayed on School of Earth Sciences directory pages unless you specify a different Office Location.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_short_address',
    'label' => 'Short Address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 151,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_short_title'
  $field_instances['user-user-field_cap_short_title'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is your job title as it appears in the Stanford Profiles system if you have a profile, or as it appears in StanfordWho.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_short_title',
    'label' => 'Title (System Provided)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 148,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_stanford_advisors'
  $field_instances['user-user-field_cap_stanford_advisors'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_stanford_advisors',
    'label' => 'Stanford Advisors',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 142,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_sunet_id'
  $field_instances['user-user-field_cap_sunet_id'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_sunet_id',
    'label' => 'SUNet ID',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 144,
    ),
  );

  // Exported field_instance: 'user-user-field_cap_work_experience'
  $field_instances['user-user-field_cap_work_experience'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 47,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cap_work_experience',
    'label' => 'Work Experience',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 145,
    ),
  );

  // Exported field_instance: 'user-user-field_cv_advisee_publications'
  $field_instances['user-user-field_cv_advisee_publications'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cv_advisee_publications',
    'label' => 'Advisee Publications',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 0,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 0,
          'full_html_for_cap_profiles' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'full_html_for_cap_profiles' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 169,
    ),
  );

  // Exported field_instance: 'user-user-field_cv_advisees_degrees'
  $field_instances['user-user-field_cv_advisees_degrees'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_cv_advisees_degrees',
    'label' => 'Advisees Receiving Degrees',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 0,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 0,
          'full_html_for_cap_profiles' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'full_html_for_cap_profiles' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 168,
    ),
  );

  // Exported field_instance: 'user-user-field_emergency_name'
  $field_instances['user-user-field_emergency_name'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_emergency_name',
    'label' => 'Emergency Contact ',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
          'full_html_for_cap_profiles' => 'full_html_for_cap_profiles',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
            'full_html_for_cap_profiles' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 113,
    ),
  );

  // Exported field_instance: 'user-user-field_emergency_phone1'
  $field_instances['user-user-field_emergency_phone1'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_emergency_phone1',
    'label' => 'Emergency Phone1',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 115,
    ),
  );

  // Exported field_instance: 'user-user-field_emergency_phone2'
  $field_instances['user-user-field_emergency_phone2'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_emergency_phone2',
    'label' => 'Emergency Phone2',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 116,
    ),
  );

  // Exported field_instance: 'user-user-field_emergency_relationship'
  $field_instances['user-user-field_emergency_relationship'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_emergency_relationship',
    'label' => 'Emergency Relationship',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 114,
    ),
  );

  // Exported field_instance: 'user-user-field_fax'
  $field_instances['user-user-field_fax'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may specify a different fax number here to display on School of Earth Sciences web sites.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_fax',
    'label' => 'Fax (Override)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 157,
    ),
  );

  // Exported field_instance: 'user-user-field_import_workgroup'
  $field_instances['user-user-field_import_workgroup'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_import_workgroup',
    'label' => 'Import Workgroup',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 169,
    ),
  );

  // Exported field_instance: 'user-user-field_lab_location'
  $field_instances['user-user-field_lab_location'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may enter a short Lab Location such as "Mitchell 136" which will be displayed only on School of Earth Sciences web sites.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_lab_location',
    'label' => 'Lab Location',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 153,
    ),
  );

  // Exported field_instance: 'user-user-field_office_location'
  $field_instances['user-user-field_office_location'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may enter a short Office Location such as "Mitchell 136" here to display only on School of Earth Sciences web sites.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_office_location',
    'label' => 'Office Location (Override)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 152,
    ),
  );

  // Exported field_instance: 'user-user-field_personnel_type'
  $field_instances['user-user-field_personnel_type'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_personnel_type',
    'label' => 'Personnel Type',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 153,
    ),
  );

  // Exported field_instance: 'user-user-field_phone'
  $field_instances['user-user-field_phone'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may enter a different phone number here that will display only on School of Earth Sciences web sites.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_phone',
    'label' => 'Phone (Override)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 155,
    ),
  );

  // Exported field_instance: 'user-user-field_primary_affiliations'
  $field_instances['user-user-field_primary_affiliations'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_primary_affiliations',
    'label' => 'Primary Affiliation',
    'required' => 1,
    'settings' => array(
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 154,
    ),
  );

  // Exported field_instance: 'user-user-field_secondary_affiliations'
  $field_instances['user-user-field_secondary_affiliations'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_secondary_affiliations',
    'label' => 'Secondary Affiliations',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 155,
    ),
  );

  // Exported field_instance: 'user-user-field_ses_associate_type'
  $field_instances['user-user-field_ses_associate_type'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'tid' => 2149,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_ses_associate_type',
    'label' => 'Associate Type',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 157,
    ),
  );

  // Exported field_instance: 'user-user-field_ses_courses_override'
  $field_instances['user-user-field_ses_courses_override'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may use this field to override the "Courses Taught" field that comes from the Stanford Profiles system. Anything entered here will replace the Stanford Profiles "courses taught" field when displayed on School of Earth Sciences web sites.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_ses_courses_override',
    'label' => 'Courses Taught (Override)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 0,
          2 => 0,
          3 => 0,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 167,
    ),
  );

  // Exported field_instance: 'user-user-field_ses_image_override_'
  $field_instances['user-user-field_ses_image_override_'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => 'You may specify an alternate profile image here which will be displayed only on School of Earth Sciences profile pages instead of the image from the Stanford profile.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_ses_image_override_',
    'label' => 'Profile Image (Override)',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_3-col-header' => 0,
          'image_3-col-well-header' => 0,
          'image_3-col-well-profile' => 0,
          'image_4-col-header' => 0,
          'image_6-col-banner' => 0,
          'image_6-col-header' => 0,
          'image_6-col-header-short' => 0,
          'image_8-col-banner' => 0,
          'image_9-col-banner' => 0,
          'image_12-col-banner' => 0,
          'image_banner' => 0,
          'image_icon' => 0,
          'image_large' => 0,
          'image_large-landscape' => 0,
          'image_large-profile' => 0,
          'image_large-square' => 0,
          'image_med-landscape' => 0,
          'image_med-profile' => 0,
          'image_med-square' => 0,
          'image_medium' => 0,
          'image_promo' => 0,
          'image_sm-landscape' => 0,
          'image_sm-square' => 0,
          'image_square_thumbnail' => 0,
          'image_stanfordeduhomepage' => 0,
          'image_stanfordhomepage-full' => 0,
          'image_thmb-landscape' => 0,
          'image_thmb-profile' => 0,
          'image_thmb-square' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 162,
    ),
  );

  // Exported field_instance: 'user-user-field_ses_non_cap_profile'
  $field_instances['user-user-field_ses_non_cap_profile'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_ses_non_cap_profile',
    'label' => 'Allow Non CAP Profile',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 167,
    ),
  );

  // Exported field_instance: 'user-user-field_ses_research_group'
  $field_instances['user-user-field_ses_research_group'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_ses_research_group',
    'label' => 'Research Groups',
    'required' => 0,
    'settings' => array(
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 156,
    ),
  );

  // Exported field_instance: 'user-user-field_ses_research_override'
  $field_instances['user-user-field_ses_research_override'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is the Current Research override field in which you may specify a brief research interest statement (500 characters) if you have no Stanford Profile or wish to display something different only on School of Earth Sciences directory pages.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_ses_research_override',
    'label' => 'Current Research - Override',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 165,
    ),
  );

  // Exported field_instance: 'user-user-field_ses_title_override'
  $field_instances['user-user-field_ses_title_override'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may enter a different title here to appear on School of Earth Sciences web sites.
',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'field_formatter_class' => '',
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_ses_title_override',
    'label' => 'Title (Override)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 149,
    ),
  );

  // Exported field_instance: 'user-user-field_stanford_email'
  $field_instances['user-user-field_stanford_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'You may specify a different Stanford email address here that will display only on School of Earth Sciences websites.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'user',
    'field_name' => 'field_stanford_email',
    'label' => 'Stanford E-mail (Override)',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          1 => 1,
          2 => 2,
          3 => 3,
          'content_editor_text_format' => 'content_editor_text_format',
          'ds_code' => 'ds_code',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            1 => array(
              'weight' => 0,
            ),
            2 => array(
              'weight' => -1,
            ),
            3 => array(
              'weight' => 1,
            ),
            'content_editor_text_format' => array(
              'weight' => -10,
            ),
            'ds_code' => array(
              'weight' => 12,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 159,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Academic Appointments');
  t('Additional Email');
  t('Address');
  t('Administrative Appointments');
  t('Advisee Publications');
  t('Advisees Receiving Degrees');
  t('Allow Non CAP Profile');
  t('Alternate Contact Email');
  t('Alternate Contact Label');
  t('Alternate Contact Name');
  t('Alternate Contact Phone Numbers');
  t('Alternate Contact Title');
  t('Alumnus');
  t('Associate Type');
  t('Bio');
  t('CAP Profile Id');
  t('Community and International Work');
  t('Courses Taught');
  t('Courses Taught (Override)');
  t('Current Research - Full');
  t('Current Research - Override');
  t('Current Research - Short');
  t('Current Research - Terse');
  t('Current Role at Stanford');
  t('Directory Name');
  t('Education');
  t('Email');
  t('Emergency Contact ');
  t('Emergency Phone1');
  t('Emergency Phone2');
  t('Emergency Relationship');
  t('Fax');
  t('Fax (Override)');
  t('Graduate and Fellowship Programs');
  t('Honors and Awards');
  t('Import Workgroup');
  t('Internet Links');
  t('Keywords');
  t('Lab Affiliations');
  t('Lab Location');
  t('Office Location (Override)');
  t('Patents');
  t('Personal Interests');
  t('Personnel Type');
  t('Phone (Override)');
  t('Phone Numbers');
  t('Postdoctoral Advisees');
  t('Presentations');
  t('Primary Affiliation');
  t('Professional Interests');
  t('Professional Organizations');
  t('Profile Image (Override)');
  t('Projects');
  t('Publications');
  t('Research Groups');
  t('SUNet ID');
  t('Secondary Affiliations');
  t('Service Work');
  t('Short Address');
  t('Stanford Advisors');
  t('Stanford E-mail (Override)');
  t('Stanford Profile');
  t('Stanford Profile Image');
  t('Taxonomy News Items');
  t('These are your phone numbers as shown in StanfordWho.');
  t('This is an abbreviated version of your work address that comes from StanfordWho. It will be displayed on School of Earth Sciences directory pages unless you specify a different Office Location.');
  t('This is the "Current Research - Short" field from the Stanford Profiles system. It is limited to 500 characters and will be displayed on School of Earth Sciences directory pages if there is no "terse" research data and if the override field below is blank.');
  t('This is the "Current Research Interest - Terse" field from the Stanford Profile system. It is limited to 80 characters long and, if it contains data and is not overridden by the override field below, will be displayed on the School of Earth Sciences directory pages.');
  t('This is the Current Research override field in which you may specify a brief research interest statement (500 characters) if you have no Stanford Profile or wish to display something different only on School of Earth Sciences directory pages.');
  t('This is your email address as shown in StanfordWho.');
  t('This is your fax number as shown in StanfordWho.');
  t('This is your job title as it appears in the Stanford Profiles system if you have a profile, or as it appears in StanfordWho.');
  t('This is your profile image from the Stanford Profiles system. If you do not have a Stanford Profile or wish to display a different profile image only on School of Earth Sciences profile pages, you may specify it below.');
  t('This is your work address as it appears in StanfordWho.');
  t('Title (Override)');
  t('Title (System Provided)');
  t('Work Experience');
  t('You may enter a different phone number here that will display only on School of Earth Sciences web sites.
');
  t('You may enter a different title here to appear on School of Earth Sciences web sites.
');
  t('You may enter a short Lab Location such as "Mitchell 136" which will be displayed only on School of Earth Sciences web sites.');
  t('You may enter a short Office Location such as "Mitchell 136" here to display only on School of Earth Sciences web sites.');
  t('You may specify a different Stanford email address here that will display only on School of Earth Sciences websites.');
  t('You may specify a different fax number here to display on School of Earth Sciences web sites.');
  t('You may specify an additional email address here that will display only on School of Earth Sciences web sites.');
  t('You may specify an alternate profile image here which will be displayed only on School of Earth Sciences profile pages instead of the image from the Stanford profile.');
  t('You may use this field to override the "Courses Taught" field that comes from the Stanford Profiles system. Anything entered here will replace the Stanford Profiles "courses taught" field when displayed on School of Earth Sciences web sites.');

  return $field_instances;
}
