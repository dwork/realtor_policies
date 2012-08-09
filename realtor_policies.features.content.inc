<?php
/**
 * @file
 * realtor_policies.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function realtor_policies_content_defaults() {
  $content = array();

  $content['agency_disclosure'] = (object) array(
    'exported_path' => 'content/agency-disclosure',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/agency_disclosure',
      'router_path' => 'node/%',
      'link_title' => 'Disclosure',
      'options' => array(
        'attributes' => array(
          'title' => 'Agency Disclosure',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-48',
      'identifier' => 'main-menu:node-name/agency_disclosure',
    ),
    'title' => 'Agency Disclosure',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1344412048',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'agency_disclosure',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p><font face="Times, Times Roman, serif"><b>DISCLOSURE PAMPHLET</b> </font></p>
<p><font face="Times, Times Roman, serif">(OAR 863-015-215(4)) </font></p>
<p><font face="Times, Times Roman, serif"><i>This pamphlet describes agency relationships and the duties and responsibilities of real estate licensees in Oregon. This pamphlet is informational only and neither the pamphlet nor its delivery to you may be construed to be evidence of intent to create an agency relationship. </i></font></p>
<p><font face="Times, Times Roman, serif"><b>Real Estate Agency Relationships</b><br />
	An &quot;agency&quot; relationship is a voluntary legal relationship in which a real estate licensee (the &quot;agent&quot;) agrees to act on behalf of a buyer or a seller (the &quot;client&quot;) in a real estate transaction. Oregon law provides for three types of agency relationships between real estate agents and their clients: </font></p>
<p class="rteindent1"><font face="Times, Times Roman, serif"><strong>Seller&#39;s Agent</strong> -- Represents the seller only;&nbsp;</font><br />
	<span style="font-family:arial,helvetica,sans-serif;"><strong>Buyer&#39;s Agent</strong> -- Represents the buyer only;<br />
	<b>Disclosed Limited Agent</b> -- Represents both the buyer and seller, or multiple buyers who want to purchase the same property. This can be done only with the written permission of both clients.</span></p>
<p><i>The actual agency relationships between the seller, buyer and their agents in a real estate transaction must be acknowledged at the time an offer to purchase is made. Please read this pamphlet carefully before entering into an agency relationship with a real estate agent. </i></p>
<p><b>Duties and Responsibilities of an Agent Who Represents Only the Seller or Only the Buyer</b><br />
	Under a written listing agreement to sell property, an agent represents only the seller unless the seller agrees in writing to allow the agent to also represent the buyer. An agent who agrees to represent a buyer acts only as the buyer&#39;s agent unless the buyer agrees in writing to allow the agent to also represent the seller. An agent who represents only the seller or only the buyer owes the following affirmative duties to their client, other parties and their agents involved in a real estate transaction:</p>
<ol>
	<li>
		<font face="Times, Times Roman, serif">To exercise reasonable care and diligence; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To deal honestly and in good faith; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To present all written offers, notices and other communications in a timely manner whether or not the seller&#39;s property is subject to a contract for sale or the buyer is already a party to a contract to purchase; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To disclose material facts known by the agent and not apparent or readily ascertainable to a party; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To account in a timely manner for money and property received from or on behalf of the client; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To be loyal to their client by not taking action that is adverse or detrimental to the client&#39;s interest in a transaction; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To disclose in a timely manner to the client any conflict of interest, existing or contemplated; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To advise the client to seek expert advice on matters related to the transactions that are beyond the agent&#39;s expertise; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To maintain confidential information from or about the client except under subpoena or court order, even after termination of the agency relationship; and </font></li>
	<li>
		<font face="Times, Times Roman, serif">When representing a seller, to make a continuous, good faith effort to find a buyer for the property, except that a seller&#39;s agent is not required to seek additional offers to purchase the property while the property is subject to a contract for sale. When representing a buyer, to make a continuous, good faith effort to find property for the buyer, except that a buyer&#39;s agent is not required to seek additional properties for the buyer while the buyer is subject to a contract for purchase or to show properties for which there is no written agreement to pay compensation to the buyer&#39;s agent. </font></li>
</ol>
<p><font face="Times, Times Roman, serif">None of these affirmative duties of an agent may be waived, except #10, which can only be waived by written agreement between client and agent. Under Oregon law, a seller&#39;s agent may show properties owned by another seller to a prospective buyer and may list competing properties for sale without breaching any affirmative duty to the seller. Similarly, a buyer&#39;s agent may show properties in which the buyer is interested to other prospective buyers without breaching any affirmative duty to the buyer. Unless agreed to in writing, an agent has no duty to investigate matters that are outside the scope of the agent&#39;s expertise. </font></p>
<p><font face="Times, Times Roman, serif"><b>Duties and Responsibilities of an Agent Who Represents More than One Client in a Transaction</b><br />
	One agent may represent both the seller and the buyer in the same transaction, or multiple buyers who want to purchase the same property only under a written &quot;Disclosed Limited Agency&quot; agreement, signed by the seller, buyer(s) and their agent. When different agents associated with the same real estate firm establish agency relationships with different parties to the same transaction, only the principal broker (the broker who supervises the other agents) will act as a Disclosed Limited Agent for both the buyer and seller. The other agents continue to represent only the party with whom the agent already has an established agency relationship unless all parties agree otherwise in writing. The supervising principal broker and the agents representing either the seller or the buyer have the following duties to their clients:</font></p>
<ol>
	<li>
		<font face="Times, Times Roman, serif">To disclose a conflict of interest in writing to all parties; </font></li>
	<li>
		<font face="Times, Times Roman, serif">To take no action that is adverse or detrimental to either party&#39;s interest in the transaction; and </font></li>
	<li>
		<font face="Times, Times Roman, serif">To obey the lawful instruction of both parties. </font></li>
</ol>
<p><font face="Times, Times Roman, serif">An agent acting under a Disclosed Limited Agency agreement has the same duties to the client as when representing only a seller or only a buyer, except that the agent may not, without written permission, disclose any of the following:</font></p>
<ol>
	<li>
		<font face="Times, Times Roman, serif">That the seller will accept a lower price or less favorable terms than the listing price or terms; </font></li>
	<li>
		<font face="Times, Times Roman, serif">That the buyer will pay a greater price or more favorable terms than the offering price or terms; or </font></li>
	<li>
		<font face="Times, Times Roman, serif">In transactions involving one-to-four residential units only, information regarding the real property transaction including, but not limited to, price, terms, financial qualifications or motivation to buy or sell. </font></li>
</ol>
<p><font face="Times, Times Roman, serif">No matter whom they represent, an agent must disclose information the agent knows or should know that failure to disclose would constitute fraudulent misrepresentation. Unless agreed to in writing, an agent acting under a Disclosed Limited Agency agreement has no duty to investigate matters that are outside the scope of the agent&#39;s expertise. </font></p>
<p><font face="Times, Times Roman, serif"><i>You are encouraged to discuss the above information with the agent delivering this pamphlet to you. If you intend for that agent, or any other Oregon real estate agent, to represent you as a Seller&#39;s Agent, Buyer&#39;s Agent, or Disclosed Limited Agent, you should have a specific discussion with him/her about the nature and scope of the agency relationship. Whether you are a buyer or seller, you cannot make a licensee your agent without their knowledge and consent, and an agent cannot make you their client without your knowledge and consent.</i></font></p>
',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p><font face="Times, Times Roman, serif"><b>DISCLOSURE PAMPHLET</b> </font></p>
<p><font face="Times, Times Roman, serif">(OAR 863-015-215(4)) </font></p>
<p><font face="Times, Times Roman, serif"><i>This pamphlet describes agency relationships and the duties and responsibilities of real estate licensees in Oregon. This pamphlet is informational only and neither the pamphlet nor its delivery to you may be construed to be evidence of intent to create an agency relationship. </i></font></p>
<p><font face="Times, Times Roman, serif"><b>Real Estate Agency Relationships</b><br />
	An "agency" relationship is a voluntary legal relationship in which a real estate licensee (the "agent") agrees to act on behalf of a buyer or a seller (the "client") in a real estate transaction. Oregon law provides for three types of agency relationships between real estate agents and their clients: </font></p>
<p class="rteindent1"><font face="Times, Times Roman, serif"><strong>Seller\'s Agent</strong> -- Represents the seller only; </font><br /><span style="font-family:arial,helvetica,sans-serif;"><strong>Buyer\'s Agent</strong> -- Represents the buyer only;<br /><b>Disclosed Limited Agent</b> -- Represents both the buyer and seller, or multiple buyers who want to purchase the same property. This can be done only with the written permission of both clients.</span></p>
<p><i>The actual agency relationships between the seller, buyer and their agents in a real estate transaction must be acknowledged at the time an offer to purchase is made. Please read this pamphlet carefully before entering into an agency relationship with a real estate agent. </i></p>
<p><b>Duties and Responsibilities of an Agent Who Represents Only the Seller or Only the Buyer</b><br />
	Under a written listing agreement to sell property, an agent represents only the seller unless the seller agrees in writing to allow the agent to also represent the buyer. An agent who agrees to represent a buyer acts only as the buyer\'s agent unless the buyer agrees in writing to allow the agent to also represent the seller. An agent who represents only the seller or only the buyer owes the following affirmative duties to their client, other parties and their agents involved in a real estate transaction:</p>
<ol><li>
		<font face="Times, Times Roman, serif">To exercise reasonable care and diligence; </font></li>
<li>
		<font face="Times, Times Roman, serif">To deal honestly and in good faith; </font></li>
<li>
		<font face="Times, Times Roman, serif">To present all written offers, notices and other communications in a timely manner whether or not the seller\'s property is subject to a contract for sale or the buyer is already a party to a contract to purchase; </font></li>
<li>
		<font face="Times, Times Roman, serif">To disclose material facts known by the agent and not apparent or readily ascertainable to a party; </font></li>
<li>
		<font face="Times, Times Roman, serif">To account in a timely manner for money and property received from or on behalf of the client; </font></li>
<li>
		<font face="Times, Times Roman, serif">To be loyal to their client by not taking action that is adverse or detrimental to the client\'s interest in a transaction; </font></li>
<li>
		<font face="Times, Times Roman, serif">To disclose in a timely manner to the client any conflict of interest, existing or contemplated; </font></li>
<li>
		<font face="Times, Times Roman, serif">To advise the client to seek expert advice on matters related to the transactions that are beyond the agent\'s expertise; </font></li>
<li>
		<font face="Times, Times Roman, serif">To maintain confidential information from or about the client except under subpoena or court order, even after termination of the agency relationship; and </font></li>
<li>
		<font face="Times, Times Roman, serif">When representing a seller, to make a continuous, good faith effort to find a buyer for the property, except that a seller\'s agent is not required to seek additional offers to purchase the property while the property is subject to a contract for sale. When representing a buyer, to make a continuous, good faith effort to find property for the buyer, except that a buyer\'s agent is not required to seek additional properties for the buyer while the buyer is subject to a contract for purchase or to show properties for which there is no written agreement to pay compensation to the buyer\'s agent. </font></li>
</ol><p><font face="Times, Times Roman, serif">None of these affirmative duties of an agent may be waived, except #10, which can only be waived by written agreement between client and agent. Under Oregon law, a seller\'s agent may show properties owned by another seller to a prospective buyer and may list competing properties for sale without breaching any affirmative duty to the seller. Similarly, a buyer\'s agent may show properties in which the buyer is interested to other prospective buyers without breaching any affirmative duty to the buyer. Unless agreed to in writing, an agent has no duty to investigate matters that are outside the scope of the agent\'s expertise. </font></p>
<p><font face="Times, Times Roman, serif"><b>Duties and Responsibilities of an Agent Who Represents More than One Client in a Transaction</b><br />
	One agent may represent both the seller and the buyer in the same transaction, or multiple buyers who want to purchase the same property only under a written "Disclosed Limited Agency" agreement, signed by the seller, buyer(s) and their agent. When different agents associated with the same real estate firm establish agency relationships with different parties to the same transaction, only the principal broker (the broker who supervises the other agents) will act as a Disclosed Limited Agent for both the buyer and seller. The other agents continue to represent only the party with whom the agent already has an established agency relationship unless all parties agree otherwise in writing. The supervising principal broker and the agents representing either the seller or the buyer have the following duties to their clients:</font></p>
<ol><li>
		<font face="Times, Times Roman, serif">To disclose a conflict of interest in writing to all parties; </font></li>
<li>
		<font face="Times, Times Roman, serif">To take no action that is adverse or detrimental to either party\'s interest in the transaction; and </font></li>
<li>
		<font face="Times, Times Roman, serif">To obey the lawful instruction of both parties. </font></li>
</ol><p><font face="Times, Times Roman, serif">An agent acting under a Disclosed Limited Agency agreement has the same duties to the client as when representing only a seller or only a buyer, except that the agent may not, without written permission, disclose any of the following:</font></p>
<ol><li>
		<font face="Times, Times Roman, serif">That the seller will accept a lower price or less favorable terms than the listing price or terms; </font></li>
<li>
		<font face="Times, Times Roman, serif">That the buyer will pay a greater price or more favorable terms than the offering price or terms; or </font></li>
<li>
		<font face="Times, Times Roman, serif">In transactions involving one-to-four residential units only, information regarding the real property transaction including, but not limited to, price, terms, financial qualifications or motivation to buy or sell. </font></li>
</ol><p><font face="Times, Times Roman, serif">No matter whom they represent, an agent must disclose information the agent knows or should know that failure to disclose would constitute fraudulent misrepresentation. Unless agreed to in writing, an agent acting under a Disclosed Limited Agency agreement has no duty to investigate matters that are outside the scope of the agent\'s expertise. </font></p>
<p><font face="Times, Times Roman, serif"><i>You are encouraged to discuss the above information with the agent delivering this pamphlet to you. If you intend for that agent, or any other Oregon real estate agent, to represent you as a Seller\'s Agent, Buyer\'s Agent, or Disclosed Limited Agent, you should have a specific discussion with him/her about the nature and scope of the agency relationship. Whether you are a buyer or seller, you cannot make a licensee your agent without their knowledge and consent, and an agent cannot make you their client without your knowledge and consent.</i></font></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['contact_us'] = (object) array(
    'exported_path' => 'content/contact-us',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/contact_us',
      'router_path' => 'node/%',
      'link_title' => 'Contact Us',
      'options' => array(
        'attributes' => array(
          'title' => 'General contact form',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-45',
      'identifier' => 'main-menu:node-name/contact_us',
    ),
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '0',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'your_name',
          'name' => 'Your Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'description' => 'Enter your name',
            'title_display' => 'before',
            'private' => 0,
            'width' => '60',
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'email_address',
          'name' => 'Email Address',
          'type' => 'email',
          'value' => '',
          'extra' => array(
            'description' => 'Enter a valid email address',
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '1',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'phone_number',
          'name' => 'Phone Number',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'description' => 'If you would prefer a phone call, enter your phone number here, including area code.',
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '2',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'best_time_to_call',
          'name' => 'Best Time to Call',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'description' => 'If you enter a phone#, please give me the best time to call',
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '3',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'address',
          'name' => 'Address',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'description' => 'Enter your address or the address you\'re interested in',
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '4',
          'page_num' => 1,
        ),
        5 => array(
          'pid' => '0',
          'form_key' => 'how_can_i_help',
          'name' => 'How can I help?',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'description' => 'What can I help you with?',
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '5',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Contact Us',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1344489493',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'contact_us',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>I can be reached any number of different ways. I will do my best to contact you as soon as I possibly can.&nbsp;</p>
<p><strong>[ Realtor Name ]</strong></p>
<p>&nbsp; &nbsp;Email :&nbsp;<font class="Apple-style-span" color="#005a8c"><a href="mailto:becky@oip.net">becky@oip.net</a></font><br />
	&nbsp; &nbsp;Cell: 541-520-9577&nbsp;<br />
	&nbsp; &nbsp;Fax: 541-942-1892</p>
<p><strong>Office Address:</strong>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;&nbsp;</p>
<table border="0" cellpadding="1" cellspacing="1">
	<tbody>
		<tr>
			<td>
				Bohemia Realty</td>
			<td>
				Office Phone: 541-555-1212</td>
		</tr>
		<tr>
			<td>
				555 Main St</td>
			<td>
				Office Fax; 541-123-4567</td>
		</tr>
		<tr>
			<td>
				Cottage Grove, OR 97424-1234</td>
			<td>
				&nbsp;</td>
		</tr>
	</tbody>
</table>
<p>&nbsp;</p>
<hr />
<p><strong>Or - fill out the following form and click &quot;Submit&quot;&nbsp;</strong></p>
',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<p>I can be reached any number of different ways. I will do my best to contact you as soon as I possibly can. </p>
<p><strong>[ Realtor Name ]</strong></p>
<p>   Email : <font class="Apple-style-span" color="#005a8c"><a href="mailto:becky@oip.net">becky@oip.net</a></font><br />
	   Cell: 541-520-9577 <br />
	   Fax: 541-942-1892</p>
<p><strong>Office Address:</strong>                              </p>
<table border="0" cellpadding="1" cellspacing="1"><tbody><tr><td>
				Bohemia Realty</td>
<td>
				Office Phone: 541-555-1212</td>
</tr><tr><td>
				555 Main St</td>
<td>
				Office Fax; 541-123-4567</td>
</tr><tr><td>
				Cottage Grove, OR 97424-1234</td>
<td>
				 </td>
</tr></tbody></table><p> </p>
<hr /><p><strong>Or - fill out the following form and click "Submit" </strong></p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['mortgage_calculator'] = (object) array(
    'exported_path' => 'content/mortgage-calculator',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/mortgage_calculator',
      'router_path' => 'node/%',
      'link_title' => 'Mortgage Calculator',
      'options' => array(
        'attributes' => array(
          'title' => 'Mortgage Calculator',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-49',
      'identifier' => 'main-menu:node-name/mortgage_calculator',
    ),
    'title' => 'Mortgage Calculator',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1344488607',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'mortgage_calculator',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<?php
/**
 * PHP Mortgage Calculator
 *
 * Copyright 2002-2008 Dave Tufts <dave@imarc.net>
 *
 * @version 2.0.0
 *
 * @author  Dave Tufts [dt] <dave@imarc.net>
 *
 * @changes 2.0.0 Major refactoring and code cleanup; added customizable property tax, assessed value, condo fee [dt, 2008-03-15]
 * @changes 1.3.0 Updated CSS [dt, 2007-08-21]
 * @changes 1.2.1 fixed bug with uninitialize variable $pmi_per_month, $pmi_text [dt, 2007-01-04]
 * @changes 1.2.0 fixed bug with number_format, clead up comments [dt, 2006-02-16]
 * @changes 1.1.0 initial release [dt, 2003-01-01]
 */


/* --------------------------------------------------------------------- */
/* VARIABLES
/* --------------------------------------------------------------------- */
$listingid = \'\';
$sale_price                      = (float) _clean_number(_request(\'sale_price\', 200000));
$mortgage_interest_percent       = (float) _clean_number(_request(\'mortgage_interest_percent\', 6.5));
$year_term                       = (float) _clean_number(_request(\'year_term\', 30));
$down_percent                    = (float) _clean_number(_request(\'down_percent\', 10));
$assessed_value                  = (float) _clean_number(_request(\'assessed_value\'));
$property_tax_rate               = (float) _clean_number(_request(\'property_tax_rate\', 14));
$condo_fee                       = (float) _clean_number(_request(\'condo_fee\'));

$show_progress                   = (bool)  _request(\'show_progress\', true);
$form_complete                   = (bool)  _request(\'form_complete\', false);
$pmi_per_month                   = 0;
$total_monthly_bill              = 0;
$month_term                      = $year_term * 12;


/* --------------------------------------------------------------------- */
/* HEADER (only printed if the output buffer is empty)
/* --------------------------------------------------------------------- */
	if (!headers_sent() && FALSE) {
		?>
		<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
            "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
		<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
		<head>
			<meta http-equiv="content-type" content="text/html; charset=utf-8" />
			<style type="text/css" media="all">
				html {
					font-size: 84%;
				}
				body {
					width: 60em;
					margin: 2em auto;
					font: normal normal normal 1em/1.7em verdana,sans-serif; 
				}
				h1 { 
					background-color: #000;
					color: #fff;
					font-family: Helvetica,arial,sans-serif;
					font-size: 3em;
					margin: 0 -.5em;
					padding: .5em;
				}
			</style>
			
			<title>PHP Mortgage Calculator</title>
		</head>
		<body>
		
		<h1>PHP Mortgage Calculator</h1>

		<?php
		$print_footer = TRUE;
	} else {
		$print_footer = FALSE;
	}
?>




<?
/* --------------------------------------------------------------------- */
/* CSS
/* --------------------------------------------------------------------- */
?>
<style type="text/css">
	<!--
		/* GLOBAL */
		#mortgage_calculator h2         { font-size: 2.6em; font-family: Helvetica,arial,sans-serif; font-weight: normal; padding: 0 0 .1em 0; border-bottom: .1em solid #000; margin: 1.5em 0 .5em 0; }
		#mortgage_calculator div.error  { margin: 2em 0; color: red; font-weight: bold; }
		
		#mortgage_calculator table  { width: 100%; margin: .1em 0 2em 0; }
		#mortgage_calculator th, 
		#mortgage_calculator td     { padding: .5em; vertical-align: top; }
		#mortgage_calculator th     {  text-align: right; font-weight: normal; width: 25%; }
		
		#mortgage_calculator table tr.even { background-color: #eee; }
		#mortgage_calculator table tr.odd  { background-color: #fff; }

		/* TOTAL BOX */
		#mortgage_calculator div.total            { float: right; width: 30%; padding: .5em; font-weight: normal; background-color: #ff9; }
		#mortgage_calculator div.total strong     { display: block; font-size: 1.8em; }
		#mortgage_calculator div.total a:link, 
		#mortgage_calculator div.total a:visited  { font-size: .84em; }
		
		/* INPUT */
		#mortgage_calculator table.input p.info  { padding-top: 0; margin-top: .5em; font-size: .84em; line-height: 1.4em; color: #666; }
		
		/* INFO */
		#mortgage_calculator table.info td      { font-weight: bold; }
		#mortgage_calculator table.info p.info  { padding-top: 0; margin-top: 0; color: #333; font-weight: normal; }
		#mortgage_calculator table.info tr.pmi  { background-color: #ffe; }
		#mortgage_calculator table.info tr.tax  { background-color: #ffc; }

		/* SUM */
		#mortgage_calculator table.sum              { margin: 0 auto; width: auto; border-collapse: collapse; }
		#mortgage_calculator table.sum td           { font-weight: normal; white-space: nowrap; border: 1px solid #999; border-collapse: collapse; text-align: right; }
		#mortgage_calculator table.sum tr.total td  { font-weight: bold; background-color: #ff9; }

		/* CALCULATIONS */
		#mortgage_calculator div.calculation         { padding: .5em; }
		#mortgage_calculator div.calculation h3      { font-family: Helvetica,arial,sans-serif; font-weight: normal; font-size: 2.2em; padding-bottom: 0; margin-bottom: 0; }
		#mortgage_calculator div.calculation p       { margin-left: 5em; }
		#mortgage_calculator div.calculation .result { padding: .2em; background-color: #ff9; }
		
		/* AMORTIZATION */
		#mortgage_calculator table.amortization              { border-collapse: collapse; }
		#mortgage_calculator table.amortization td           { text-align: right; background-color: #eee; border: 1px solid #999; border-collapse: collapse; }
		#mortgage_calculator table.amortization tr.legend td { font-weight: bold; background-color: #000; color: #fff; text-align: right; }
		
		#mortgage_calculator table.amortization tr.year_summary td { text-align: left; background-color: #ffc; margin-bottom: 2em; }
		#mortgage_calculator table.amortization tr.year_summary td p { margin: .2em 0 0 4em; }
		#mortgage_calculator table.amortization tr.year_summary td .coaching { font-size: .84em; color: #666; }
		
		#mortgage_calculator table.amortization tr.total_summary td { font-family: Helvetica,arial,sans-serif; text-align: left; background-color: #ff0; font-size: 1.84em; line-height: 1.2em; }
		#mortgage_calculator table.amortization tr.total_summary .total_spent_over_term { font-size: 3em; display: block; line-height: 1.2em; text-align: center; }
	-->
</style> 





<?
/* --------------------------------------------------------------------- */
/* HTML OPENING
/* --------------------------------------------------------------------- */
?>
<div id="mortgage_calculator">





<?
/* --------------------------------------------------------------------- */
/* VALIDATION, CALCULATION
/* --------------------------------------------------------------------- */
?>
<?php		
try {
	if (!$form_complete) {
		throw new IncompleteException();
	}
	
	// validation
	if (($year_term <= 0) || ($sale_price <= 0) || ($mortgage_interest_percent <= 0)) {
		throw new Exception ( \'You must enter a <strong>Sale Price</strong>, <strong>Length of Mortgage</strong> and <strong>Annual Interest Rate</strong>\');
	}
	if ($assessed_value <= 0 && $sale_price > 0) {
		$assessed_value = $sale_price * .85;
	}
	
	
	
	/* --------------------------------------------------------------------- */
	/* KEY CALCULATIONS
	/* --------------------------------------------------------------------- */

	// financing & down payment numbers
	$down_payment            = $sale_price * ($down_percent / 100);
	$financing_price         = $sale_price - $down_payment;
	
	// interest rates
	$annual_interest_rate    = $mortgage_interest_percent / 100;
	$monthly_interest_rate   = $annual_interest_rate / 12;

	// Principal & Interest monthly payment: financing & interest numbers from above as well as $year_term (length of mortgage, entered by user)
	$monthly_payment         = $financing_price / _get_interest_factor($year_term, $monthly_interest_rate);
	
	// taxes
	$property_yearly_tax     = ($assessed_value / 1000) * $property_tax_rate;
	$property_monthly_tax    = $property_yearly_tax / 12;
	
	// PMI, if necessary 
	if ($down_percent < 20) { 
		$pmi_per_month       = 55 * ($financing_price / 100000);
	}
	
	// Total principal, interest, pmi, taxes, fees
	$total_monthly_bill      = $monthly_payment + $pmi_per_month + $property_monthly_tax + $condo_fee;

	/* --------------------------------------------------------------------- */


	
} catch (IncompleteException $e) {
	$form_complete = false;

} catch (Exception $e) {
	$form_complete = false;
	echo \'<div class="error">\' . $e->getMessage() . \'</div>\';
}
?>





<?php
/* --------------------------------------------------------------------- */
/* INPUT (the form)
/* --------------------------------------------------------------------- */
?>
<h3>Purchase &amp; Financing Information</h3>
<form method="get" action="mortgage-calculator">
	
	<?php if ($total_monthly_bill > 0) { ?>
		<div class="total">
			Your total monthly payment is 
			<strong><?php echo _money($total_monthly_bill) ?></strong> 
			<a href="#total_details">[Details]</a>
		</div>
	<?php } ?>
		
	<table cellpadding="0" cellspacing="0" class="input">
		<tr class="<?php echo _get_background() ?>">
			<th>Sale Price of Home:</th>
			<td><input type="text" size="12" name="sale_price" value="<?php echo _money($sale_price); ?>" /> (dollars)</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Percentage Down:</th>
			<td><input type="text" size="5" name="down_percent" value="<?php echo $down_percent; ?>" />%</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Mortgage Interest Rate:</th>
			<td><input type="text" size="5" name="mortgage_interest_percent" value="<?php echo $mortgage_interest_percent; ?>" />%</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Length of Mortgage:</th>
			<td><input type="text" size="3" name="year_term" value="<?php echo $year_term; ?>" /> years</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Assessed Home Value:</th>
			<td>
				<input type="text" size="12" name="assessed_value" value="<?php echo _money($assessed_value); ?>" /> (dollars)<br />
				<p class="info">
					The assessed value is used to compute property taxes.
					On average, properties are assessed at about 85% of their 
					selling price. If you know the actual assessed value for 
					this property, enter it here. If not, <strong>leave zero  
					and we\'ll use 85% of the sale price</strong>.
				</p>
			</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Property Tax Rate:</th>
			<td>
				<input type="text" size="3" name="property_tax_rate" value="<?php echo $property_tax_rate; ?>" /> (dollars per $1000)
				<p class="info">
					Property tax rates vary between states and towns. The US average is about $13.80 for every $1000 of the assessed home value. 
				</p>
			</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Condo/Monthly Fee(s):</th>
			<td><input type="text" size="3" name="condo_fee" value="<?php echo $condo_fee; ?>" /> (dollars)</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Explain Calculations:</th>
			<td><input type="checkbox" name="show_progress" value="1" <?php if ($show_progress) { print("checked=\\"checked\\""); } ?> /> Show the calculations and amortization</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>&nbsp;</th>
			<td>
				<input type="hidden" name="form_complete" value="1" />
				<input type="submit" value="Calculate" />
			</td>
		</tr>
	</table>
</form>





<?php
/* --------------------------------------------------------------------- */
/* INFO - mortgage payment information
/* --------------------------------------------------------------------- */
?>
<?php if ($form_complete) { ?>

	<a name="total_details"></a>
	<h2>Mortgage Payment Information</h2>
	
	<table cellpadding="0" cellspacing="0" class="info">
		<tr class="<?php echo _get_background() ?>">
			<th>Down Payment:</th>
			<td>
				<?php echo _money($down_payment); ?>
			</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Amount Financed:</th>
			<td>
				<?php echo _money($financing_price); ?>
			</td>
		</tr>
		<tr class="<?php echo _get_background() ?>">
			<th>Monthly Payment:</th>
			<td>
				<?php echo _money($monthly_payment); ?>
				<span class="info">(Principal &amp; Interest ONLY)</span>
			</td>
		</tr>
		
		<?php if ($pmi_per_month) { ?>
			<tr class="pmi">
				<td colspan="2">
					<p class="info">
						Since you put less than 20% down, you will pay 
						<a href="http://www.google.com/search?hl=en&amp;q=private+mortgage+insurance">Private Mortgage Insurance</a>. 
						<acronym title="Private Mortgage Insurance">PMI</acronym> 
						tends to be about $55 per month for every $100,000 financed 
						(until you have paid off 20% of your loan). This adds 
						<strong><?php echo _money($pmi_per_month); ?></strong> 
						to your monthly payment.
					</p>
				</td>
			</tr>
		<?php } ?>
		
		<tr class="tax">
			<td colspan="2">
				<p class="info">
					Your property tax rate is <?php echo _money($property_tax_rate) ?> per $1000. 
					Your home\'s assessed value is <?php echo _money($assessed_value); ?>.
					This means that your yearly property taxes will be  
					<?php echo _money($property_yearly_tax); ?>, or 
					<?php echo _money($property_monthly_tax); ?> per month.
				</p>
			</td>
		</tr>
	</table>
<?php } ?>





<?php
/* --------------------------------------------------------------------- */
/* SUM - breakdown of monthly payment sum
/* --------------------------------------------------------------------- */
?>
<?php if ($form_complete) { ?>
	
	<a name="total_payment"></a>
	<h2>Your Total Monthly Payment</h2>
	<table cellpadding="0" cellspacing="0" class="sum">
		<tr>
			<td>Mortgage (Principal &amp; Interest)</td>
			<td><?php echo _money($monthly_payment); ?></td>
		</tr>
		<tr>
			<td><acronym title="Private Mortgage Insurance">PMI</acronym></td>
			<td><?php echo _money($pmi_per_month); ?></td>
		</tr>
		<tr>
			<td>Property Tax</td>
			<td><?php echo _money($property_monthly_tax); ?></td>
		</tr>
		<tr>
			<td>Condo Fee</td>
			<td><?php echo _money($condo_fee); ?></td>
		</tr>
		<tr class="total">
			<td>Total Monthly Payment</td>
			<td><?php echo _money($total_monthly_bill); ?></td>
		</tr>
	</table>
	
<?php } ?>





<?php
/* --------------------------------------------------------------------- */
/* CALCULATIONS - explanation of the calculations
/* --------------------------------------------------------------------- */
?>
<?php if ($form_complete) { ?>
	
	<h2>Calculations</h2>
	<p>
		To figure out the monthly payment, we need to know (1) how much 
		you\'re financing; (2) your monthly interest rate; and (3) how many 
		months you\'re financing for.
	</p>
	<p>
		Financials are typically quoted in yearly or annual numbers&mdash;<em>a 
		30-year mortgage or a 6% annual interest</em>. However, you pay your 
		mortgage every month. A lot of the calculations involve translating 
		those yearly numbers to their monthly equivalents.
	</p>
	<div class="calculation">
		<h3>1. Financing Price</h3>
		<p>
			First, we need to figure how much you\'re financing.
		</p>
		<p>
			We can do this based on the sale price of the home 
			(<strong><?php echo _money($sale_price); ?></strong>) and the 
			percent that you put down (<strong><?php echo $down_percent; ?>%</strong>).
		</p>
		<p>
			Start by calculating the down payment. Divide the percentage down by 100, 
			then multiply by the sale price of the home.
		</p>
		<p>
			(<?php echo $down_percent; ?>% / 100) x <?php echo _money($sale_price); ?> = 
			<strong><?php echo _money($down_payment); ?></strong>, 
			<em>your down payment</em>
		</p>
		<p>
			Now we can calculate how much you\'re financing&mdash;how much 
			you need to borrow. That\'s just the sale price minus your down payment.
		</p>
		<p class="result">
			<?php echo _money($sale_price); ?> - <?php echo _money($down_payment); ?> = 
			<strong><?php echo _money($financing_price); ?></strong>, 
			<em>your financing price</em>
		</p>
	</div>
	<div class="calculation">
		<h3>2. Monthly Interest Rate</h3>
		<p>
			That <strong><?php echo $mortgage_interest_percent; ?>%</strong> 
			interest rate percentage you secured is an <em>annual</em> percent.
		</p>
		<p>
			We\'ll need to convert that from a percentage to a decimal rate, 
			and from an annual representation to a monthly one.
		</p>
		<p>
			First, let\'s convert it to a decimal, by dividing the percent by 100.
		</p>
		<p>
			<?php echo $mortgage_interest_percent; ?>% / 100 = 
			<strong><?php echo $annual_interest_rate; ?></strong>, 
			<em>the annual interest rate</em>
		</p>
		<p>
			Now convert the annual rate to a monthly rate by dividing by 12 
			(for 12 months in a year).
		</p>
		<p class="result">
			<?php echo $annual_interest_rate; ?> / 12 = 
			<strong><?php echo $monthly_interest_rate; ?></strong>, 
			<em>your monthly interest rate</em>
		</p>
	</div>
	<div class="calculation">
		<h3>3. Month Term</h3>
		<p>
			Now for an easy calculation&mdash;the <strong>month term</strong>. 
			That\'s just the number of months you\'ll be paying off your loan.
		</p>
		<p class="result">
			You have a <?php echo $year_term; ?> year mortgage x 12 months = 
			<strong><?php echo $month_term; ?> months</strong>, 
			<em>your month term</em>.
		</p>
	</div>
	<div class="calculation">
		<h3>Final: Your Monthly Mortgage Payment</h3>
		<p>
			Using the three numbers above, we can now calculate your monthly payment.
		</p>
		<p>
			(financing price) x (monthly interest rate / (1 - ((1+monthly interest rate)<sup>-(monthly term)</sup>)))
		</p>
		<p class="result">
			<?php echo _money($financing_price); ?> x (<?php echo number_format($monthly_interest_rate, \'4\', \'.\', \'\'); ?> / (1 - ((1 + <?php echo number_format($monthly_interest_rate, \'4\', \'.\', \'\'); ?>)<sup>-(<?php echo $month_term; ?>)</sup>))) = <strong><?php echo _money($monthly_payment); ?></strong>, <em>your monthly payment*</em>
		</p>
		<p>
			*<em>Principal &amp; Interest only</em>. See 
			<a href="#total_payment">total monthly payment</a> for a your 
			mortgage plus taxes, insurance, and fees. See 
			<a href="#amortization">amortization</a> for a breakdown of how 
			each monthly payment is split between the bank\'s interest and 
			paying off the loan principal.
		</p>
	</div>
<?php } ?>





<?php
/* --------------------------------------------------------------------- */
/* AMORTIZATION - month by month breakdown of payments
/* --------------------------------------------------------------------- */
?>
<?php if ($form_complete) { ?>
	
	<?php
		// Set some base variables
		$principal	                 = $financing_price;
		$current_month               = 1;
		$current_year                = 1;
		$this_year_interest_paid     = 0;
		$this_year_principal_paid    = 0;
		$total_spent_over_term       = 0;

		// Re-figures out the monthly payment.
		$power = -($month_term);
		$denom = pow((1 + $monthly_interest_rate), $power);
		$monthly_payment = $principal * ($monthly_interest_rate / (1 - $denom));
		
		// This LEGEND will get reprinted every 12 months
		$legend  = \'<tr class="legend">\';
		$legend .= \'<td>Month</td>\';
		$legend .= \'<td>Interest Paid</td>\';
		$legend .= \'<td>Principal Paid</td>\';
		$legend .= \'<td>Remaining Balance</td>\';
		$legend .= \'</tr>\';
	?>

	<a name="amortization"></a>
	<h2>Amortization</h2>
	<p>
		Amortization for monthly payment, <?php echo _money($monthly_payment) ?>, 
		over <?= $year_term ?> years. Mortgage amortization only includes your 
		monthly principal and interest payments. Property taxes, PMI, and 
		condo fees are ignored when amortizing your mortgage.
	</p>
	<table cellpadding="0" cellspacing="0" class="amortization">
	
		<?php echo $legend; ?>
					
		<?php
			// Get the current month\'s payments for each month of the loan 
			while ($current_month <= $month_term) {	
				
				$interest_paid	          = $principal * $monthly_interest_rate;
				$principal_paid           = $monthly_payment - $interest_paid;
				$remaining_balance        = $principal - $principal_paid;
				$this_year_interest_paid  = $this_year_interest_paid + $interest_paid;
				$this_year_principal_paid = $this_year_principal_paid + $principal_paid;
				$show_legend              = ($current_month % 12) ? false : true;
			
				$total_spent_over_term    = $total_spent_over_term + ($interest_paid + $principal_paid);
				
				?>
		
				<tr>
					<td><?= $current_month ?></td>
					<td><?= _money($interest_paid) ?></td>
					<td><?= _money($principal_paid) ?></td>
					<td><?= _money($remaining_balance) ?></td>
				</tr>
		
				<?php if ($show_legend) { ?>
					<tr class="year_summary">
						<td colspan="4">
							<strong>Year <?php echo $current_year ?> Summary:</strong> 
							<span class="coaching">
								You spent <?php echo _money($this_year_interest_paid + $this_year_principal_paid) ?>
							</span>
							<p>
								<?php echo _money($this_year_principal_paid) ?> went to principal 
								<span class="coaching">This is equity that your building up</span>
								<br />
								
								<?php echo _money($this_year_interest_paid) ?>  went to interest 
								<span class="coaching">This is typically tax deductible</span>
							</p>
						</td>
					</tr>
					<?php
						$current_year++;
						$this_year_interest_paid  = 0;
						$this_year_principal_paid = 0;
			
						if (($current_month + 6) < $month_term) {
							echo $legend;
						}
					?>
				<?php } ?>
			
			<?php
			$principal = $remaining_balance;
			$current_month++;
		}
		?>
		<tr class="total_summary">
			<td colspan="4">
				Principal &amp; interest costs for the full  
				<?php echo $year_term ?> years of this mortgage total&hellip;
				<span class="total_spent_over_term"><?php echo _money($total_spent_over_term) ?></span>
			</td>
		</tr>	
	</table>
<?php } ?>





<?
/* --------------------------------------------------------------------- */
/* DESCRIPTION
/* --------------------------------------------------------------------- */
?>
<p>
	This mortgage calculator can be used to figure out monthly payments of a 
	home mortgage loan. This calculator automatically factors in 
	<acronym title="Private Mortgage Insurance">PMI</acronym> for loans 
	where less than 20% is put as a down payment. Also taken into 
	consideration are the town property taxes based on the mortgaged 
	property\'s assessed valued.
</p>
<p>
	The code for PHP Mortgage Calculator is free and can probably be 
	downloaded from <a href="http://www.davetufts.com/">http://davetufts.com</a>
</p>





<?
/* --------------------------------------------------------------------- */
/* HTML CLOSING
/* --------------------------------------------------------------------- */
?>
</div> <!-- closes #mortgage_calculator -->






<?
/* --------------------------------------------------------------------- */
/* FOOTER (only printed if header was printed)
/* --------------------------------------------------------------------- */
?>
<?php
	if ($print_footer) {
		echo \'</body>\';
		echo \'</html>\';
	}
?>





<?php
/* --------------------------------------------------------------------- */
/* FUNCTIONS
/* --------------------------------------------------------------------- */

/**
 * Calculates actual mortgage calculations by plotting a PVIFA table
 * (Present Value Interest Factor of Annuity)
 *
 * @param  float  length, in years, of mortgage
 * @param  float  monthly interest rate
 * @return float  denominator used to calculate monthly payment
 */
function _get_interest_factor($year_term, $monthly_interest_rate) {	
	$factor      = 0;
	$base_rate   = 1 + $monthly_interest_rate;
	$denominator = $base_rate;
	for ($i=0; $i < ($year_term * 12); $i++) {
		$factor += (1 / $denominator);
		$denominator *= $base_rate;
	}
	return $factor;
}

/**
 * Formats input as string of money ($n.nn)
 *
 * @param  float  number
 * @return string number formatted as US currency
 */
function _money($input) {
	return \'$\' . number_format($input, "2", ".", ",");
}

/**
 * Alternately returns the word \'odd\' then \'even\'; used in CSS class
 *
 * @param  void
 * @return string CSS class name (\'odd\' or \'even\')
 */
function _get_background()
{
	static $i = 0;
	++$i;
	return ($i % 2) ? \'odd\' : \'even\';
}

/**
 * Checks for existence of key in _REQUEST array; returns value if available
 *
 * @param  string Array key from REQUEST superglobal
 * @param  mixed  Default return if key does not exist
 * @return mixed  Value of key in REQUEST superglobal array
 */
function _request($key, $default=null)
{
	return (isset($_REQUEST[$key])) ? $_REQUEST[$key] : $default;
}

/**
 * Cleans input from any non-float charachters
 *
 * @param  mixed Any string or number
 * @return float
 */
function _clean_number($input) 
{
	return (float) preg_replace(\'/[^0-9.]/\', \'\', $input);
}

/**
 * Exception used for catching incomplete form input
 */
class IncompleteException extends Exception
{
}





/* --------------------------------------------------------------------- */
/* SOFTWARE LICENSE
/* --------------------------------------------------------------------- */
/*
	///// mortgage_calculator.php /////
	Copyright (c) 2002 David Tufts <http://dave.imarc.net> 
	All rights reserved.
	
	Redistribution and use in source and binary forms, with or without 
	modification, are permitted provided that the following conditions 
	are met:
	
	*	Redistributions of source code must retain the above copyright 
	    notice, this list of conditions and the following disclaimer.
	*	Redistributions in binary form must reproduce the above 
	    copyright notice, this list of conditions and the following 
	    disclaimer in the documentation and/or other materials 
	    provided with the distribution.
	*	Neither the name of David Tufts nor the names of its 
	    contributors may be used to endorse or promote products 
	    derived from this software without specific prior 
	    written permission.
	
	THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND 
	CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, 
	INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF 
	MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
	DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS 
	BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, 
	EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED 
	TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, 
	DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
	ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
	OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY 
	OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
	POSSIBILITY OF SUCH DAMAGE.
*/
?>',
          'summary' => '',
          'format' => 'php_code',
        ),
      ),
    ),
  );

  $content['privacy_policy'] = (object) array(
    'exported_path' => 'content/privacy-policy',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/privacy_policy',
      'router_path' => 'node/%',
      'link_title' => 'Privacy Policy',
      'options' => array(
        'attributes' => array(
          'title' => 'Privacy Policy and use of cookies',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-47',
      'identifier' => 'main-menu:node-name/privacy_policy',
    ),
    'title' => 'Privacy Policy',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1344412329',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'privacy_policy',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<div>
	<h4>
		<strong>Privacy Notice and Policy</strong></h4>
	<p><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">This privacy notice discloses the privacy practices for my website, and applies solely to information collected here. It will notify you of the following:</font></font></p>
	<ol>
		<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">What personally identifiable information is collected from you through the web site, how it is used and with whom it may be shared.</font></font></li>
		<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">What choices are available to you regarding the use of your data.</font></font></li>
		<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">The security procedures in place to protect the misuse of your information.</font></font></li>
		<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">How you can correct any inaccuracies in the information.</font></font></li>
	</ol>
	<h4>
		<strong><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">Information Collection, Use, and Sharing</font></font></strong></h4>
	<p><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">We are the sole owners of the information collected on this site. We only have access to/collect information that you voluntarily give us via email or other direct contact from you. We will not sell or rent this information to anyone.</font></font></p>
	<p><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">We will use your information to respond to you, regarding the reason you contacted us. We will not share your information with any third party outside of our organization, other than as necessary to fulfill your request, e.g. to schedule an appointment or a showing. Unless you ask us not to, we may contact you via email in the future to tell you about new listings or other information which you may find interesting or useful, or changes to this privacy policy.</font></font></p>
	<h4>
		<strong>Your Access to and Control Over Information</strong></h4>
	<p><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">You may opt out of any future contacts from us at any time. You can do the following at any time by contacting us via the email address or phone number given on our website:</font></font></p>
	<ul>
		<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">See what data we have about you, if any.</font></font></li>
		<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">Change/correct any data we have about you.</font></font></li>
		<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">Have us delete any data we have about you.</font></font></li>
		<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">Express any concern you have about our use of your data.</font></font></li>
	</ul>
	<h4>
		<strong>Cookies</strong></h4>
	<p>Our site uses &quot;cookies&quot;. A cookie is small piece of text stored on your computer that communicates information about your session to our website. If you disable cookies, your sessions may not work fluidly or correctly. We do not use cookies to track specific behavior, identity you, or otherwise attempt to influence your time on our site. They are a convenience only and do not pose any type of security or identity threat to you or other users of our website.</p>
	<div>
		&nbsp;</div>
</div>
<p>&nbsp;</p>
',
          'summary' => '',
          'format' => 'full_html',
          'safe_value' => '<div>
<h4>
		<strong>Privacy Notice and Policy</strong></h4>
<p><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">This privacy notice discloses the privacy practices for my website, and applies solely to information collected here. It will notify you of the following:</font></font></p>
<ol><li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">What personally identifiable information is collected from you through the web site, how it is used and with whom it may be shared.</font></font></li>
<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">What choices are available to you regarding the use of your data.</font></font></li>
<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">The security procedures in place to protect the misuse of your information.</font></font></li>
<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">How you can correct any inaccuracies in the information.</font></font></li>
</ol><h4>
		<strong><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">Information Collection, Use, and Sharing</font></font></strong></h4>
<p><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">We are the sole owners of the information collected on this site. We only have access to/collect information that you voluntarily give us via email or other direct contact from you. We will not sell or rent this information to anyone.</font></font></p>
<p><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">We will use your information to respond to you, regarding the reason you contacted us. We will not share your information with any third party outside of our organization, other than as necessary to fulfill your request, e.g. to schedule an appointment or a showing. Unless you ask us not to, we may contact you via email in the future to tell you about new listings or other information which you may find interesting or useful, or changes to this privacy policy.</font></font></p>
<h4>
		<strong>Your Access to and Control Over Information</strong></h4>
<p><font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">You may opt out of any future contacts from us at any time. You can do the following at any time by contacting us via the email address or phone number given on our website:</font></font></p>
<ul><li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">See what data we have about you, if any.</font></font></li>
<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">Change/correct any data we have about you.</font></font></li>
<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">Have us delete any data we have about you.</font></font></li>
<li>
			<font size="&lt;!--Font1Size--&gt;"><font face="&lt;!--DefaultFont--&gt;">Express any concern you have about our use of your data.</font></font></li>
</ul><h4>
		<strong>Cookies</strong></h4>
<p>Our site uses "cookies". A cookie is small piece of text stored on your computer that communicates information about your session to our website. If you disable cookies, your sessions may not work fluidly or correctly. We do not use cookies to track specific behavior, identity you, or otherwise attempt to influence your time on our site. They are a convenience only and do not pose any type of security or identity threat to you or other users of our website.</p>
<div>
		 </div>
</div>
<p> </p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['relocation'] = (object) array(
    'exported_path' => 'content/relocation',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/relocation',
      'router_path' => 'node/%',
      'link_title' => 'Relocation',
      'options' => array(
        'attributes' => array(
          'title' => 'Relocation form',
        ),
      ),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '-46',
      'identifier' => 'main-menu:node-name/relocation',
    ),
    'webform' => array(
      'confirmation' => '',
      'confirmation_format' => NULL,
      'redirect_url' => '<confirmation>',
      'status' => '1',
      'block' => '0',
      'teaser' => '0',
      'allow_draft' => '0',
      'auto_save' => '0',
      'submit_notice' => '1',
      'submit_text' => '',
      'submit_limit' => '-1',
      'submit_interval' => '-1',
      'total_submit_limit' => '-1',
      'total_submit_interval' => '-1',
      'record_exists' => TRUE,
      'roles' => array(
        0 => '1',
        1 => '2',
      ),
      'emails' => array(),
      'components' => array(
        0 => array(
          'pid' => '0',
          'form_key' => 'questions_or_comments',
          'name' => 'Questions or comments?',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '0',
          'page_num' => 1,
        ),
        1 => array(
          'pid' => '0',
          'form_key' => 'how_did_you_find_our_site',
          'name' => 'How did you find our site?',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'before',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '2',
          'page_num' => 1,
        ),
        2 => array(
          'pid' => '0',
          'form_key' => 'how_do_i_contact_you',
          'name' => 'How do I contact you?',
          'type' => 'markup',
          'value' => '<table>
	<tbody>
		<tr>
			<td>
				How do I contact you?</td>
		</tr>
	</tbody>
</table>
',
          'extra' => array(
            'conditional_operator' => '=',
            'format' => 'full_html',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '3',
          'page_num' => 1,
        ),
        3 => array(
          'pid' => '0',
          'form_key' => 'email_address',
          'name' => 'Email Address',
          'type' => 'email',
          'value' => '%useremail',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '4',
          'page_num' => 1,
        ),
        4 => array(
          'pid' => '0',
          'form_key' => 'your_name',
          'name' => 'Your Name',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '1',
          'weight' => '5',
          'page_num' => 1,
        ),
        5 => array(
          'pid' => '0',
          'form_key' => 'your_phone',
          'name' => 'Your Phone#',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '6',
          'page_num' => 1,
        ),
        6 => array(
          'pid' => '0',
          'form_key' => 'best_time_to_call',
          'name' => 'Best Time to Call',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '7',
          'page_num' => 1,
        ),
        7 => array(
          'pid' => '0',
          'form_key' => 'tell_me_about_your_move',
          'name' => 'Tell me about your move',
          'type' => 'markup',
          'value' => '<table>
<tbody>
<tr>
<td>
Tell me about your move...</td>
</tr>
</tbody>
</table>',
          'extra' => array(
            'conditional_operator' => '=',
            'format' => 'full_html',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '8',
          'page_num' => 1,
        ),
        8 => array(
          'pid' => '0',
          'form_key' => 'moving_to_city',
          'name' => 'Moving to (city)',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '9',
          'page_num' => 1,
        ),
        9 => array(
          'pid' => '0',
          'form_key' => 'date_of_move_purchase',
          'name' => 'Date of Move/Purchase',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '10',
          'page_num' => 1,
        ),
        10 => array(
          'pid' => '0',
          'form_key' => 'next_visit_to_area',
          'name' => 'Next visit to area',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '11',
          'page_num' => 1,
        ),
        11 => array(
          'pid' => '0',
          'form_key' => 'what_type_of_property',
          'name' => 'What type of property are you interested in?',
          'type' => 'markup',
          'value' => '<table>
	<tbody>
		<tr>
			<td>
				What type of property are you interested in?</td>
		</tr>
	</tbody>
</table>
',
          'extra' => array(
            'conditional_operator' => '=',
            'format' => 'full_html',
            'private' => 0,
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '12',
          'page_num' => 1,
        ),
        12 => array(
          'pid' => '0',
          'form_key' => 'general_type',
          'name' => 'General type',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '13',
          'page_num' => 1,
        ),
        13 => array(
          'pid' => '0',
          'form_key' => 'price_range',
          'name' => 'Price Range',
          'type' => 'textfield',
          'value' => '',
          'extra' => array(
            'title_display' => 'inline',
            'private' => 0,
            'disabled' => 0,
            'unique' => 0,
            'conditional_operator' => '=',
            'width' => '',
            'maxlength' => '',
            'field_prefix' => '',
            'field_suffix' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '14',
          'page_num' => 1,
        ),
        14 => array(
          'pid' => '0',
          'form_key' => 'amenties_beds_baths_square_footage_acreage_etc',
          'name' => 'Amenties (Beds, Baths, Square footage, acreage, etc.)',
          'type' => 'textarea',
          'value' => '',
          'extra' => array(
            'title_display' => 0,
            'private' => 0,
            'resizable' => 1,
            'disabled' => 0,
            'conditional_operator' => '=',
            'cols' => '',
            'rows' => '',
            'description' => '',
            'attributes' => array(),
            'conditional_component' => '',
            'conditional_values' => '',
          ),
          'mandatory' => '0',
          'weight' => '15',
          'page_num' => 1,
        ),
      ),
    ),
    'title' => 'Relocation',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'webform',
    'language' => 'und',
    'created' => '1344493372',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'relocation',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>Fill out the form or drop me an email. I can help you find your next home!</p>
',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Fill out the form or drop me an email. I can help you find your next home!</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
