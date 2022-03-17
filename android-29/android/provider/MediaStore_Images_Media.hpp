#pragma once

#include "../../JArray.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../net/Uri.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Images_Media.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_Images_Media::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Images_Media::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaStore_Images_Media::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline android::net::Uri MediaStore_Images_Media::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	inline MediaStore_Images_Media::MediaStore_Images_Media()
		: JObject(
			"android.provider.MediaStore$Images$Media",
			"()V"
		) {}
	
	// Methods
	inline android::graphics::Bitmap MediaStore_Images_Media::getBitmap(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"getBitmap",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::Uri MediaStore_Images_Media::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	inline JString MediaStore_Images_Media::insertImage(android::content::ContentResolver arg0, android::graphics::Bitmap arg1, JString arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"insertImage",
			"(Landroid/content/ContentResolver;Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline JString MediaStore_Images_Media::insertImage(android::content::ContentResolver arg0, JString arg1, JString arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"insertImage",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
	inline JObject MediaStore_Images_Media::query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline JObject MediaStore_Images_Media::query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2, JString arg3, JString arg4)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	inline JObject MediaStore_Images_Media::query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2, JString arg3, JArray arg4, JString arg5)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>(),
			arg3.object<jstring>(),
			arg4.object<jarray>(),
			arg5.object<jstring>()
		);
	}
} // namespace android::provider

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
