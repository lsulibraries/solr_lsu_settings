<?php
/**
 * @file
 * solr_lsu_settings.features.inc
 */

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function solr_lsu_settings_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'mods_titleInfo_title_ms',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  1 => array(
    'solr_field' => 'mods_titleInfo_title_ms',
    'field_type' => 'result_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  2 => array(
    'solr_field' => 'mods_name_personal_type_date_namePart_ms',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'mods_subject_topic_authority_loc_ms',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  4 => array(
    'solr_field' => 'mods_subject_topic_authority_loc_ms',
    'field_type' => 'result_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  5 => array(
    'solr_field' => 'mods_name_personal_namePart_mlt',
    'field_type' => 'result_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Contributor',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  6 => array(
    'solr_field' => 'mods_subject_topic_authority_loc_ms',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'mods_name_personal_creator_namePart_ms',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_physicalDescription_note_content_ms',
    'field_type' => 'sort_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Physical Description',
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'mods_originInfo_dateCreated_ms',
    'field_type' => 'result_fields',
    'weight' => 3,
    'solr_field_settings' => array(
      'label' => 'Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
);
}
