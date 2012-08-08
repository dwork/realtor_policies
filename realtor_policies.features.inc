<?php
/**
 * @file
 * realtor_policies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function realtor_policies_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function realtor_policies_node_info() {
  $items = array(
    'static_page' => array(
      'name' => t('Static Page'),
      'base' => 'node_content',
      'description' => t('Static pages, initially loaded using the "realtor_policies" feature'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
