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
		static QAndroidJniObject CONTENT_MAX_DIMENSIONS_URI();
		static QAndroidJniObject CONTENT_URI();
		static jstring DISPLAY_MAX_DIM();
		static jstring THUMBNAIL_MAX_DIM();
		
		ContactsContract_DisplayPhoto(QAndroidJniObject obj);
		// Constructors
		ContactsContract_DisplayPhoto() = default;
		
		// Methods
	};
} // namespace android::provider

