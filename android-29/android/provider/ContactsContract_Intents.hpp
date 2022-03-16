#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_Intents : public JObject
	{
	public:
		// Fields
		static JString ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS();
		static JString ATTACH_IMAGE();
		static JString CONTACTS_DATABASE_CREATED();
		static JString EXTRA_CREATE_DESCRIPTION();
		static JString EXTRA_FORCE_CREATE();
		static JString EXTRA_RECIPIENT_CONTACT_CHAT_ID();
		static JString EXTRA_RECIPIENT_CONTACT_NAME();
		static JString EXTRA_RECIPIENT_CONTACT_URI();
		static JString INVITE_CONTACT();
		static JString METADATA_ACCOUNT_TYPE();
		static JString METADATA_MIMETYPE();
		static JString SEARCH_SUGGESTION_CLICKED();
		static JString SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED();
		static JString SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED();
		static JString SHOW_OR_CREATE_CONTACT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Intents(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Intents(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		ContactsContract_Intents();
		
		// Methods
	};
} // namespace android::provider

