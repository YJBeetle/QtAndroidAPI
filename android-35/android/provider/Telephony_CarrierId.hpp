#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_CarrierId.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Telephony_CarrierId::CARRIER_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CARRIER_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_CarrierId::CARRIER_NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CARRIER_NAME",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Telephony_CarrierId::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_CarrierId::SPECIFIC_CARRIER_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"SPECIFIC_CARRIER_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_CarrierId::SPECIFIC_CARRIER_ID_NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"SPECIFIC_CARRIER_ID_NAME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri Telephony_CarrierId::getSpecificCarrierIdUriForSubscriptionId(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$CarrierId",
			"getSpecificCarrierIdUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	inline android::net::Uri Telephony_CarrierId::getUriForSubscriptionId(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$CarrierId",
			"getUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
