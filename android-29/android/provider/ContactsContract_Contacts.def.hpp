#pragma once

#include "../../JObject.hpp"

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
class JString;

namespace android::provider
{
	class ContactsContract_Contacts : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static android::net::Uri CONTENT_FREQUENT_URI();
		static android::net::Uri CONTENT_GROUP_URI();
		static JString CONTENT_ITEM_TYPE();
		static android::net::Uri CONTENT_LOOKUP_URI();
		static android::net::Uri CONTENT_MULTI_VCARD_URI();
		static android::net::Uri CONTENT_STREQUENT_FILTER_URI();
		static android::net::Uri CONTENT_STREQUENT_URI();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString CONTENT_VCARD_TYPE();
		static android::net::Uri CONTENT_VCARD_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static JString QUERY_PARAMETER_VCARD_NO_PHOTO();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_Contacts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Contacts(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::Uri getLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1);
		static android::net::Uri getLookupUri(jlong arg0, JString arg1);
		static jboolean isEnterpriseContactId(jlong arg0);
		static android::net::Uri lookupContact(android::content::ContentResolver arg0, android::net::Uri arg1);
		static void markAsContacted(android::content::ContentResolver arg0, jlong arg1);
		static java::io::InputStream openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1);
		static java::io::InputStream openContactPhotoInputStream(android::content::ContentResolver arg0, android::net::Uri arg1, jboolean arg2);
	};
} // namespace android::provider

