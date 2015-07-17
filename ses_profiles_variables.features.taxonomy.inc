<?php
/**
 * @file
 * ses_profiles_variables.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ses_profiles_variables_taxonomy_default_vocabularies() {
  return array(
    'profile_personnel_types' => array(
      'name' => 'Profile Personnel Types',
      'machine_name' => 'profile_personnel_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
