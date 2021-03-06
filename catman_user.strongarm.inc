<?php
/**
 * @file
 * catman_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function catman_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_addressbook';
  $strongarm->value = 1;
  $export['commerce_customer_profile_billing_addressbook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_billing_field';
  $strongarm->value = 'commerce_customer_billing';
  $export['commerce_customer_profile_billing_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_addressbook';
  $strongarm->value = 1;
  $export['commerce_customer_profile_shipping_addressbook'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_field';
  $strongarm->value = 'commerce_customer_shipping';
  $export['commerce_customer_profile_shipping_field'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy';
  $strongarm->value = 1;
  $export['commerce_customer_profile_shipping_profile_copy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy_default';
  $strongarm->value = 1;
  $export['commerce_customer_profile_shipping_profile_copy_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'commerce_customer_profile_shipping_profile_copy_source';
  $strongarm->value = 'billing';
  $export['commerce_customer_profile_shipping_profile_copy_source'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlmail_postfilter';
  $strongarm->value = 'commerce_order_message';
  $export['htmlmail_postfilter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlmail_test';
  $strongarm->value = array(
    'to' => 'mayjorb@onid.oregonstate.edu',
    'subject' => 'testing commerce mail filter - html mail system',
    'body' => array(
      'value' => '<p>Please find below the invoice related to your order [commerce-invoice:order:order-number] at [site:name].</p>

<p><strong>Invoice number</strong>: [commerce-invoice:invoice-number]</p>

<table>
  <tr>
    <td>[commerce-order:commerce_customer_billing]<td>
    <td>[commerce-order:commerce_customer_billing]<td>
  </tr>
</table>

<p>Misc tokens available</p>
<ul>
  <li>order status: [commerce-invoice:order:status]</li>
  <li>payment method: [commerce-invoice:order:payment-method-short-title]</li>
  <li>billing phone: [commerce-order:commerce-customer-billing:field_billing_phone] </li>
  <li>shipping phone: [commerce-order:commerce-customer-shipping:field_billing_phone] </li>
  <li>order email: [commerce-invoice:order:mail] </li>
  <li>order state: [commerce-invoice:order:state-title] </li>
  <li> </li>
</ul>
  
<p>[commerce-invoice:order:commerce-email-order-items]</p>

<p>You can view your invoices at any time by logging into our website at: [site:login-url]</p>

<p>You can find the current invoice at: [site:url]user/[commerce-invoice:uid]/invoices/[commerce-invoice:invoice-id]</p>

<p>Please contact us if you have any questions about your invoice.</p>',
      'format' => 'commerce_order_message',
    ),
  );
  $export['htmlmail_test'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'htmlmail_theme';
  $strongarm->value = '';
  $export['htmlmail_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mailsystem_theme';
  $strongarm->value = 'default';
  $export['mailsystem_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mail_system';
  $strongarm->value = array(
    'default-system' => 'MimeMailSystem',
    'mimemail' => 'HTMLMailSystem',
    'htmlmail' => 'MimeMailSystem',
  );
  $export['mail_system'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_pattern';
  $strongarm->value = 'users/[user:name]';
  $export['pathauto_user_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_email_verification';
  $strongarm->value = 0;
  $export['user_email_verification'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_body';
  $strongarm->value = '<p>We received a request to cancel your [site:name] account. NOTE: Cancellation of your account is not reversible.

<p>If you still want to cancel your account, click this link or copy and paste it into your browser:<br />
<div>[user:cancel-url]</div></p>

<p>This link expires in one day, and nothing will happen if it is not used.</p>

<p>Please contact us if you have questions. Thank you.</p>

<br />
<p><strong>Extension and Experiment Station Communications</strong><br />
Oregon State University<br />
422 Kerr Administration Bldg.<br />
Corvallis, OR 97331-2119<br />
Phone: 541-737-2513 or 800-561-6719<br />
Email: puborders@oregonstate.edu</p>';
  $export['user_mail_cancel_confirm_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_cancel_confirm_subject';
  $strongarm->value = 'Cancellation request for your [site:name] account';
  $export['user_mail_cancel_confirm_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_body';
  $strongarm->value = '<p>We received a request to reset the password for your [site:name] account. To reset your password, please click the following link or copy and paste it into your browser:<br />
<div>[user:one-time-login-url]</div>

<p>This link can only be used once. It expires after one day, and nothing will happen if it\'s not used.</p>

<p>Please contact us if you have questions. Thank you.</p>

<br />
<p><strong>Extension and Experiment Station Communications</strong><br />
Oregon State University<br />
422 Kerr Administration Bldg.<br />
Corvallis, OR 97331-2119<br />
Phone: 541-737-2513 or 800-561-6719<br />
Email: puborders@oregonstate.edu</p>
';
  $export['user_mail_password_reset_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_password_reset_subject';
  $strongarm->value = 'New password for your [site:name] account';
  $export['user_mail_password_reset_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_body';
  $strongarm->value = '<p>We created an [site:name] account for you. To confirm your email address and finish setting up your account, please click the following link or copy and paste it into your browser:<br />
[user:one-time-login-url]</p>

<p>This link can be used only once, and it will take you directly to a page where you can set your own password. After setting your password, you will be able to sign in at [site:login-url] in the future using:</p>
<div>email address: [user:mail]</div>
<div>password: The password you create</div>

<p>Please contact us if you have questions. Thank you.</p>

<br />
<p><strong>Extension and Experiment Station Communications</strong><br />
Oregon State University<br />
422 Kerr Administration Bldg.<br />
Corvallis, OR 97331-2119<br />
Phone: 541-737-2513 or 800-561-6719<br />
Email: puborders@oregonstate.edu</p>';
  $export['user_mail_register_admin_created_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_admin_created_subject';
  $strongarm->value = 'Your new [site:name] account';
  $export['user_mail_register_admin_created_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_body';
  $strongarm->value = '<p>Thank you for creating an [site:name] account. You can see your account details, order status, and order history at any time by signing into your [site:name] account at: [site:login-url]</p>

<p>If you requested an "OSU affiliate" or "Reseller" account type, we will verify your eligibility for the account type you selected and contact you if we have questions.</p>

<p>Please contact us if you have questions. Thank you.</p>

<br />
<p><strong>Extension and Experiment Station Communications</strong><br />
Oregon State University<br />
422 Kerr Administration Bldg.<br />
Corvallis, OR 97331-2119<br />
Phone: 541-737-2513 or 800-561-6719<br />
Email: puborders@oregonstate.edu</p>';
  $export['user_mail_register_no_approval_required_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_no_approval_required_subject';
  $strongarm->value = 'Your new [site:name] account';
  $export['user_mail_register_no_approval_required_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_body';
  $strongarm->value = 'WE ARE NOT CURRENTLY USING THIS MESSAGE BECAUSE ADMIN APPROVAL IS NOT REQUIRED FOR ACCOUNT CREATION.

IF WE DECIDE TO USE IT IN THE FUTURE, WE NEED TO REVIEW AND REVISE THE MESSAGE SUBJECT AND TEXT.

Thank you for registering at [site:name]. Your application for an account is currently pending approval. Once it has been approved, you will receive another e-mail containing information about how to log in, set your password, and other details.


--  [site:name] team';
  $export['user_mail_register_pending_approval_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_register_pending_approval_subject';
  $strongarm->value = 'NOT CURRENTLY USED  Account details for [user:name] at [site:name] (pending admin approval)';
  $export['user_mail_register_pending_approval_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_body';
  $strongarm->value = 'WE ARE NOT CURRENTLY USING THIS MESSAGE BECAUSE ADMIN APPROVAL IS NOT REQUIRED FOR ACCOUNT CREATION.

IF WE DECIDE TO USE IT IN THE FUTURE, WE NEED TO REVIEW AND REVISE THE MESSAGE SUBJECT AND TEXT.



Your account at [site:name] has been activated.

You may now log in by clicking this link or copying and pasting it into your browser:

[user:one-time-login-url]

This link can only be used once to log in and will lead you to a page where you can set your password.

After setting your password, you will be able to log in at [site:login-url] in the future using:

username: [user:name]
password: Your password

--  [site:name] team';
  $export['user_mail_status_activated_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_notify';
  $strongarm->value = 0;
  $export['user_mail_status_activated_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_activated_subject';
  $strongarm->value = 'NOT CURRENTLY USED  Account details for [user:name] at [site:name] (approved)';
  $export['user_mail_status_activated_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_body';
  $strongarm->value = '<p>Your [site:name] account has been blocked.</p>

<p>Please contact us if you have questions. Thank you.</p>

<br />
<p><strong>Extension and Experiment Station Communications</strong><br />
Oregon State University<br />
422 Kerr Administration Bldg.<br />
Corvallis, OR 97331-2119<br />
Phone: 541-737-2513 or 800-561-6719<br />
Email: puborders@oregonstate.edu</p>';
  $export['user_mail_status_blocked_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_notify';
  $strongarm->value = 0;
  $export['user_mail_status_blocked_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_blocked_subject';
  $strongarm->value = 'Account details for your [site:name] account (blocked)';
  $export['user_mail_status_blocked_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_body';
  $strongarm->value = '<p>Your [site:name] account has been canceled.</p>

<p>Please contact us if you have questions. Thank you.</p>

<br />
<p><strong>Extension and Experiment Station Communications</strong><br />
Oregon State University<br />
422 Kerr Administration Bldg.<br />
Corvallis, OR 97331-2119<br />
Phone: 541-737-2513 or 800-561-6719<br />
Email: puborders@oregonstate.edu</p>';
  $export['user_mail_status_canceled_body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_notify';
  $strongarm->value = 1;
  $export['user_mail_status_canceled_notify'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_mail_status_canceled_subject';
  $strongarm->value = 'Account details for your [site:name] account (canceled)';
  $export['user_mail_status_canceled_subject'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  return $export;
}
