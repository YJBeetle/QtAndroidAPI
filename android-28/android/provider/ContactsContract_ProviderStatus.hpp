#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_ProviderStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DATABASE_CREATION_TIMESTAMP();
		static jstring STATUS();
		static jint STATUS_BUSY();
		static jint STATUS_EMPTY();
		static jint STATUS_NORMAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_ProviderStatus(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_ProviderStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

