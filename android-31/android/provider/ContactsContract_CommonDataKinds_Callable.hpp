#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_CommonDataKinds_Callable : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static android::net::Uri CONTENT_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static JString EXTRA_ADDRESS_BOOK_INDEX();
		static JString EXTRA_ADDRESS_BOOK_INDEX_COUNTS();
		static JString EXTRA_ADDRESS_BOOK_INDEX_TITLES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_CommonDataKinds_Callable(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_CommonDataKinds_Callable(QAndroidJniObject obj);
		
		// Constructors
		ContactsContract_CommonDataKinds_Callable();
		
		// Methods
	};
} // namespace android::provider

