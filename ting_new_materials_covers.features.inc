<?php
/**
 * @file
 * ting_new_materials_covers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ting_new_materials_covers_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ting_new_materials_covers_node_info() {
  $items = array(
    'new_materials_covers' => array(
      'name' => t('New Materials Covers'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
