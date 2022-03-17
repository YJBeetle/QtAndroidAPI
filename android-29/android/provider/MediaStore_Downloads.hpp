#pragma once

#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Downloads.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_Downloads::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaStore_Downloads::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri MediaStore_Downloads::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Downloads",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::net::Uri MediaStore_Downloads::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Downloads",
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
