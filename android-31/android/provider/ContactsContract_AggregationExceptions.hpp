#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_AggregationExceptions : public JObject
	{
	public:
		// Fields
		static JString CONTENT_ITEM_TYPE();
		static JString CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static JString RAW_CONTACT_ID1();
		static JString RAW_CONTACT_ID2();
		static JString TYPE();
		static jint TYPE_AUTOMATIC();
		static jint TYPE_KEEP_SEPARATE();
		static jint TYPE_KEEP_TOGETHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_AggregationExceptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_AggregationExceptions(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

