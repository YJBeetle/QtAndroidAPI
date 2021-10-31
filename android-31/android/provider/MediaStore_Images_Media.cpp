#include "../content/ContentResolver.hpp"
#include "../graphics/Bitmap.hpp"
#include "../net/Uri.hpp"
#include "./MediaStore_Images_Media.hpp"

namespace android::provider
{
	// Fields
	jstring MediaStore_Images_Media::CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"CONTENT_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring MediaStore_Images_Media::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri MediaStore_Images_Media::EXTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"EXTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri MediaStore_Images_Media::INTERNAL_CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Images$Media",
			"INTERNAL_CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QAndroidJniObject forward
	MediaStore_Images_Media::MediaStore_Images_Media(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MediaStore_Images_Media::MediaStore_Images_Media()
		: __JniBaseClass(
			"android.provider.MediaStore$Images$Media",
			"()V"
		) {}
	
	// Methods
	android::graphics::Bitmap MediaStore_Images_Media::getBitmap(android::content::ContentResolver arg0, android::net::Uri arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"getBitmap",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object()
		);
	}
	android::net::Uri MediaStore_Images_Media::getContentUri(jstring arg0)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"getContentUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	android::net::Uri MediaStore_Images_Media::getContentUri(jstring arg0, jlong arg1)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"getContentUri",
			"(Ljava/lang/String;J)Landroid/net/Uri;",
			arg0,
			arg1
		);
	}
	jstring MediaStore_Images_Media::insertImage(android::content::ContentResolver arg0, android::graphics::Bitmap arg1, jstring arg2, jstring arg3)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"insertImage",
			"(Landroid/content/ContentResolver;Landroid/graphics/Bitmap;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		).object<jstring>();
	}
	jstring MediaStore_Images_Media::insertImage(android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"insertImage",
			"(Landroid/content/ContentResolver;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		).object<jstring>();
	}
	__JniBaseClass MediaStore_Images_Media::query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	__JniBaseClass MediaStore_Images_Media::query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jstring arg4)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		);
	}
	__JniBaseClass MediaStore_Images_Media::query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5)
	{
		return callStaticObjectMethod(
			"android.provider.MediaStore$Images$Media",
			"query",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;[Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;)Landroid/database/Cursor;",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
} // namespace android::provider

