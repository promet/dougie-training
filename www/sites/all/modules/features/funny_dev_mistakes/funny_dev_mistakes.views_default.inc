<?php
/**
 * @file
 * funny_dev_mistakes.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function funny_dev_mistakes_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'funny_dev_mistakes';
  $view->description = 'Aggregates funny developer mistakes nodes for various displays.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Funny Dev Mistakes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Funny Dev Mistakes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Screenshot */
  $handler->display->display_options['fields']['field_devmistakes_screenshot']['id'] = 'field_devmistakes_screenshot';
  $handler->display->display_options['fields']['field_devmistakes_screenshot']['table'] = 'field_data_field_devmistakes_screenshot';
  $handler->display->display_options['fields']['field_devmistakes_screenshot']['field'] = 'field_devmistakes_screenshot';
  $handler->display->display_options['fields']['field_devmistakes_screenshot']['label'] = '';
  $handler->display->display_options['fields']['field_devmistakes_screenshot']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_devmistakes_screenshot']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_devmistakes_screenshot']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_devmistakes_screenshot']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'funny_dev_mistakes' => 'funny_dev_mistakes',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'funny-dev-mistakes';
  $export['funny_dev_mistakes'] = $view;

  return $export;
}
