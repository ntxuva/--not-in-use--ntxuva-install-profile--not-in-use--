<?php
/**
 * @file
 * ntxuva.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ntxuva_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'processos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Processos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Processos';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mais';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascendente';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descendente';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Itens por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Deslocamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primeira';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguinte ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type_1' => 'type_1',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Conteúdo: Título */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Campo: Conteúdo: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Categoria';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Campo: Conteúdo: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Estado';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_link';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Campo: Conteúdo: Data do artigo */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'Africa/Maputo';
  /* Campo: Conteúdo: Data de atualização */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['timezone'] = 'Africa/Maputo';
  /* Critérios de filtragem: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'report' => 'report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critérios de filtragem: Conteúdo: Address (field_address) */
  $handler->display->display_options['filters']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_value']['group'] = 1;
  $handler->display->display_options['filters']['field_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_value']['expose']['operator_id'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['label'] = 'Pesquisar local';
  $handler->display->display_options['filters']['field_address_value']['expose']['operator'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['identifier'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_address_value']['group_info']['label'] = 'Endereço';
  $handler->display->display_options['filters']['field_address_value']['group_info']['identifier'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_address_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Critérios de filtragem: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critérios de filtragem: Conteúdo: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Tipo de processo';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Critérios de filtragem: Conteúdo: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Estado do processo';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['group_info']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_tid']['group_info']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_status_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Cabeçalho: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These charts are created using Views. This example may be edited through the Views UI.';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['path'] = 'processos';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Views example';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['processos'] = array(
    t('Master'),
    t('Processos'),
    t('mais'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Ascendente'),
    t('Descendente'),
    t('Itens por página'),
    t('- Todos -'),
    t('Deslocamento'),
    t('« primeira'),
    t('‹ anterior'),
    t('seguinte ›'),
    t('última »'),
    t('Título'),
    t('Categoria'),
    t('Estado'),
    t('Data do artigo'),
    t('Data de atualização'),
    t('Pesquisar local'),
    t('Endereço'),
    t('Tipo de processo'),
    t('Estado do processo'),
    t('Status (field_status)'),
    t('Page'),
    t('These charts are created using Views. This example may be edited through the Views UI.'),
  );
  $export['processos'] = $view;

  $view = new view();
  $view->name = 'report_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Report Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Chart Examples';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mais';
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascendente';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descendente';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Itens por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todos -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Deslocamento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primeira';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'seguinte ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type_1' => 'type_1',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Campo: Conteúdo: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Categoria';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Campo: COUNT(Conteúdo: Category) */
  $handler->display->display_options['fields']['field_category_1']['id'] = 'field_category_1';
  $handler->display->display_options['fields']['field_category_1']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category_1']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_category_1']['label'] = 'Quantidade';
  $handler->display->display_options['fields']['field_category_1']['separator'] = ', ';
  /* Campo: Conteúdo: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Estado';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Campo: COUNT(Conteúdo: Status) */
  $handler->display->display_options['fields']['field_status_1']['id'] = 'field_status_1';
  $handler->display->display_options['fields']['field_status_1']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status_1']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_status_1']['label'] = 'Quantidade';
  $handler->display->display_options['fields']['field_status_1']['separator'] = ', ';
  /* Campo: Conteúdo: Data do artigo */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['timezone'] = 'Africa/Maputo';
  /* Campo: Conteúdo: Data de atualização */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['timezone'] = 'Africa/Maputo';
  /* Critérios de filtragem: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'report' => 'report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critérios de filtragem: Conteúdo: Address (field_address) */
  $handler->display->display_options['filters']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_value']['group'] = 1;
  $handler->display->display_options['filters']['field_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_value']['expose']['operator_id'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['label'] = 'Endereço';
  $handler->display->display_options['filters']['field_address_value']['expose']['operator'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['identifier'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_address_value']['group_info']['label'] = 'Endereço';
  $handler->display->display_options['filters']['field_address_value']['group_info']['identifier'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_address_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Critérios de filtragem: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critérios de filtragem: Conteúdo: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Category (field_category)';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Critérios de filtragem: Conteúdo: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['group_info']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_tid']['group_info']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_status_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Processos';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Cabeçalho: Global: Área de texto */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'These charts are created using Views. This example may be edited through the Views UI.';
  $handler->display->display_options['header']['area']['format'] = '2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critérios de filtragem: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'report' => 'report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critérios de filtragem: Conteúdo: Address (field_address) */
  $handler->display->display_options['filters']['field_address_value']['id'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['table'] = 'field_data_field_address';
  $handler->display->display_options['filters']['field_address_value']['field'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_address_value']['group'] = 1;
  $handler->display->display_options['filters']['field_address_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_address_value']['expose']['operator_id'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['label'] = 'Endereço';
  $handler->display->display_options['filters']['field_address_value']['expose']['operator'] = 'field_address_value_op';
  $handler->display->display_options['filters']['field_address_value']['expose']['identifier'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_address_value']['group_info']['label'] = 'Endereço';
  $handler->display->display_options['filters']['field_address_value']['group_info']['identifier'] = 'field_address_value';
  $handler->display->display_options['filters']['field_address_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_address_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Critérios de filtragem: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critérios de filtragem: Conteúdo: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Categoria do processo';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  /* Critérios de filtragem: Conteúdo: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Estado do processo';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['group_info']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_tid']['group_info']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_status_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;
  $handler->display->display_options['path'] = 'report-stats';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Views example';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Estado de reports */
  $handler = $view->new_display('attachment', 'Estado de reports', 'column');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pie Chart';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_status';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'type' => 'type',
    'field_category' => 0,
    'field_status' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_category' => '#8bbc21',
    'field_status' => '#1aadce',
    'type' => '#8bbc21',
  );
  $handler->display->display_options['style_options']['title'] = 'Title text';
  $handler->display->display_options['style_options']['title_position'] = '';
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_title'] = 'Node type';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '30';
  $handler->display->display_options['style_options']['yaxis_title'] = 'Number of nodes';
  $handler->display->display_options['style_options']['yaxis_min'] = '0';
  $handler->display->display_options['style_options']['yaxis_prefix'] = '$';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '30';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['label'] = 'Estado';
  $handler->display->display_options['fields']['field_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_status']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Campo: COUNT(Conteúdo: Tipo) */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['group_type'] = 'count';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critérios de filtragem: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'report' => 'report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critérios de filtragem: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critérios de filtragem: Conteúdo: Status (field_status) */
  $handler->display->display_options['filters']['field_status_tid']['id'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_tid']['field'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator_id'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_tid']['expose']['operator'] = 'field_status_tid_op';
  $handler->display->display_options['filters']['field_status_tid']['expose']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_status_tid']['group_info']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_tid']['group_info']['identifier'] = 'field_status_tid';
  $handler->display->display_options['filters']['field_status_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_status_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_status_tid']['vocabulary'] = 'status';
  $handler->display->display_options['filters']['field_status_tid']['hierarchy'] = 1;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );

  /* Display: Categorias de report */
  $handler = $view->new_display('attachment', 'Categorias de report', 'pie');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pie Chart';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['library'] = '';
  $handler->display->display_options['style_options']['label_field'] = 'field_category';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'field_category' => 'field_category',
    'type' => 'type',
    'field_status' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'field_category' => '#8bbc21',
    'field_status' => '#1aadce',
    'type' => '#8bbc21',
  );
  $handler->display->display_options['style_options']['width'] = '';
  $handler->display->display_options['style_options']['height'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '0';
  $handler->display->display_options['style_options']['yaxis_labels_rotation'] = '0';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Conteúdo: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['label'] = 'Categoria';
  $handler->display->display_options['fields']['field_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_category']['settings'] = array(
    'field_formatter_class' => '',
  );
  /* Campo: COUNT(Conteúdo: Tipo) */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['group_type'] = 'count';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critérios de filtragem: Conteúdo: Tipo */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'report' => 'report',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critérios de filtragem: Conteúdo: Publicado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critérios de filtragem: Conteúdo: Category (field_category) */
  $handler->display->display_options['filters']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['filters']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator_id'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['label'] = 'Category (field_category)';
  $handler->display->display_options['filters']['field_category_tid']['expose']['operator'] = 'field_category_tid_op';
  $handler->display->display_options['filters']['field_category_tid']['expose']['identifier'] = 'field_category_tid';
  $handler->display->display_options['filters']['field_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_category_tid']['vocabulary'] = 'category';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $translatables['report_stats'] = array(
    t('Master'),
    t('Chart Examples'),
    t('mais'),
    t('Aplicar'),
    t('Reiniciar'),
    t('Ordenar por'),
    t('Ascendente'),
    t('Descendente'),
    t('Itens por página'),
    t('- Todos -'),
    t('Deslocamento'),
    t('« primeira'),
    t('‹ anterior'),
    t('seguinte ›'),
    t('última »'),
    t('Categoria'),
    t('Quantidade'),
    t('Estado'),
    t('Data do artigo'),
    t('Data de atualização'),
    t('Endereço'),
    t('Category (field_category)'),
    t('Status (field_status)'),
    t('Page'),
    t('Processos'),
    t('These charts are created using Views. This example may be edited through the Views UI.'),
    t('Categoria do processo'),
    t('Estado do processo'),
    t('Estado de reports'),
    t('Pie Chart'),
    t('Tipo'),
    t('Categorias de report'),
  );
  $export['report_stats'] = $view;

  return $export;
}
