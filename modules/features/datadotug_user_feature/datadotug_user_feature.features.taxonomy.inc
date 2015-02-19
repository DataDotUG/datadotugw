<?php
/**
 * @file
 * datadotug_user_feature.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function datadotug_user_feature_taxonomy_default_vocabularies() {
  return array(
    'datadotug_circle_part' => array(
      'name' => 'Quadrants',
      'machine_name' => 'datadotug_circle_part',
      'description' => 'One of the four parts in the circle of Open Data',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
