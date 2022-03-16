#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri Telephony_Mms::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_Mms::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Telephony_Mms::REPORT_REQUEST_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms",
			"REPORT_REQUEST_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri Telephony_Mms::REPORT_STATUS_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms",
			"REPORT_STATUS_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

// Base class headers

