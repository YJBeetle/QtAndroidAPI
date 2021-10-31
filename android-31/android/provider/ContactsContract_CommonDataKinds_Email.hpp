#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Email : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ADDRESS();
		static android::net::Uri CONTENT_FILTER_URI();
		static jstring CONTENT_ITEM_TYPE();
		static android::net::Uri CONTENT_LOOKUP_URI();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring DISPLAY_NAME();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static android::net::Uri ENTERPRISE_CONTENT_LOOKUP_URI();
		static jstring EXTRA_ADDRESS_BOOK_INDEX();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static jstring EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jint TYPE_HOME();
		static jint TYPE_MOBILE();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Email(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Email(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jstring getTypeLabel(android::content::res::Resources arg0, jint arg1, jstring arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

