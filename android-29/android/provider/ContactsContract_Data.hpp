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
	class ContactsContract_Data : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jstring VISIBLE_CONTACTS_ONLY();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_Data(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_Data(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getContactLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1);
	};
} // namespace android::provider

