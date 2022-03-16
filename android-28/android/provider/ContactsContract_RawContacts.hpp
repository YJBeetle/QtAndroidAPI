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
class JString;

namespace android::provider
{
	class ContactsContract_RawContacts : public JObject
	{
	public:
		// Fields
		static jint AGGREGATION_MODE_DEFAULT();
		static jint AGGREGATION_MODE_DISABLED();
		static jint AGGREGATION_MODE_IMMEDIATE();
		static jint AGGREGATION_MODE_SUSPENDED();
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_RawContacts(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_RawContacts(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::Uri getContactLookupUri(android::content::ContentResolver arg0, android::net::Uri arg1);
		static JObject newEntityIterator(JObject arg0);
	};
} // namespace android::provider

