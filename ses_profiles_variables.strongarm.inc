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
  $strongarm->value = 'a:3:{s:4:"text";s:16:"\'c´qĞ¬Ö–¶ÑA´D³";s:6:"method";s:9:"phpseclib";s:12:"key_provider";s:4:"file";}';
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
  $strongarm->value = 'a:3:{s:4:"text";s:32:"eËÒAÔv×ç-ßj€¬ü=ùò' . "\0" . '•ó™¤Ôì%±\'M";s:6:"method";s:9:"phpseclib";s:12:"key_provider";s:4:"file";}';
  $export['ses_cap_lite_password'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ses_cap_lite_token';
  $strongarm->value = 'a:3:{s:4:"text";s:816:"ÈÖÕ¥S¡é\\+Ñ
óŒÌ–•.E‡`ù1Ş-ux}Ç©ÙnĞ°^íÉFh)7„¹=kŸwflYÁ+‘ÂµÀ õI%âYl >' . "\0" . 'ìäìxàóFMê„{Ç­€¿5zµIh:tj“ÈÀÄ
ˆ˜zXQ|x‰ özA„^…g…L–<ê·.!›–\\Có¢1' . "\0" . 'Ôn#š€»á”èw¸ï/÷Š+j2®ıœfnòÈƒAZßrg¡Ã·V_°°ó‚Õ0—ñÆñØQ£ıİ¼óª ¾J0ïw^—Ÿs‡#ÍCÅ˜…Ï®¾{™¨iK=c¾ŠùüAV“ÜÊ£ì¬¡Ò­s‰²¨’	T¤Á„”Î²xÅŸÖ@¹!¶3l­|5UÌ¾3d+†²¸?ø®4¶Š—ıMŒ’e‰¬ù2¢!È	B|I´K¥`Øv_=zG@ÙìG9™şÕgQF·°›û4é§@Šán™›ŞTÏ ±' . "\0" . 'Ï ¥ß°Q» ]G@Uw,XPwÜìx\\qsW	¸	o-ıFxà?jHMè°4N©$çÏ¼ODù3^†È%Ubû*v>®^ØZ´““ä' . "\0" . 'ã Öq¤!}TŞb¨X>ÿ<&?5ëe…Xtğ÷$‘EûÎDK.W˜ß' . "\0" . '(ìg6mW+®¸e-qy·Äİ¯ŸvBáªó^s?™x|²3]ËFZ¹Õe,¼f_ÖQ€ŠkÓ¯µLa­UDœ‹±’z°#ä=`TR­|(Ò—ˆò¬Ç¯"¬º3 iÇîq8QAàª
2íy5¼s6ã-:±f?Ô;ö<"9òÀP‘7ˆeD@äıËc"3D3a·¿²ù­Ş«¿tGÖ¯8skPf­<&:ÚËÇX{á¦l—¤õ„íº	Vï æWÃ	ƒ‚æ_sdRi(Zœ”ûÊ9Cn•Ùşíst7©ÅjÇk#Ö{°Wx.¯@‹±G5êìh>ë)“BwÌXãëfÉE+„¨\\Ûx_ó¸˜èë‹ã­W“íµMˆèØ“ĞÇ3P¯Äâyñ~‚Ûíö";s:6:"method";s:9:"phpseclib";s:12:"key_provider";s:4:"file";}';
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
