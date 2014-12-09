<?php
/**
 * @file
 * agile_dh.features.inc
 */

/**
 * Implements hook_node_info().
 */
function agile_dh_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Project name'),
      'help' => '',
    ),
  );
  return $items;
}
