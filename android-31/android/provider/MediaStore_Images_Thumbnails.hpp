#pragma once

#include "../../JArray.hpp"
#include "../content/ContentResolver.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/BitmapFactory_Options.def.hpp"
#include "../net/Uri.def.hpp"
#include "../util/Size.def.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Images_Thumbnails.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_Images_Thumbnails::DATA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Images_Thumbnails::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaStore_Images_Thumbnails::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline jint MediaStore_Images_Thumbnails::FULL_SCREEN_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"FULL_SCREEN_KIND"
		);
	}
	inline JString MediaStore_Images_Thumbnails::HEIGHT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"HEIGHT",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Images_Thumbnails::IMAGE_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"IMAGE_ID",
			"Ljava/lang/String;"
		);
	}
	inline android::net::Uri MediaStore_Images_Thumbnails::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	inline JString MediaStore_Images_Thumbnails::KIND()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"KIND",
			"Ljava/lang/String;"
		);
	}
	inline jint MediaStore_Images_Thumbnails::MICRO_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"MICRO_KIND"
		);
	}
	inline jint MediaStore_Images_Thumbnails::MINI_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"MINI_KIND"
		);
	}
	inline JString MediaStore_Images_Thumbnails::THUMB_DATA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"THUMB_DATA",
			"Ljava/lang/String;"
		);
	}
	inline JString MediaStore_Images_Thumbnails::WIDTH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"WIDTH",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline MediaStore_Images_Thumbnails::MediaStore_Images_Thumbnails()
		: JObject(
			"android.provider.MediaStore$Images$Thumbnails",
			"()V"
		) {}
	
	// Methods
	inline void MediaStore_Images_Thumbnails::cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.provider.MediaStore$Images$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;J)V",
			arg0.object(),
			arg1
		);
	}
	inline void MediaStore_Images_Thumbnails::cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2)
	{
		callStaticMethod<void>(
			"android.provider.MediaStore$Images$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline android::net::Uri MediaStore_Images_Thumbnails::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	inline android::util::Size MediaStore_Images_Thumbnails::getKindSize(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"getKindSize",
			"(I)Landroid/util/Size;",
			arg0
		);
	}
	inline android::graphics::Bitmap MediaStore_Images_Thumbnails::getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"getThumbnail",
			"(Landroid/content/ContentResolver;JILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline android::graphics::Bitmap MediaStore_Images_Thumbnails::getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"getThumbnail",
			"(Landroid/content/ContentResolver;JJILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	inline JObject MediaStore_Images_Thumbnails::query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2.object<jarray>()
		);
	}
	inline JObject MediaStore_Images_Thumbnails::queryMiniThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"queryMiniThumbnail",
			"(Landroid/content/ContentResolver;JI[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jarray>()
		);
	}
	inline JObject MediaStore_Images_Thumbnails::queryMiniThumbnails(android::content::ContentResolver arg0, android::net::Uri arg1, jint arg2, JArray arg3)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"queryMiniThumbnails",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;I[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jarray>()
		);
	}
} // namespace android::provider

// Base class headers

