#pragma once

#include "../../JString.hpp"
#include "./CloudMediaProviderContract_AlbumColumns.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CloudMediaProviderContract_AlbumColumns::DATE_TAKEN_MILLIS()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$AlbumColumns",
			"DATE_TAKEN_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_AlbumColumns::DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$AlbumColumns",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_AlbumColumns::ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$AlbumColumns",
			"ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_AlbumColumns::MEDIA_COUNT()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$AlbumColumns",
			"MEDIA_COUNT",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_AlbumColumns::MEDIA_COVER_ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$AlbumColumns",
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
