#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Video_Media : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		MediaStore_Video_Media(QAndroidJniObject obj);
		// Constructors
		MediaStore_Video_Media();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
	};
} // namespace android::provider

