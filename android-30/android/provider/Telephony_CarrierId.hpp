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
		static jstring SPECIFIC_CARRIER_ID();
		static jstring SPECIFIC_CARRIER_ID_NAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_CarrierId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_CarrierId(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getSpecificCarrierIdUriForSubscriptionId(jint arg0);
		static android::net::Uri getUriForSubscriptionId(jint arg0);
	};
} // namespace android::provider

