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
    'exported_path' => 'content/agency-disclosure-1',
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

return $content;
}
