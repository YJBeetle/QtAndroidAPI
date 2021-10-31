#include "../content/ContentResolver.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/BitmapFactory_Options.hpp"
#include "../net/Uri.hpp"
#include "./MediaStore_Images_Thumbnails.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Images_Thumbnails::DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Images_Thumbnails::DEFAULT_SORT_ORDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Images_Thumbnails::EXTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint MediaStore_Images_Thumbnails::FULL_SCREEN_KIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"FULL_SCREEN_KIND"
		);
	}
	jstring MediaStore_Images_Thumbnails::HEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"HEIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Images_Thumbnails::IMAGE_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"IMAGE_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject MediaStore_Images_Thumbnails::INTERNAL_CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring MediaStore_Images_Thumbnails::KIND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"KIND",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint MediaStore_Images_Thumbnails::MICRO_KIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"MICRO_KIND"
		);
	}
	jint MediaStore_Images_Thumbnails::MINI_KIND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.MediaStore$Images$Thumbnails",
			"MINI_KIND"
		);
	}
	jstring MediaStore_Images_Thumbnails::THUMB_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"THUMB_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Images_Thumbnails::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.MediaStore$Images$Thumbnails",
			"WIDTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	MediaStore_Images_Thumbnails::MediaStore_Images_Thumbnails(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MediaStore_Images_Thumbnails::MediaStore_Images_Thumbnails()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Images$Thumbnails",
			"()V"
		);
	}
	
	// Methods
	void MediaStore_Images_Thumbnails::cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.MediaStore$Images$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;J)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void MediaStore_Images_Thumbnails::cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.MediaStore$Images$Thumbnails",
			"cancelThumbnailRequest",
			"(Landroid/content/ContentResolver;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject MediaStore_Images_Thumbnails::getContentUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject MediaStore_Images_Thumbnails::getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"getThumbnail",
			"(Landroid/content/ContentResolver;JILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore_Images_Thumbnails::getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"getThumbnail",
			"(Landroid/content/ContentResolver;JJILandroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject MediaStore_Images_Thumbnails::query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject MediaStore_Images_Thumbnails::queryMiniThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"queryMiniThumbnail",
			"(Landroid/content/ContentResolver;JI[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject MediaStore_Images_Thumbnails::queryMiniThumbnails(android::content::ContentResolver arg0, android::net::Uri arg1, jint arg2, jarray arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.MediaStore$Images$Thumbnails",
			"queryMiniThumbnails",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;I[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
} // namespace android::provider

