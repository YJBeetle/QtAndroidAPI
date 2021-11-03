#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Profile : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_RAW_CONTACTS_URI();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri CONTENT_VCARD_URI();
		static jlong MIN_ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Profile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Profile(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

