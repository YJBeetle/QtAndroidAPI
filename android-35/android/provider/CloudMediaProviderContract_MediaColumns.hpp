#pragma once

#include "../../JString.hpp"
#include "./CloudMediaProviderContract_MediaColumns.def.hpp"

namespace android::provider
{
	// Fields
	inline JString CloudMediaProviderContract_MediaColumns::DATE_TAKEN_MILLIS()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"DATE_TAKEN_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::DURATION_MILLIS()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"DURATION_MILLIS",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::HEIGHT()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::ID()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"ID",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::IS_FAVORITE()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"IS_FAVORITE",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::MEDIA_STORE_URI()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"MEDIA_STORE_URI",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::MIME_TYPE()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"MIME_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::ORIENTATION()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"ORIENTATION",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::SIZE_BYTES()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"SIZE_BYTES",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::STANDARD_MIME_TYPE_EXTENSION()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"STANDARD_MIME_TYPE_EXTENSION",
			"Ljava/lang/String;"
		);
	}
	inline jint CloudMediaProviderContract_MediaColumns::STANDARD_MIME_TYPE_EXTENSION_ANIMATED_WEBP()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"STANDARD_MIME_TYPE_EXTENSION_ANIMATED_WEBP"
		);
	}
	inline jint CloudMediaProviderContract_MediaColumns::STANDARD_MIME_TYPE_EXTENSION_GIF()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"STANDARD_MIME_TYPE_EXTENSION_GIF"
		);
	}
	inline jint CloudMediaProviderContract_MediaColumns::STANDARD_MIME_TYPE_EXTENSION_MOTION_PHOTO()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"STANDARD_MIME_TYPE_EXTENSION_MOTION_PHOTO"
		);
	}
	inline jint CloudMediaProviderContract_MediaColumns::STANDARD_MIME_TYPE_EXTENSION_NONE()
	{
		return getStaticField<jint>(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"STANDARD_MIME_TYPE_EXTENSION_NONE"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::SYNC_GENERATION()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"SYNC_GENERATION",
			"Ljava/lang/String;"
		);
	}
	inline JString CloudMediaProviderContract_MediaColumns::WIDTH()
	{
		return getStaticObjectField(
			"android.provider.CloudMediaProviderContract$MediaColumns",
			"WIDTH",
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
