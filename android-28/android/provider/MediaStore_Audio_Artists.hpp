#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Artists : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring ENTRY_CONTENT_TYPE();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Artists(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Artists(QJniObject obj);
		
		// Constructors
		MediaStore_Audio_Artists();
		
		// Methods
		static android::net::Uri getContentUri(jstring arg0);
	};
} // namespace android::provider

