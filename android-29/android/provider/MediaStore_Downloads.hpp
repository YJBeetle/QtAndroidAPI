#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Downloads : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Downloads(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Downloads(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::net::Uri getContentUri(jstring arg0);
	};
} // namespace android::provider

