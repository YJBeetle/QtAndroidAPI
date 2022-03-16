#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Genres_Members.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_Audio_Genres_Members::AUDIO_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"AUDIO_ID",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Genres_Members::CONTENT_DIRECTORY()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"CONTENT_DIRECTORY",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Genres_Members::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Audio_Genres_Members::GENRE_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Genres$Members",
			"GENRE_ID",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MediaStore_Audio_Genres_Members::MediaStore_Audio_Genres_Members()
		: JObject(
			"android.provider.MediaStore$Audio$Genres$Members",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri MediaStore_Audio_Genres_Members::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Genres$Members",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

// Base class headers

