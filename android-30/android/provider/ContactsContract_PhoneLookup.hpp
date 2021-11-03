#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_PhoneLookup : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_FILTER_URI();
		static android::net::Uri ENTERPRISE_CONTENT_FILTER_URI();
		static jstring QUERY_PARAMETER_SIP_ADDRESS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_PhoneLookup(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_PhoneLookup(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

