#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms_Rate.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri Telephony_Mms_Rate::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Rate",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_Mms_Rate::SENT_TIME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Rate",
			"SENT_TIME",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

