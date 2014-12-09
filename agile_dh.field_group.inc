<?php
/**
 * @file
 * agile_dh.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function agile_dh_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collaboration|node|project|default';
  $field_group->group_name = 'group_collaboration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collaboration',
    'weight' => '7',
    'children' => array(
      0 => 'field_help_description',
      1 => 'field_contact_person',
      2 => 'field_type_help',
      3 => 'field_collaborators',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-collaboration field-group-fieldset',
      ),
    ),
  );
  $export['group_collaboration|node|project|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_collaboration|node|project|form';
  $field_group->group_name = 'group_collaboration';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Collaboration',
    'weight' => '6',
    'children' => array(
      0 => 'field_help_needed',
      1 => 'field_help_description',
      2 => 'field_contact_person',
      3 => 'field_type_help',
      4 => 'field_collaborators',
      5 => 'field_collaborator_list',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'classes' => ' group-collaboration field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_collaboration|node|project|form'] = $field_group;

  return $export;
}
