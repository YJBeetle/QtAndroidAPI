#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Files.def.hpp"

namespace android::provider
{
	// Fields
	
	// Constructors
	inline MediaStore_Files::MediaStore_Files()
		: JObject(
			"android.provider.MediaStore$Files",
			"()V"
		) {}
	
	// Methods
	inline android::net::Uri MediaStore_Files::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	inline android::net::Uri MediaStore_Files::getContentUri(JString arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Files",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::provider

// Base class headers

