#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_Profile : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_RAW_CONTACTS_URI();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri CONTENT_VCARD_URI();
		static jlong MIN_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Profile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Profile(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

