#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_Intents : public JObject
	{
	public:
		// Fields
		static jstring ACTION_VOICE_SEND_MESSAGE_TO_CONTACTS();
		static jstring ATTACH_IMAGE();
		static jstring CONTACTS_DATABASE_CREATED();
		static jstring EXTRA_CREATE_DESCRIPTION();
		static jstring EXTRA_FORCE_CREATE();
		static jstring EXTRA_RECIPIENT_CONTACT_CHAT_ID();
		static jstring EXTRA_RECIPIENT_CONTACT_NAME();
		static jstring EXTRA_RECIPIENT_CONTACT_URI();
		static jstring INVITE_CONTACT();
		static jstring METADATA_ACCOUNT_TYPE();
		static jstring METADATA_MIMETYPE();
		static jstring SEARCH_SUGGESTION_CLICKED();
		static jstring SEARCH_SUGGESTION_CREATE_CONTACT_CLICKED();
		static jstring SEARCH_SUGGESTION_DIAL_NUMBER_CLICKED();
		static jstring SHOW_OR_CREATE_CONTACT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Intents(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Intents(QJniObject obj);
		
		// Constructors
		ContactsContract_Intents();
		
		// Methods
	};
} // namespace android::provider

