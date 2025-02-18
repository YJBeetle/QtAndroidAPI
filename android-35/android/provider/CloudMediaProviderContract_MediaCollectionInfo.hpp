#pragma once

#include "../../JString.hpp"
#include "./CloudMediaProviderContract_MediaCollectionInfo.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CloudMediaProviderContract_MediaCollectionInfo::ACCOUNT_CONFIGURATION_INTENT()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCollectionInfo",
			"ACCOUNT_CONFIGURATION_INTENT",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCollectionInfo::ACCOUNT_NAME()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCollectionInfo",
			"ACCOUNT_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCollectionInfo::LAST_MEDIA_SYNC_GENERATION()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCollectionInfo",
			"LAST_MEDIA_SYNC_GENERATION",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCollectionInfo::MEDIA_COLLECTION_ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCollectionInfo",
			"MEDIA_COLLECTION_ID",
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
