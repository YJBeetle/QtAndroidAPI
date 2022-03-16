#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms_Draft.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri Telephony_Sms_Draft::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Draft",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_Sms_Draft::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Draft",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

