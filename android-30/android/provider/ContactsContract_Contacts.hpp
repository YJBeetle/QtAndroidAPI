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
		static android::net::Uri CONTENT_FILTER_URI();
		static android::net::Uri CONTENT_FREQUENT_URI();
		static android::net::Uri CONTENT_GROUP_URI();
		static jstring CONTENT_ITEM_TYPE();
		static android::net::Uri CONTENT_LOOKUP_URI();
		static android::net::Uri CONTENT_MULTI_VCARD_URI();
		static android::net::Uri CONTENT_STREQUENT_FILTER_URI();
		static android::net::Uri CONTENT_STREQUENT_URI();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring CONTENT_VCARD_TYPE();
		static android::net::Uri CONTENT_VCARD_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring QUERY_PARAMETER_VCARD_NO_PHOTO();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1);
		static android::net::Uri getLookupUri(jlong arg0, jstring arg1);
		static jboolean isEnterpriseContactId(jlong arg0);
		static android::net::Uri lookupContact(android::content::ContentResolver arg0, android::net::Uri arg1);
		static void markAsContacted(android::content::ContentResolver arg0, jlong arg1);
		static java::io::InputStream openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1);
		static java::io::InputStream openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1, jboolean arg2);
	};
} // namespace android::provider

