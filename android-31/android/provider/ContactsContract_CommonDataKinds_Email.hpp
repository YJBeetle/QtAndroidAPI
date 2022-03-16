#pragma once

#include "../../JObject.hpp"

namespace android::content::res
{
	class Resources;
}
namespace android::net
{
	class Uri;
}
class JString;
class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Email : public JObject
	{
	public:
		// Fields
		static JString ADDRESS();
		static android::net::Uri CONTENT_FILTER_URI();
		static JString CONTENT_ITEM_TYPE();
		static android::net::Uri CONTENT_LOOKUP_URI();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString DISPLAY_NAME();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static android::net::Uri ENTERPRISE_CONTENT_LOOKUP_URI();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		static jint TYPE_HOME();
		static jint TYPE_MOBILE();
		static jint TYPE_OTHER();
		static jint TYPE_WORK();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Email(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Email(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JString getTypeLabel(android::content::res::Resources arg0, jint arg1, JString arg2);
		static jint getTypeLabelResource(jint arg0);
	};
} // namespace android::provider

