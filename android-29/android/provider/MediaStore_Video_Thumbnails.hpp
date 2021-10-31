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
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static jint FULL_SCREEN_KIND();
		static jstring HEIGHT();
		static android::net::Uri INTERNAL_CONTENT_URI();
		static jstring KIND();
		static jint MICRO_KIND();
		static jint MINI_KIND();
		static jstring VIDEO_ID();
		static jstring WIDTH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Video_Thumbnails(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Video_Thumbnails(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Video_Thumbnails();
		
		// Methods
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1);
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2);
		static android::net::Uri getContentUri(jstring arg0);
		static android::graphics::Bitmap getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3);
		static android::graphics::Bitmap getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4);
	};
} // namespace android::provider

