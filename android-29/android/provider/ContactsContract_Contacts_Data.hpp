#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_Contacts_Data : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts_Data(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts_Data(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

