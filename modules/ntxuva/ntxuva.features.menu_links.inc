<?php
/**
 * @file
 * ntxuva.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ntxuva_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_voip-call-log:admin/voip/call/log
  $menu_links['management_voip-call-log:admin/voip/call/log'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/voip/call/log',
    'router_path' => 'admin/voip/call/log',
    'link_title' => 'VoIP Call Log',
    'options' => array(
      'identifier' => 'management_voip-call-log:admin/voip/call/log',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_voip-drupal:admin/voip',
  );
  // Exported menu link: management_voip-drupal:admin/voip
  $menu_links['management_voip-drupal:admin/voip'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/voip',
    'router_path' => 'admin/voip',
    'link_title' => 'VoIP Drupal',
    'options' => array(
      'attributes' => array(
        'title' => 'Control how your site interacts with VoIP servers.',
      ),
      'identifier' => 'management_voip-drupal:admin/voip',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'management_configurao:admin/config',
  );
  // Exported menu link: management_voip-server-configuration:admin/voip/servers
  $menu_links['management_voip-server-configuration:admin/voip/servers'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/voip/servers',
    'router_path' => 'admin/voip/servers',
    'link_title' => 'VoIP server configuration',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure VoIP servers and choose the default server.',
      ),
      'identifier' => 'management_voip-server-configuration:admin/voip/servers',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_voip-drupal:admin/voip',
  );
  // Exported menu link: management_voip-session-log:admin/voip/session/log
  $menu_links['management_voip-session-log:admin/voip/session/log'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/voip/session/log',
    'router_path' => 'admin/voip/session/log',
    'link_title' => 'VoIP Session Log',
    'options' => array(
      'attributes' => array(
        'title' => 'Lists all VoIP Drupal sessions.',
      ),
      'identifier' => 'management_voip-session-log:admin/voip/session/log',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_voip-drupal:admin/voip',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('VoIP Call Log');
  t('VoIP Drupal');
  t('VoIP Session Log');
  t('VoIP server configuration');


  return $menu_links;
}
