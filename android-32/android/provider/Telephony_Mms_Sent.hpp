#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms_Sent.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri Telephony_Mms_Sent::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Sent",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_Mms_Sent::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Sent",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
