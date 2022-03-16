#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class ContactsContract_RawContacts_Entity : public JObject
	{
	public:
		// Fields
		static JString CONTENT_DIRECTORY();
		static JString DATA_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts_Entity(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts_Entity(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

