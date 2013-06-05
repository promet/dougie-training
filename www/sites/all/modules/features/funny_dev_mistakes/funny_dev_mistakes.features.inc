<?php
/**
 * @file
 * funny_dev_mistakes.features.inc
 */

/**
 * Implements hook_views_api().
 */
function funny_dev_mistakes_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function funny_dev_mistakes_node_info() {
  $items = array(
    'funny_dev_mistakes' => array(
      'name' => t('Funny Dev Mistakes'),
      'base' => 'node_content',
      'description' => t('Used for humorous mistakes made by Promet developers, akin to a "Wall of Shame."'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
