#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class ContactsContract_DisplayPhoto : public __JniBaseClass
	{
	public:
		// Fields
		static android::net::Uri CONTENT_MAX_DIMENSIONS_URI();
		static android::net::Uri CONTENT_URI();
		static jstring DISPLAY_MAX_DIM();
		static jstring THUMBNAIL_MAX_DIM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_DisplayPhoto(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_DisplayPhoto(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

