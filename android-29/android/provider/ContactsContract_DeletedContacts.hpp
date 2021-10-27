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
		static QAndroidJniObject CONTENT_URI();
		static jlong DAYS_KEPT_MILLISECONDS();
		
		ContactsContract_DeletedContacts(QAndroidJniObject obj);
		// Constructors
		ContactsContract_DeletedContacts() = default;
		
		// Methods
	};
} // namespace android::provider

