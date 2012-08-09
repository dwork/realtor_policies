<?php
/**
 * @file
 * realtor_policies.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function realtor_policies_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/3
  $menu_links['main-menu:node/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/agency_disclosure',
    'router_path' => 'node/%',
    'link_title' => 'Disclosure',
    'options' => array(
      'attributes' => array(
        'title' => 'Agency Disclosure',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: main-menu:node/5
  $menu_links['main-menu:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/contact_us',
    'router_path' => 'node/%',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => 'General contact form',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/privacy_policy',
    'router_path' => 'node/%',
    'link_title' => 'Privacy Policy',
    'options' => array(
      'attributes' => array(
        'title' => 'Privacy Policy and use of cookies',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:node/6
  $menu_links['main-menu:node/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/relocation',
    'router_path' => 'node/%',
    'link_title' => 'Relocation',
    'options' => array(
      'attributes' => array(
        'title' => 'Relocation form',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');
  t('Disclosure');
  t('Home');
  t('Privacy Policy');
  t('Relocation');


  return $menu_links;
}
