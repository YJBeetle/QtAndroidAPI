#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_Contacts_Entity : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		static jstring DATA_ID();
		static jstring RAW_CONTACT_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_Entity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_Entity(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

