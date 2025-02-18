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
namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Images_Media : public JObject
	{
	public:
		// Fields
		static JString CONTENT_TYPE();
		static JString DEFAULT_SORT_ORDER();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Images_Media(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Images_Media(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaStore_Images_Media();
		
		// Methods
		static android::graphics::Bitmap getBitmap(android::content::ContentResolver arg0, android::net::Uri arg1);
		static android::net::Uri getContentUri(JString arg0);
		static android::net::Uri getContentUri(JString arg0, jlong arg1);
		static JString insertImage(android::content::ContentResolver arg0, android::graphics::Bitmap arg1, JString arg2, JString arg3);
		static JString insertImage(android::content::ContentResolver arg0, JString arg1, JString arg2, JString arg3);
		static JObject query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2);
		static JObject query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2, JString arg3, JString arg4);
		static JObject query(android::content::ContentResolver arg0, android::net::Uri arg1, JArray arg2, JString arg3, JArray arg4, JString arg5);
	};
} // namespace android::provider

