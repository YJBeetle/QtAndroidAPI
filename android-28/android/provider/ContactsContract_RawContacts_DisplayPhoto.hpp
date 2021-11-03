#pragma once

#include "../../JObject.hpp"


namespace android::provider
{
	class ContactsContract_RawContacts_DisplayPhoto : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_DIRECTORY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts_DisplayPhoto(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts_DisplayPhoto(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

