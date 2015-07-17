<?php
/**
 * @file
 * ses_profiles_variables.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ses_profiles_variables_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_administrative-staff:people/all
  $menu_links['main-menu_administrative-staff:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Administrative Staff',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2165,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_administrative-staff:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_alumni:people/all
  $menu_links['main-menu_alumni:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Alumni',
    'options' => array(
      'query' => array(
        'field_personnel_type_value' => 'Alumni',
        'field_secondary_affiliations_value' => 'All',
        'title' => '',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_alumni:people/all',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_faculty---emeritus:people/all
  $menu_links['main-menu_faculty---emeritus:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Faculty - Emeritus',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2156,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faculty---emeritus:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_faculty---regular:people/all
  $menu_links['main-menu_faculty---regular:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Faculty - Regular',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2155,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faculty---regular:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_faculty-affiliated:people/all
  $menu_links['main-menu_faculty-affiliated:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Faculty Affiliated',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2162,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_faculty-affiliated:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_graduate-students:people/all
  $menu_links['main-menu_graduate-students:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Graduate Students',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2158,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_graduate-students:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_people:node/41444
  $menu_links['main-menu_people:node/41444'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/41444',
    'router_path' => 'node/%',
    'link_title' => 'People',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_people:node/41444',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_post-doctoral-scholars:people/all
  $menu_links['main-menu_post-doctoral-scholars:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Post Doctoral Scholars',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2163,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_post-doctoral-scholars:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_research-staff:people/all
  $menu_links['main-menu_research-staff:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Research Staff',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2166,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_research-staff:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_teaching-staff:people/all
  $menu_links['main-menu_teaching-staff:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Teaching Staff',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2167,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_teaching-staff:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Exported menu link: main-menu_undergraduate-students:people/all
  $menu_links['main-menu_undergraduate-students:people/all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'people/all',
    'router_path' => 'people/all',
    'link_title' => 'Undergraduate Students',
    'options' => array(
      'query' => array(
        'field_ses_associate_type_tid_1' => 2161,
        'field_secondary_affiliations_value' => 'All',
      ),
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_undergraduate-students:people/all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_people:node/41444',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administrative Staff');
  t('Alumni');
  t('Faculty - Emeritus');
  t('Faculty - Regular');
  t('Faculty Affiliated');
  t('Graduate Students');
  t('People');
  t('Post Doctoral Scholars');
  t('Research Staff');
  t('Teaching Staff');
  t('Undergraduate Students');


  return $menu_links;
}
