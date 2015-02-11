<?php
/**
 * @file
 * ting_new_materials_covers.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ting_new_materials_covers_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_ting_new_materials_covers';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -24;
  $handler->conf = array(
    'title' => 'New Materials Covers',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'new_materials_covers' => 'new_materials_covers',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = '25_50_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left_sidebar' => NULL,
      'main_content' => NULL,
      'right_sidebar' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '104bbfff-9e73-4290-a110-43ad9bfb4371';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9995d004-725b-4fb0-96da-d1c4b2188cc4';
    $pane->panel = 'left_sidebar';
    $pane->type = 'block';
    $pane->subtype = 'menu_block-3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9995d004-725b-4fb0-96da-d1c4b2188cc4';
    $display->content['new-9995d004-725b-4fb0-96da-d1c4b2188cc4'] = $pane;
    $display->panels['left_sidebar'][0] = 'new-9995d004-725b-4fb0-96da-d1c4b2188cc4';
    $pane = new stdClass();
    $pane->pid = 'new-209f6885-dcac-496b-9e64-81aaac798c4d';
    $pane->panel = 'main_content';
    $pane->type = 'new_materials_covers';
    $pane->subtype = 'new_materials_covers';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '209f6885-dcac-496b-9e64-81aaac798c4d';
    $display->content['new-209f6885-dcac-496b-9e64-81aaac798c4d'] = $pane;
    $display->panels['main_content'][0] = 'new-209f6885-dcac-496b-9e64-81aaac798c4d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_ting_new_materials_covers'] = $handler;

  return $export;
}
