#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./UserDictionary.def.hpp"

namespace android::provider
{
	// Fields
	inline JString UserDictionary::AUTHORITY()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary",
			"AUTHORITY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri UserDictionary::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.UserDictionary",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	inline UserDictionary::UserDictionary()
		: JObject(
			"android.provider.UserDictionary",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
