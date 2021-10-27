#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_RawContacts : public __JniBaseClass
	{
	public:
		// Fields
		static jint AGGREGATION_MODE_DEFAULT();
		static jint AGGREGATION_MODE_DISABLED();
		static jint AGGREGATION_MODE_IMMEDIATE();
		static jint AGGREGATION_MODE_SUSPENDED();
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		
		ContactsContract_RawContacts(QAndroidJniObject obj);
		// Constructors
		ContactsContract_RawContacts() = default;
		
		// Methods
		static QAndroidJniObject getContactLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1);
		static QAndroidJniObject newEntityIterator(__JniBaseClass arg0);
	};
} // namespace android::provider

