<?php
/**
 * @file
 * dougie_config.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dougie_config_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'funny-dev-mistakes';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
