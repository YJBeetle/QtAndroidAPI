#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::graphics
{
	class Bitmap;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Images_Media : public JObject
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Images_Media(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Images_Media(QJniObject obj);
		
		// Constructors
		MediaStore_Images_Media();
		
		// Methods
		static android::graphics::Bitmap getBitmap(android::content::ContentResolver arg0, android::net::Uri arg1);
		static android::net::Uri getContentUri(jstring arg0);
		static jstring insertImage(android::content::ContentResolver arg0, android::graphics::Bitmap arg1, jstring arg2, jstring arg3);
		static jstring insertImage(android::content::ContentResolver arg0, jstring arg1, jstring arg2, jstring arg3);
		static JObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2);
		static JObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jstring arg4);
		static JObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2, jstring arg3, jarray arg4, jstring arg5);
	};
} // namespace android::provider

