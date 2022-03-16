#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Albums.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_Audio_Albums::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Albums::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Albums::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaStore_Audio_Albums::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri MediaStore_Audio_Albums::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Albums",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	inline MediaStore_Audio_Albums::MediaStore_Audio_Albums()
		: JObject(
			"android.provider.MediaStore$Audio$Albums",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri MediaStore_Audio_Albums::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Albums",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

