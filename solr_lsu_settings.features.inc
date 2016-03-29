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
    'field_type' => 'result_fields',
    'weight' => -10,
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
  1 => array(
    'solr_field' => 'mods_subject_topic_authority_loc_ms',
    'field_type' => 'facet_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => 'Subject',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  2 => array(
    'solr_field' => 'mods_name_namePart_ms',
    'field_type' => 'facet_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Creator',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  3 => array(
    'solr_field' => 'mods_subject_topic_authority_loc_ms',
    'field_type' => 'result_fields',
    'weight' => -9,
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
  4 => array(
    'solr_field' => 'mods_subject_topic_authority_loc_mlt',
    'field_type' => 'sort_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => 'Subject_mlt',
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  5 => array(
    'solr_field' => 'mods_originInfo_dateCreated_ms',
    'field_type' => 'result_fields',
    'weight' => -8,
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
  6 => array(
    'solr_field' => 'mods_name_personal_namePart_mlt',
    'field_type' => 'sort_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Contributor_mlt',
      'permissions' => array(
        3 => 3,
        4 => 4,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'mods_physicalDescription_form_ms',
    'field_type' => 'facet_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Form (Physical)',
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'mods_name_personal_namePart_mlt',
    'field_type' => 'result_fields',
    'weight' => -7,
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
  9 => array(
    'solr_field' => 'mods_originInfo_dateCreated_mdt',
    'field_type' => 'facet_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Date_mdt',
      'range_facet_select' => 1,
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'date_facet_format' => 'YFj',
      'range_facet_slider_color' => '#edc240',
      'date_filter_datepicker_enabled' => 1,
      'date_filter_datepicker_range' => '-100:+3',
      'range_facet_variable_gap' => NULL,
      'range_facet_slider_enabled' => NULL,
      'pid_object_label' => NULL,
      'permissions' => array(
        3 => 3,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'search_fields',
    'weight' => 0,
    'solr_field_settings' => array(),
  ),
  11 => array(
    'solr_field' => 'dc.subject',
    'field_type' => 'search_fields',
    'weight' => 1,
    'solr_field_settings' => array(),
  ),
  12 => array(
    'solr_field' => 'dc.contributor',
    'field_type' => 'search_fields',
    'weight' => 2,
    'solr_field_settings' => array(),
  ),
  13 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => 4,
    'solr_field_settings' => array(),
  ),
  14 => array(
    'solr_field' => 'dc.description',
    'field_type' => 'result_fields',
    'weight' => 5,
    'solr_field_settings' => array(
      'label' => '',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 90,
      'add_ellipsis' => 1,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  15 => array(
    'solr_field' => 'mods_originInfo_dateCreated_mdt',
    'field_type' => 'result_fields',
    'weight' => 6,
    'solr_field_settings' => array(
      'label' => '_mdt',
      'snippet' => NULL,
      'date_format' => 'Y F j',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
);
}
