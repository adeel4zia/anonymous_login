<?php

/**
 * Admin settings form
 */
function anonymous_login_admin_settings($form, &$form_state) {
  $form['anonymous_login_paths'] = array(
    '#type' => 'textarea',
    '#title' => t('Page paths'),
    '#default_value' => config_get('anonymous_login.settings', 'anonymous_login_paths'),
    '#description' => t('Enter a list of page paths that will force anonymous users to login before viewing. After logging in, they will be redirected back to the requested page. Enter each path on a different line. Wildcards (*) can be used. Prefix a path with ~ (tilde) to exclude it from being redirected.'),
  );
  $form['anonymous_login_page_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Login page path'),
    '#default_value' => config_get('anonymous_login.settings', 'anonymous_login_page_path'),
    '#required' => TRUE,
    '#description' => t('Enter the user login page path of your site.'),
  );
  $form['anonymous_login_message'] = array(
    '#type' => 'textarea',
    '#title' => t('Login message'),
    '#default_value' => config_get('anonymous_login.settings', 'anonymous_login_message'),
    '#description' => t('Optionally provide a message that will be shown to users when they are redirected to login.'),
  );

  // Add a submit button
  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );
  return $form;
}

/**
 * Submit handler for module_settings_form().
 */
function anonymous_login_admin_settings_submit($form, &$form_state) {
  $config = config('anonymous_login.settings');
  $config->set('anonymous_login_paths', $form_state['values']['anonymous_login_paths']);
  $config->save();

  $config = config('anonymous_login.settings');
  $config->set('anonymous_login_page_path', $form_state['values']['anonymous_login_page_path']);
  $config->save();

  $config = config('anonymous_login.settings');
  $config->set('anonymous_login_message', $form_state['values']['anonymous_login_message']);
  $config->save();

  backdrop_set_message(t('The configuration options have been saved.'));
}

