#include "../../JArray.hpp"
#include "../content/ContentResolver.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BitmapFactory_Options.hpp"
#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Images_Thumbnails.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Images_Thumbnails::DATA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"DATA",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Images_Thumbnails::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Images_Thumbnails::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint MediaStore_Images_Thumbnails::FULL_SCREEN_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"FULL_SCREEN_KIND"
		);
	}
	JString MediaStore_Images_Thumbnails::HEIGHT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"HEIGHT",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Images_Thumbnails::IMAGE_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"IMAGE_ID",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Images_Thumbnails::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString MediaStore_Images_Thumbnails::KIND()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"KIND",
			"Ljava/lang/String;"
		);
	}
	jint MediaStore_Images_Thumbnails::MICRO_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"MICRO_KIND"
		);
	}
	jint MediaStore_Images_Thumbnails::MINI_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"MINI_KIND"
		);
	}
	JString MediaStore_Images_Thumbnails::THUMB_DATA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"THUMB_DATA",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Images_Thumbnails::WIDTH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"WIDTH",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	MediaStore_Images_Thumbnails::MediaStore_Images_Thumbnails(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Images_Thumbnails::MediaStore_Images_Thumbnails()
		: JObject(
			"android.provider.MediaStore$Images$Thumbnails",
			"()V"
		) {}
	
	// Methods
	void MediaStore_Images_Thumbnails::cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.provider.MediaStore$Images$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;J)V",
			arg0.object(),
			arg1
		);
	}
	void MediaStore_Images_Thumbnails::cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2)
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
	android::net::Uri MediaStore_Images_Thumbnails::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::graphics::Bitmap MediaStore_Images_Thumbnails::getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3)
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
	android::graphics::Bitmap MediaStore_Images_Thumbnails::getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4)
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
	JObject MediaStore_Images_Thumbnails::query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2)
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
	JObject MediaStore_Images_Thumbnails::queryMiniThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, JArray arg3)
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
	JObject MediaStore_Images_Thumbnails::queryMiniThumbnails(android::content::ContentResolver arg0, android::net::Uri arg1, jint arg2, JArray arg3)
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

