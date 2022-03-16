#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_Contacts_Entity : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static JString DATA_ID();
		static JString RAW_CONTACT_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_Entity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_Entity(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

