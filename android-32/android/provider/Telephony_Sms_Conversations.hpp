#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms_Conversations.def.hpp"

namespace android::provider
{
	// Fields
	inline android::net::Uri Telephony_Sms_Conversations::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Telephony_Sms_Conversations::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Conversations::MESSAGE_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"MESSAGE_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Sms_Conversations::SNIPPET()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"SNIPPET",
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
