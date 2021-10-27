#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class ContentResolver;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Video : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DEFAULT_SORT_ORDER();
		
		MediaStore_Video(QAndroidJniObject obj);
		// Constructors
		MediaStore_Video();
		
		// Methods
		static QAndroidJniObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2);
	};
} // namespace android::provider

