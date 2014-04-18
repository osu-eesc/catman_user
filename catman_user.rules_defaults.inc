<?php
/**
 * @file
 * catman_user.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function catman_user_default_rules_configuration() {
  $items = array();
  $items['rules_send_email_to_eesc_when_new_account_is_created'] = entity_import('rules_config', '{ "rules_send_email_to_eesc_when_new_account_is_created" : {
      "LABEL" : "Send email to EESC when new account is created",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "catman" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "user_insert" : [] },
      "DO" : [
        { "mail" : {
            "to" : "jennifer.alexander@oregonstate.edu, bryan.mayjor@oregonstate.edu",
            "subject" : "New [site:name] account created",
            "message" : "\\u003Cp\\u003EA new [site:name] account was created for [account:mail]\\u003C\\/p\\u003E\\r\\n\\u003Cp\\u003ERequested account type: \\u003Cstrong\\u003E[account:field-requested-account-type]\\u003C\\/strong\\u003E\\u003C\\/p\\u003E\\r\\n\\r\\n\\u003Cp\\u003EPlease log into CatMan and confirm that the user is eligible for the account type selected.\\u003Cbr \\/\\u003E\\r\\n[account:url]\\u003C\\/p\\u003E\\r\\n",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
