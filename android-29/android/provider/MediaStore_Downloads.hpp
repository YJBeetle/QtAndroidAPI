#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Downloads : public JObject
	{
	public:
		// Fields
		static JString CONTENT_TYPE();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Downloads(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Downloads(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getContentUri(JString arg0);
	};
} // namespace android::provider

