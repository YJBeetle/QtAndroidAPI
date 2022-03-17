#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./CallLog.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CallLog::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.CallLog",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri CallLog::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.CallLog",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	inline CallLog::CallLog()
		: JObject(
			"android.provider.CallLog",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
