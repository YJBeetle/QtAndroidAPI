#pragma once

#include "../../JString.hpp"
#include "./CloudMediaProviderContract_MediaSetColumns.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CloudMediaProviderContract_MediaSetColumns::DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaSetColumns",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaSetColumns::ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaSetColumns",
			"ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaSetColumns::MEDIA_COUNT()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaSetColumns",
			"MEDIA_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaSetColumns::MEDIA_COVER_ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaSetColumns",
			"MEDIA_COVER_ID",
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
