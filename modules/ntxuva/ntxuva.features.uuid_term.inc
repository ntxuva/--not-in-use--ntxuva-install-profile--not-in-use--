<?php
/**
 * @file
 * ntxuva.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function ntxuva_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Lixeira informal',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '10d3-15',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
    'field_category_hex' => array(
      'und' => array(
        0 => array(
          'value' => '000033',
          'format' => NULL,
          'safe_value' => '000033',
        ),
      ),
    ),
    'field_category_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'spam',
          'format' => NULL,
          'safe_value' => 'spam',
        ),
      ),
    ),
    'field_category_id' => array(
      'und' => array(
        0 => array(
          'value' => '01205',
          'format' => NULL,
          'safe_value' => '01205',
        ),
      ),
    ),
    'field_hash' => array(),
    'field_tags' => array(),
  );
  $terms[] = array(
    'name' => 'Em progresso',
    'description' => 'Categorai para os casos que aguardam resolução',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '1273-1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'status',
    'field_status_hex' => array(
      'und' => array(
        0 => array(
          'value' => 'ff6600',
          'format' => NULL,
          'safe_value' => 'ff6600',
        ),
      ),
    ),
    'field_status_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'play',
          'format' => NULL,
          'safe_value' => 'play',
        ),
      ),
    ),
    'field_status_id' => array(),
  );
  $terms[] = array(
    'name' => 'Contentor a Arder',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '86c0-10',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
    'field_category_hex' => array(
      'und' => array(
        0 => array(
          'value' => '000044',
          'format' => NULL,
          'safe_value' => '000044',
        ),
      ),
    ),
    'field_category_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'fire',
          'format' => NULL,
          'safe_value' => 'fire',
        ),
      ),
    ),
    'field_category_id' => array(
      'und' => array(
        0 => array(
          'value' => '01201',
          'format' => NULL,
          'safe_value' => '01201',
        ),
      ),
    ),
    'field_hash' => array(),
    'field_tags' => array(),
  );
  $terms[] = array(
    'name' => 'Arquivados',
    'description' => 'Categoria para casos arquivados',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '902d-1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'status',
    'field_status_hex' => array(
      'und' => array(
        0 => array(
          'value' => '5F9EA0',
          'format' => NULL,
          'safe_value' => '5F9EA0',
        ),
      ),
    ),
    'field_status_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'drawer',
          'format' => NULL,
          'safe_value' => 'drawer',
        ),
      ),
    ),
    'field_status_id' => array(),
  );
  $terms[] = array(
    'name' => 'Lixo espalhado no chão',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '993f-10',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
    'field_category_hex' => array(
      'und' => array(
        0 => array(
          'value' => '000022',
          'format' => NULL,
          'safe_value' => '000022',
        ),
      ),
    ),
    'field_category_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'bug',
          'format' => NULL,
          'safe_value' => 'bug',
        ),
      ),
    ),
    'field_category_id' => array(
      'und' => array(
        0 => array(
          'value' => '01203',
          'format' => NULL,
          'safe_value' => '01203',
        ),
      ),
    ),
    'field_hash' => array(),
    'field_tags' => array(),
  );
  $terms[] = array(
    'name' => 'Lixo não recolhido',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'ab5f-10',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
    'field_category_hex' => array(
      'und' => array(
        0 => array(
          'value' => '000055',
          'format' => NULL,
          'safe_value' => '000055',
        ),
      ),
    ),
    'field_category_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'truck',
          'format' => NULL,
          'safe_value' => 'truck',
        ),
      ),
    ),
    'field_category_id' => array(
      'und' => array(
        0 => array(
          'value' => '01204',
          'format' => NULL,
          'safe_value' => '01204',
        ),
      ),
    ),
    'field_hash' => array(),
    'field_tags' => array(),
  );
  $terms[] = array(
    'name' => 'Contentor não recolhido',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b11c-10',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'category',
    'field_category_hex' => array(
      'und' => array(
        0 => array(
          'value' => '000111',
          'format' => NULL,
          'safe_value' => '000111',
        ),
      ),
    ),
    'field_category_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'remove',
          'format' => NULL,
          'safe_value' => 'remove',
        ),
      ),
    ),
    'field_category_id' => array(
      'und' => array(
        0 => array(
          'value' => '01202',
          'format' => NULL,
          'safe_value' => '01202',
        ),
      ),
    ),
    'field_hash' => array(),
    'field_tags' => array(),
  );
  $terms[] = array(
    'name' => 'Resolvidos',
    'description' => 'Categoria para casos resolvidos',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'dede-1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'status',
    'field_status_hex' => array(
      'und' => array(
        0 => array(
          'value' => '8fe83b',
          'format' => NULL,
          'safe_value' => '8fe83b',
        ),
      ),
    ),
    'field_status_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'checkmark',
          'format' => NULL,
          'safe_value' => 'checkmark',
        ),
      ),
    ),
    'field_status_id' => array(),
  );
  $terms[] = array(
    'name' => 'Novos',
    'description' => 'Categoria para novos casos',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ee3d-1',
    'language' => 'und',
    'i18n_tsid' => 0,
    'vocabulary_machine_name' => 'status',
    'field_status_hex' => array(
      'und' => array(
        0 => array(
          'value' => 'cc0000',
          'format' => NULL,
          'safe_value' => 'cc0000',
        ),
      ),
    ),
    'field_status_icon' => array(
      'und' => array(
        0 => array(
          'value' => 'pause',
          'format' => NULL,
          'safe_value' => 'pause',
        ),
      ),
    ),
    'field_status_id' => array(),
  );
  return $terms;
}
