<?php
/**
 * @file
 * tubafeatures.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tubafeatures_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'primary_section';
  $context->description = 'Sektionen "Drikker de?"';
  $context->tag = 'section';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sektionen "Drikker de?"');
  t('section');
  $export['primary_section'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'secondary_section';
  $context->description = 'Sektionen "Vil du vide mere?"';
  $context->tag = 'section';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/58' => 'node/58',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sektionen "Vil du vide mere?"');
  t('section');
  $export['secondary_section'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'tertiary_section';
  $context->description = 'Sektionen "Vil du være med?"';
  $context->tag = 'section';
  $context->conditions = array(
    'menu' => array(
      'values' => array(
        'node/59' => 'node/59',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-formularer-block' => array(
          'module' => 'views',
          'delta' => 'formularer-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sektionen "Vil du være med?"');
  t('section');
  $export['tertiary_section'] = $context;

  return $export;
}
