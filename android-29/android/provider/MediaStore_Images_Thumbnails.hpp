#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::graphics
{
	class BitmapFactory_Options;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Images_Thumbnails : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DATA();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static jint FULL_SCREEN_KIND();
		static jstring HEIGHT();
		static jstring IMAGE_ID();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		static jstring KIND();
		static jint MICRO_KIND();
		static jint MINI_KIND();
		static jstring THUMB_DATA();
		static jstring WIDTH();
		
		MediaStore_Images_Thumbnails(QAndroidJniObject obj);
		// Constructors
		MediaStore_Images_Thumbnails();
		
		// Methods
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1);
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUri(const QString &arg0);
		static QAndroidJniObject getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3);
		static QAndroidJniObject getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4);
		static QAndroidJniObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2);
		static QAndroidJniObject queryMiniThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, jarray arg3);
		static QAndroidJniObject queryMiniThumbnails(android::content::ContentResolver arg0, android::net::Uri arg1, jint arg2, jarray arg3);
	};
} // namespace android::provider

