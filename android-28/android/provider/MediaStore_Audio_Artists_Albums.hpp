#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Audio_Artists_Albums.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline MediaStore_Audio_Artists_Albums::MediaStore_Audio_Artists_Albums()
		: JObject(
			"android.provider.MediaStore$Audio$Artists$Albums",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri MediaStore_Audio_Artists_Albums::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Audio$Artists$Albums",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

// Base class headers

