#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_DeletedContacts : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_URI();
		static jlong DAYS_KEPT_MILLISECONDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_DeletedContacts(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_DeletedContacts(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

