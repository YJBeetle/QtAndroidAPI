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
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getContactLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1);
		static __JniBaseClass newEntityIterator(__JniBaseClass arg0);
	};
} // namespace android::provider

