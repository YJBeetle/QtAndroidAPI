#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_AggregationExceptions : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_ITEM_TYPE();
		static jstring CONTENT_TYPE();
		static android::net::Uri CONTENT_URI();
		static jstring RAW_CONTACT_ID1();
		static jstring RAW_CONTACT_ID2();
		static jstring TYPE();
		static jint TYPE_AUTOMATIC();
		static jint TYPE_KEEP_SEPARATE();
		static jint TYPE_KEEP_TOGETHER();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_AggregationExceptions(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_AggregationExceptions(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

