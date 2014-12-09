<?php
/**
 * @file
 * agile_dh.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function agile_dh_taxonomy_default_vocabularies() {
  return array(
    'academic_field' => array(
      'name' => 'Academic field',
      'machine_name' => 'academic_field',
      'description' => 'What academic field(s) is it associated with?',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'affiliation' => array(
      'name' => 'Affiliation',
      'machine_name' => 'affiliation',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'help_type' => array(
      'name' => 'Help type',
      'machine_name' => 'help_type',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'tools_used' => array(
      'name' => 'Tools used',
      'machine_name' => 'tools_used',
      'description' => 'The tools, content and services used to create this project',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
