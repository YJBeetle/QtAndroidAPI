#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_CarrierId : public JObject
	{
	public:
		// Fields
		static jstring CARRIER_ID();
		static jstring CARRIER_NAME();
		static android::net::Uri CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit Telephony_CarrierId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_CarrierId(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getUriForSubscriptionId(jint arg0);
	};
} // namespace android::provider

