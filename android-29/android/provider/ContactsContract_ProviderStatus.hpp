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
		static QAndroidJniObject CONTENT_URI();
		static jstring DATABASE_CREATION_TIMESTAMP();
		static jstring STATUS();
		static jint STATUS_BUSY();
		static jint STATUS_EMPTY();
		static jint STATUS_NORMAL();
		
		ContactsContract_ProviderStatus(QAndroidJniObject obj);
		// Constructors
		ContactsContract_ProviderStatus() = default;
		
		// Methods
	};
} // namespace android::provider

