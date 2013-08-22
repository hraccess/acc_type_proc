<?php
/**
 * @file
 * acc_type_proc.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function acc_type_proc_taxonomy_default_vocabularies() {
  return  array(
    /*'temporary_constraint_type' => array(
      'name' => 'Temporary constraint type',
      'machine_name' => 'acc_temporary_constraint_type',
      'description' => '',
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
    ),*/
  );
  
}
