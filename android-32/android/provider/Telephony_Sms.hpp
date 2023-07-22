#pragma once

#include "../content/Context.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri Telephony_Sms::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_Sms::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline JString Telephony_Sms::getDefaultSmsPackage(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$Sms",
			"getDefaultSmsPackage",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
