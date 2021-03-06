<?php
/**
 * @file
 * ses_profiles_variables.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ses_profiles_variables_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_auth_uri';
  $strongarm->value = 'https://authz.stanford.edu/oauth/token';
  $export['ses_cap_lite_auth_uri'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_base_url';
  $strongarm->value = 'https://api.stanford.edu';
  $export['ses_cap_lite_base_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_bundle';
  $strongarm->value = 'user';
  $export['ses_cap_lite_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_clientid';
  $strongarm->value = 'a:3:{s:4:"text";s:16:"\'c�qЬ֖��A�D�";s:6:"method";s:9:"phpseclib";s:12:"key_provider";s:4:"file";}';
  $export['ses_cap_lite_clientid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_filter_format';
  $strongarm->value = 'content_editor_text_format';
  $export['ses_cap_lite_filter_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_mappings';
  $strongarm->value = array(
    'user' => array(
      'administrativeAppointments' => array(
        'select' => 'field_cap_admin_appointments',
        'weight' => '-10',
      ),
      'alias' => array(
        'select' => 'field_cap_profile_link',
        'weight' => '-9',
      ),
      'alternateContact' => array(
        'select' => '',
        'weight' => '-8',
      ),
      'alternateContactEmail' => array(
        'select' => 'field_cap_alternate_email',
        'weight' => '-7',
      ),
      'alternateContactLabel' => array(
        'select' => 'field_cap_alternate_label',
        'weight' => '-6',
      ),
      'alternateContactName' => array(
        'select' => 'field_cap_alternate_name',
        'weight' => '-5',
      ),
      'alternateContactPhone' => array(
        'select' => 'field_cap_alternate_phone',
        'weight' => '-4',
      ),
      'alternateContactTitle' => array(
        'select' => 'field_cap_alternate_title',
        'weight' => '-3',
      ),
      'bio' => array(
        'select' => 'field_cap_bio',
        'weight' => '-2',
      ),
      'communityAndInternationalWork' => array(
        'select' => 'field_cap_international',
        'weight' => '-1',
      ),
      'coursesTaught' => array(
        'select' => 'field_cap_courses_taught',
        'weight' => '0',
      ),
      'currentResearchInterestsFull' => array(
        'select' => 'field_cap_research',
        'weight' => '1',
      ),
      'currentResearchInterestsShort' => array(
        'select' => 'field_cap_research_short',
        'weight' => '2',
      ),
      'currentResearchInterestsTerse' => array(
        'select' => 'field_cap_research_terse',
        'weight' => '3',
      ),
      'currentRoleAtStanford' => array(
        'select' => 'field_cap_current_stanford_role',
        'weight' => '4',
      ),
      'displayName' => array(
        'select' => '',
        'weight' => '5',
      ),
      'education' => array(
        'select' => 'field_cap_education',
        'weight' => '6',
      ),
      'graduateAndFellowshipPrograms' => array(
        'select' => 'field_cap_grad_fellowship',
        'weight' => '7',
      ),
      'honorsAndAwards' => array(
        'select' => 'field_cap_honors_and_awards',
        'weight' => '8',
      ),
      'internetLinks' => array(
        'select' => 'field_cap_internet_links',
        'weight' => '9',
      ),
      'keywords' => array(
        'select' => 'field_cap_keywords',
        'weight' => '10',
      ),
      'longTitle' => array(
        'select' => '',
        'weight' => '11',
      ),
      'patents' => array(
        'select' => 'field_cap_patents',
        'weight' => '12',
      ),
      'personalInterests' => array(
        'select' => 'field_cap_personal_interests',
        'weight' => '13',
      ),
      'postdoctoralAdvisees' => array(
        'select' => 'field_cap_postdoc_advisees',
        'weight' => '14',
      ),
      'presentations' => array(
        'select' => 'field_cap_presentations',
        'weight' => '15',
      ),
      'primaryContact' => array(
        'select' => '',
        'weight' => '16',
      ),
      'primaryContactEmail' => array(
        'select' => '',
        'weight' => '17',
      ),
      'primaryContactName' => array(
        'select' => '',
        'weight' => '18',
      ),
      'primaryContactPhone' => array(
        'select' => '',
        'weight' => '19',
      ),
      'primaryContactTitle' => array(
        'select' => '',
        'weight' => '20',
      ),
      'professionalInterests' => array(
        'select' => 'field_cap_professional_interests',
        'weight' => '21',
      ),
      'professionalOrganizatons' => array(
        'select' => '',
        'weight' => '22',
      ),
      'profilePhotos' => array(
        'select' => 'field_cap_profile_image',
        'weight' => '23',
      ),
      'projects' => array(
        'select' => 'field_cap_projects',
        'weight' => '24',
      ),
      'publications' => array(
        'select' => 'field_cap_publications',
        'weight' => '25',
      ),
      'serviceWork' => array(
        'select' => 'field_cap_service_work',
        'weight' => '26',
      ),
      'shortTitle' => array(
        'select' => 'field_cap_short_title',
        'weight' => '27',
      ),
      'stanfordAdvisors' => array(
        'select' => 'field_cap_stanford_advisors',
        'weight' => '28',
      ),
      'uid' => array(
        'select' => 'field_cap_sunet_id',
        'weight' => '29',
      ),
      'workExperience' => array(
        'select' => 'field_cap_work_experience',
        'weight' => '30',
      ),
      'titles' => array(
        'select' => 'field_cap_academic_appointments',
        'weight' => '31',
      ),
      'profileId' => array(
        'select' => 'field_cap_profile_id',
        'weight' => '32',
      ),
      'professionalOrganizations' => array(
        'select' => 'field_cap_professional_orgs',
        'weight' => '33',
      ),
    ),
  );
  $export['ses_cap_lite_mappings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_next_cron';
  $strongarm->value = 1407022747;
  $export['ses_cap_lite_next_cron'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_password';
  $strongarm->value = 'a:3:{s:4:"text";s:32:"e��A�v��-�j����=��' . "\0" . '�����%�\'M";s:6:"method";s:9:"phpseclib";s:12:"key_provider";s:4:"file";}';
  $export['ses_cap_lite_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_token';
  $strongarm->value = 'a:3:{s:4:"text";s:816:"��եS��\\+�
����.E�`�1�-ux}ǩ�n��^��Fh)7��=k�wf�lY�+�µ� �I%�Yl�>' . "\0" . '���x��FM�{ǭ��5z�Ih:tj����
��zXQ�|�x� �zA�^�g�L�<�.!��\\C�1' . "\0" . '�n#����ᐔ�w��/��+j�2����fn�ȃAZ�rg�÷V_����0�����Q��ݼ� �J0�w^��s��#�C���Ϯ�{��iK=c����AV��ʣ쬡ҭs����	T����βxş�@�!�3l�|5U̾3d+���?���4����M��e���2�!�	B|I�K�`؝v�_�=zG@��G9���gQF����4�@��n���T� �' . "\0" . 'Ϡ�߰Q� ]G@Uw,XP�w��x\\qsW	�	o-�Fx�?jHM�4N�$�ϼ�OD�3^��%Ub�*�v>�^�Z����' . "\0" . '��q�!}T�b�X>�<&?5�e�Xt��$�E��DK.W��' . "\0" . '(�g6mW+��e-qy��ݯ�vB��^s?�x|�3]�FZ��e,��f_֍Q��kӯ�La�UD����z�#�=`TR�|(����ǯ"��3 i��q8QA�ઁ
2�y5�s6��-:�f?�;�<"9���P�7�eD@���c"3D3a�����ޫ�tG֯8skPf��<&:���X{��l������	V��W�	���_sdRi(Z����9Cn����st7��j�k#�{��Wx.�@��G5��h>�)��Bw�X��f�E+��\\�x_����W���M��ؓ��3P���y�~����";s:6:"method";s:9:"phpseclib";s:12:"key_provider";s:4:"file";}';
  $export['ses_cap_lite_token'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_token_expire';
  $strongarm->value = 1408825484;
  $export['ses_cap_lite_token_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_workgroups';
  $strongarm->value = 'earthsci:deans-office-staff
earthsci:ere-faculty-regular
earthsci:ere-faculty-emeritus
earthsci:ere-faculty-affiliated
earthsci:ges-faculty-regular
earthsci:ges-faculty-emeritus
earthsci:ges-faculty-affiliated
earthsci:eess-faculty-regular
earthsci:eess-faculty-emeritus
earthsci:eess-faculty-affiliated
earthsci:geophysics-faculty-regular
earthsci:geophysics-faculty-emeritus
earthsci:geophysics-faculty-affiliated
earthsci:eiper-faculty-regular
earthsci:eiper-faculty-emeritus
earthsci:eiper-faculty-affiliated
earthsci:esys-faculty-regular
earthsci:esys-faculty-emeritus
earthsci:esys-faculty-affiliated
earthsci:ere-postdocs
earthsci:ere-students-graduate
earthsci:ere-students-undergraduate
earthsci:ere-staff-research
earthsci:ere-staff-admin
earthsci:ges-postdocs
earthsci:ges-students-graduate
earthsci:ges-students-undergraduate
earthsci:ges-staff-research
earthsci:ges-staff-admin
earthsci:geophysics-postdocs
earthsci:geophysics-students-graduate
earthsci:geophysics-students-undergraduate
earthsci:geophysics-staff-research
earthsci:geophysics-staff-admin
earthsci:eess-postdocs
earthsci:eess-students-graduate
earthsci:eess-staff-research
earthsci:eess-staff-admin
earthsci:esys-postdocs
earthsci:esys-students-graduate
earthsci:esys-students-undergraduate
earthsci:esys-staff-teaching
earthsci:esys-staff-admin
earthsci:eiper-students-graduate
earthsci:eiper-staff-teaching
earthsci:eiper-staff-admin';
  $export['ses_cap_lite_workgroups'] = $strongarm;

  return $export;
}
