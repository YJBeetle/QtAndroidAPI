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
		static QAndroidJniObject CONTENT_URI();
		static jstring DATA_ID();
		static QAndroidJniObject PROFILE_CONTENT_URI();
		
		ContactsContract_RawContactsEntity(QAndroidJniObject obj);
		// Constructors
		ContactsContract_RawContactsEntity() = default;
		
		// Methods
	};
} // namespace android::provider

