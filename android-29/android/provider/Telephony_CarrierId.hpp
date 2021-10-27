#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_CarrierId : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CARRIER_ID();
		static jstring CARRIER_NAME();
		static QAndroidJniObject CONTENT_URI();
		static jstring SPECIFIC_CARRIER_ID();
		static jstring SPECIFIC_CARRIER_ID_NAME();
		
		Telephony_CarrierId(QAndroidJniObject obj);
		// Constructors
		Telephony_CarrierId() = default;
		
		// Methods
		static QAndroidJniObject getSpecificCarrierIdUriForSubscriptionId(jint arg0);
		static QAndroidJniObject getUriForSubscriptionId(jint arg0);
	};
} // namespace android::provider

