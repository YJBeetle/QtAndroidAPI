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
	class MediaStore_Video_Thumbnails : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DATA();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static jint FULL_SCREEN_KIND();
		static jstring HEIGHT();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		static jstring KIND();
		static jint MICRO_KIND();
		static jint MINI_KIND();
		static jstring VIDEO_ID();
		static jstring WIDTH();
		
		MediaStore_Video_Thumbnails(QAndroidJniObject obj);
		// Constructors
		MediaStore_Video_Thumbnails();
		
		// Methods
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1);
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2);
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3);
		static QAndroidJniObject getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4);
	};
} // namespace android::provider

