#include "../content/ContentResolver.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BitmapFactory_Options.hpp"
#include "../net/Uri.hpp"
#include "../util/Size.hpp"
#include "../../JString.hpp"
#include "./MediaStore_Video_Thumbnails.hpp"

namespace android::provider
{
	// Fields
	JString MediaStore_Video_Thumbnails::DATA()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"DATA",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Video_Thumbnails::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Video_Thumbnails::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint MediaStore_Video_Thumbnails::FULL_SCREEN_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Video$Thumbnails",
			"FULL_SCREEN_KIND"
		);
	}
	JString MediaStore_Video_Thumbnails::HEIGHT()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"HEIGHT",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri MediaStore_Video_Thumbnails::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString MediaStore_Video_Thumbnails::KIND()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"KIND",
			"Ljava/lang/String;"
		);
	}
	jint MediaStore_Video_Thumbnails::MICRO_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Video$Thumbnails",
			"MICRO_KIND"
		);
	}
	jint MediaStore_Video_Thumbnails::MINI_KIND()
	{
		return getStaticField<jint>(
			"android.provider.MediaStore$Video$Thumbnails",
			"MINI_KIND"
		);
	}
	JString MediaStore_Video_Thumbnails::VIDEO_ID()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"VIDEO_ID",
			"Ljava/lang/String;"
		);
	}
	JString MediaStore_Video_Thumbnails::WIDTH()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Video$Thumbnails",
			"WIDTH",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	MediaStore_Video_Thumbnails::MediaStore_Video_Thumbnails(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MediaStore_Video_Thumbnails::MediaStore_Video_Thumbnails()
		: JObject(
			"android.provider.MediaStore$Video$Thumbnails",
			"()V"
		) {}
	
	// Methods
	void MediaStore_Video_Thumbnails::cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1)
	{
		callStaticMethod<void>(
			"android.provider.MediaStore$Video$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;J)V",
			arg0.object(),
			arg1
		);
	}
	void MediaStore_Video_Thumbnails::cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2)
	{
		callStaticMethod<void>(
			"android.provider.MediaStore$Video$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;JJ)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	android::net::Uri MediaStore_Video_Thumbnails::getContentUri(JString arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video$Thumbnails",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0.object<jstring>()
		);
	}
	android::util::Size MediaStore_Video_Thumbnails::getKindSize(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video$Thumbnails",
			"getKindSize",
			"(I)Landroid/util/Size;",
			arg0
		);
	}
	android::graphics::Bitmap MediaStore_Video_Thumbnails::getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video$Thumbnails",
			"getThumbnail",
			"(Landroid/content/ContentResolver;JILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	android::graphics::Bitmap MediaStore_Video_Thumbnails::getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Video$Thumbnails",
			"getThumbnail",
			"(Landroid/content/ContentResolver;JJILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
} // namespace android::provider

