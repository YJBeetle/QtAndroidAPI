#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_PhoneLookup : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static jstring QUERY_PARAMETER_SIP_ADDRESS();
		
		// QJniObject forward
		template<typename ...Ts> explicit ContactsContract_PhoneLookup(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_PhoneLookup(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

