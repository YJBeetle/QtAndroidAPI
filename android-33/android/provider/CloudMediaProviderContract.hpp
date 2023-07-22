#pragma once

#include "../../JString.hpp"
#include "./CloudMediaProviderContract.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CloudMediaProviderContract::EXTRA_ALBUM_ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"EXTRA_ALBUM_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract::EXTRA_LOOPING_PLAYBACK_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"EXTRA_LOOPING_PLAYBACK_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract::EXTRA_MEDIA_COLLECTION_ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"EXTRA_MEDIA_COLLECTION_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract::EXTRA_PAGE_TOKEN()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"EXTRA_PAGE_TOKEN",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract::EXTRA_PREVIEW_THUMBNAIL()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"EXTRA_PREVIEW_THUMBNAIL",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract::EXTRA_SURFACE_CONTROLLER_AUDIO_MUTE_ENABLED()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"EXTRA_SURFACE_CONTROLLER_AUDIO_MUTE_ENABLED",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract::EXTRA_SYNC_GENERATION()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"EXTRA_SYNC_GENERATION",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract::MANAGE_CLOUD_MEDIA_PROVIDERS_PERMISSION()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"MANAGE_CLOUD_MEDIA_PROVIDERS_PERMISSION",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract::PROVIDER_INTERFACE()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract",
			"PROVIDER_INTERFACE",
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
