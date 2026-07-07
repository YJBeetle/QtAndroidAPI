#pragma once

#include "../../JString.hpp"
#include "./CloudMediaProviderContract_SearchSuggestionColumns.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CloudMediaProviderContract_SearchSuggestionColumns::DISPLAY_TEXT()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$SearchSuggestionColumns",
			"DISPLAY_TEXT",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_SearchSuggestionColumns::MEDIA_COVER_ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$SearchSuggestionColumns",
			"MEDIA_COVER_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_SearchSuggestionColumns::MEDIA_SET_ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$SearchSuggestionColumns",
			"MEDIA_SET_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_SearchSuggestionColumns::TYPE()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$SearchSuggestionColumns",
			"TYPE",
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
