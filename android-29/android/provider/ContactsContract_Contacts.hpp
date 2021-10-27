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
namespace java::io
{
	class InputStream;
}

namespace android::provider
{
	class ContactsContract_Contacts : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONTENT_FILTER_URI();
		static QAndroidJniObject CONTENT_FREQUENT_URI();
		static QAndroidJniObject CONTENT_GROUP_URI();
		static jstring CONTENT_ITEM_TYPE();
		static QAndroidJniObject CONTENT_LOOKUP_URI();
		static QAndroidJniObject CONTENT_MULTI_VCARD_URI();
		static QAndroidJniObject CONTENT_STREQUENT_FILTER_URI();
		static QAndroidJniObject CONTENT_STREQUENT_URI();
		static jstring CONTENT_TYPE();
		static QAndroidJniObject CONTENT_URI();
		static jstring CONTENT_VCARD_TYPE();
		static QAndroidJniObject CONTENT_VCARD_URI();
		static QAndroidJniObject ENTERPRISE_CONTENT_FILTER_URI();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring QUERY_PARAMETER_VCARD_NO_PHOTO();
		
		ContactsContract_Contacts(QAndroidJniObject obj);
		// Constructors
		ContactsContract_Contacts() = default;
		
		// Methods
		static QAndroidJniObject getLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1);
		static QAndroidJniObject getLookupUri(jlong arg0, jstring arg1);
		static QAndroidJniObject getLookupUri(jlong arg0, const QString &arg1);
		static jboolean isEnterpriseContactId(jlong arg0);
		static QAndroidJniObject lookupContact(android::content::ContentResolver arg0, android::net::Uri arg1);
		static void markAsContacted(android::content::ContentResolver arg0, jlong arg1);
		static QAndroidJniObject openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1);
		static QAndroidJniObject openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1, jboolean arg2);
	};
} // namespace android::provider

