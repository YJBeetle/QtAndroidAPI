#pragma once

#include "../../JObject.hpp"

class JArray;
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
namespace android::util
{
	class Size;
}
class JString;

namespace android::provider
{
	class MediaStore_Images_Thumbnails : public JObject
	{
	public:
		// Fields
		static JString DATA();
		static JString DEFAULT_SORT_ORDER();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static jint FULL_SCREEN_KIND();
		static JString HEIGHT();
		static JString IMAGE_ID();
		static android::net::Uri INTERNAL_CONTENT_URI();
		static JString KIND();
		static jint MICRO_KIND();
		static jint MINI_KIND();
		static JString THUMB_DATA();
		static JString WIDTH();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Images_Thumbnails(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Images_Thumbnails(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaStore_Images_Thumbnails();
		
		// Methods
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1);
		static void cancelThumbnailRequest(android::content::ContentResolver arg0, jlong arg1, jlong arg2);
		static android::net::Uri getContentUri(JString arg0);
		static android::util::Size getKindSize(jint arg0);
		static android::graphics::Bitmap getThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, android::graphics::BitmapFactory_Options arg3);
		static android::graphics::Bitmap getThumbnail(android::content::ContentResolver arg0, jlong arg1, jlong arg2, jint arg3, android::graphics::BitmapFactory_Options arg4);
		static JObject query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2);
		static JObject queryMiniThumbnail(android::content::ContentResolver arg0, jlong arg1, jint arg2, JArray arg3);
		static JObject queryMiniThumbnails(android::content::ContentResolver arg0, android::net::Uri arg1, jint arg2, JArray arg3);
	};
} // namespace android::provider

