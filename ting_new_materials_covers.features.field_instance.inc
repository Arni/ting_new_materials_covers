<?php
/**
 * @file
 * ting_new_materials_covers.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ting_new_materials_covers_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-new_materials_covers-field_new_covers_limit_period'
  $field_instances['node-new_materials_covers-field_new_covers_limit_period'] = array(
    'bundle' => 'new_materials_covers',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => 'Limits how the number of months worth of new materials there are shown. E.g. value of 3  means results from current month and the last three are shown. If left empty users can see all results of a query sorted newest first',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_new_covers_limit_period',
    'label' => 'Limit period',
    'required' => 0,
    'settings' => array(
      'max' => 12,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'node-new_materials_covers-field_new_covers_number_of_rows'
  $field_instances['node-new_materials_covers-field_new_covers_number_of_rows'] = array(
    'bundle' => 'new_materials_covers',
    'default_value' => array(
      0 => array(
        'value' => 3,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_new_covers_number_of_rows',
    'label' => 'Number of rows',
    'required' => 0,
    'settings' => array(
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'node-new_materials_covers-field_new_covers_search_query'
  $field_instances['node-new_materials_covers-field_new_covers_search_query'] = array(
    'bundle' => 'new_materials_covers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Search query used to get new materials.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser_highlight' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_new_covers_search_query',
    'label' => 'Search query',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Limit period');
  t('Limits how the number of months worth of new materials there are shown. E.g. value of 3  means results from current month and the last three are shown. If left empty users can see all results of a query sorted newest first');
  t('Number of rows');
  t('Search query');
  t('Search query used to get new materials.');

  return $field_instances;
}
