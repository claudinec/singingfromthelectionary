<?php
/**
 * @file
 * lectionary_core.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function lectionary_core_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'lectionary_front_page';
  $view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lectionary front page';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Relationship: Entityqueue: Node Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Lectionary Queue';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'front_page' => 'front_page',
    'lectionary_index' => 0,
  );
  /* Sort criterion: Entityqueue: Node Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Entityqueue: Node In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'frontpage';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front page feed';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'rss.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $handler->display->display_options['sitename_title'] = '1';
  $export['lectionary_front_page'] = $view;

  $view = new view();
  $view->name = 'lectionary_index';
  $view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Lectionary Index';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lectionary Index';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entityqueue: Node Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Lectionary Queue';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'lectionary_index' => 'lectionary_index',
    'front_page' => 0,
    'other_occasions' => 0,
  );
  /* Relationship: Content: Song scripture references (field_song_scripture_references) */
  $handler->display->display_options['relationships']['field_song_scripture_references_tid']['id'] = 'field_song_scripture_references_tid';
  $handler->display->display_options['relationships']['field_song_scripture_references_tid']['table'] = 'field_data_field_song_scripture_references';
  $handler->display->display_options['relationships']['field_song_scripture_references_tid']['field'] = 'field_song_scripture_references_tid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Entityqueue: Node Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Entityqueue: Node In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'lectionary-index';
  $export['lectionary_index'] = $view;

  $view = new view();
  $view->name = 'other_occasions';
  $view->description = 'Emulates the default Drupal front page; you may set the default home page path to this view to make it your front page.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Other Occasions';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Other Occasions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entityqueue: Node Queue */
  $handler->display->display_options['relationships']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['relationships']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['relationships']['entityqueue_relationship']['label'] = 'Lectionary Queue';
  $handler->display->display_options['relationships']['entityqueue_relationship']['required'] = TRUE;
  $handler->display->display_options['relationships']['entityqueue_relationship']['limit'] = 1;
  $handler->display->display_options['relationships']['entityqueue_relationship']['queues'] = array(
    'other_occasions' => 'other_occasions',
    'front_page' => 0,
    'lectionary_index' => 0,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Entityqueue: Node Queue Position */
  $handler->display->display_options['sorts']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['sorts']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['sorts']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Entityqueue: Node In Queue */
  $handler->display->display_options['filters']['entityqueue_relationship']['id'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['table'] = 'node';
  $handler->display->display_options['filters']['entityqueue_relationship']['field'] = 'entityqueue_relationship';
  $handler->display->display_options['filters']['entityqueue_relationship']['value'] = '1';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'other-occasions';
  $export['other_occasions'] = $view;

  $view = new view();
  $view->name = 'scripture_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Scripture Index';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Scripture Index';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_scripture_ref_book' => 'field_scripture_ref_book',
    'field_scripture_ref_num' => 'field_scripture_ref_num',
  );
  /* Relationship: Content: Lectionary section (field_lectionary_section) */
  $handler->display->display_options['relationships']['field_lectionary_section_value']['id'] = 'field_lectionary_section_value';
  $handler->display->display_options['relationships']['field_lectionary_section_value']['table'] = 'field_data_field_lectionary_section';
  $handler->display->display_options['relationships']['field_lectionary_section_value']['field'] = 'field_lectionary_section_value';
  $handler->display->display_options['relationships']['field_lectionary_section_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_lectionary_section_value']['delta'] = '0';
  /* Field: Field collection item: Scripture ref book */
  $handler->display->display_options['fields']['field_scripture_ref_book']['id'] = 'field_scripture_ref_book';
  $handler->display->display_options['fields']['field_scripture_ref_book']['table'] = 'field_data_field_scripture_ref_book';
  $handler->display->display_options['fields']['field_scripture_ref_book']['field'] = 'field_scripture_ref_book';
  $handler->display->display_options['fields']['field_scripture_ref_book']['relationship'] = 'field_lectionary_section_value';
  $handler->display->display_options['fields']['field_scripture_ref_book']['label'] = '';
  $handler->display->display_options['fields']['field_scripture_ref_book']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scripture_ref_book']['hide_empty'] = TRUE;
  /* Field: Field collection item: Scripture ref num */
  $handler->display->display_options['fields']['field_scripture_ref_num']['id'] = 'field_scripture_ref_num';
  $handler->display->display_options['fields']['field_scripture_ref_num']['table'] = 'field_data_field_scripture_ref_num';
  $handler->display->display_options['fields']['field_scripture_ref_num']['field'] = 'field_scripture_ref_num';
  $handler->display->display_options['fields']['field_scripture_ref_num']['relationship'] = 'field_lectionary_section_value';
  $handler->display->display_options['fields']['field_scripture_ref_num']['label'] = '';
  $handler->display->display_options['fields']['field_scripture_ref_num']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scripture_ref_num']['hide_empty'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Scripture ref book (field_scripture_ref_book) */
  $handler->display->display_options['sorts']['field_scripture_ref_book_value']['id'] = 'field_scripture_ref_book_value';
  $handler->display->display_options['sorts']['field_scripture_ref_book_value']['table'] = 'field_data_field_scripture_ref_book';
  $handler->display->display_options['sorts']['field_scripture_ref_book_value']['field'] = 'field_scripture_ref_book_value';
  $handler->display->display_options['sorts']['field_scripture_ref_book_value']['relationship'] = 'field_lectionary_section_value';
  /* Sort criterion: Field collection item: Scripture ref num (field_scripture_ref_num) */
  $handler->display->display_options['sorts']['field_scripture_ref_num_value']['id'] = 'field_scripture_ref_num_value';
  $handler->display->display_options['sorts']['field_scripture_ref_num_value']['table'] = 'field_data_field_scripture_ref_num';
  $handler->display->display_options['sorts']['field_scripture_ref_num_value']['field'] = 'field_scripture_ref_num_value';
  $handler->display->display_options['sorts']['field_scripture_ref_num_value']['relationship'] = 'field_lectionary_section_value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'article' => 'article',
  );
  /* Filter criterion: Field collection item: Scripture ref book (field_scripture_ref_book) */
  $handler->display->display_options['filters']['field_scripture_ref_book_value']['id'] = 'field_scripture_ref_book_value';
  $handler->display->display_options['filters']['field_scripture_ref_book_value']['table'] = 'field_data_field_scripture_ref_book';
  $handler->display->display_options['filters']['field_scripture_ref_book_value']['field'] = 'field_scripture_ref_book_value';
  $handler->display->display_options['filters']['field_scripture_ref_book_value']['relationship'] = 'field_lectionary_section_value';
  $handler->display->display_options['filters']['field_scripture_ref_book_value']['operator'] = 'not empty';
  /* Filter criterion: Field collection item: Scripture ref num (field_scripture_ref_num) */
  $handler->display->display_options['filters']['field_scripture_ref_num_value']['id'] = 'field_scripture_ref_num_value';
  $handler->display->display_options['filters']['field_scripture_ref_num_value']['table'] = 'field_data_field_scripture_ref_num';
  $handler->display->display_options['filters']['field_scripture_ref_num_value']['field'] = 'field_scripture_ref_num_value';
  $handler->display->display_options['filters']['field_scripture_ref_num_value']['relationship'] = 'field_lectionary_section_value';
  $handler->display->display_options['filters']['field_scripture_ref_num_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'scripture-index';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Scripture Index';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-indexes';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['scripture_index'] = $view;

  return $export;
}
