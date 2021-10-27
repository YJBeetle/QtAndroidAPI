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
		static QAndroidJniObject CONTENT_RAW_CONTACTS_URI();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject CONTENT_VCARD_URI();
		static jlong MIN_ID();
		
		ContactsContract_Profile(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Profile() = default;
		
		// Methods
	};
} // namespace android::provider

