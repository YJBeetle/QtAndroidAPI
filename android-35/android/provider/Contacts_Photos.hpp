#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./Contacts_Photos.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Contacts_Photos::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri Contacts_Photos::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString Contacts_Photos::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Contacts$Photos",
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
