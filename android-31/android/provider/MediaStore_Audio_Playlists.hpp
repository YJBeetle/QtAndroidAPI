#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Playlists.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_Audio_Playlists::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Playlists::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Playlists::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"ENTRY_CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaStore_Audio_Playlists::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri MediaStore_Audio_Playlists::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Playlists",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	inline MediaStore_Audio_Playlists::MediaStore_Audio_Playlists()
		: JObject(
			"android.provider.MediaStore$Audio$Playlists",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri MediaStore_Audio_Playlists::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Playlists",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

