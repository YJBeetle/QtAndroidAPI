#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_RawContactsEntity : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DATA_ID();
		static android::net::Uri PROFILE_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContactsEntity(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContactsEntity(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

