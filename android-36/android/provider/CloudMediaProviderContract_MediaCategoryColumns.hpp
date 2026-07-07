#pragma once

#include "../../JString.hpp"
#include "./CloudMediaProviderContract_MediaCategoryColumns.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CloudMediaProviderContract_MediaCategoryColumns::DISPLAY_NAME()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCategoryColumns",
			"DISPLAY_NAME",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCategoryColumns::ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCategoryColumns",
			"ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCategoryColumns::MEDIA_CATEGORY_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCategoryColumns",
			"MEDIA_CATEGORY_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCategoryColumns::MEDIA_COVER_ID1()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCategoryColumns",
			"MEDIA_COVER_ID1",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCategoryColumns::MEDIA_COVER_ID2()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCategoryColumns",
			"MEDIA_COVER_ID2",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCategoryColumns::MEDIA_COVER_ID3()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCategoryColumns",
			"MEDIA_COVER_ID3",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaCategoryColumns::MEDIA_COVER_ID4()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaCategoryColumns",
			"MEDIA_COVER_ID4",
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
