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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Telephony_CarrierId(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Telephony_CarrierId(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getSpecificCarrierIdUriForSubscriptionId(jint arg0);
		static QAndroidJniObject getUriForSubscriptionId(jint arg0);
	};
} // namespace android::provider

