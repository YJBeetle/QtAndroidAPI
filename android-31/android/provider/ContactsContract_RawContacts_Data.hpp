#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_RawContacts_Data : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts_Data(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts_Data(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

