#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Artists.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_Audio_Artists::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Artists::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Artists::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaStore_Audio_Artists::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri MediaStore_Audio_Artists::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Artists",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	inline MediaStore_Audio_Artists::MediaStore_Audio_Artists()
		: JObject(
			"android.provider.MediaStore$Audio$Artists",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri MediaStore_Audio_Artists::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Artists",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
