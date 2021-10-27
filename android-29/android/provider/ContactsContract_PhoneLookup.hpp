#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_PhoneLookup : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_FILTER_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_FILTER_URI();
		static jstring QUERY_PARAMETER_SIP_ADDRESS();
		
		ContactsContract_PhoneLookup(QAndroidJniObject obj);
		// Constructors
		ContactsContract_PhoneLookup() = default;
		
		// Methods
	};
} // namespace android::provider

