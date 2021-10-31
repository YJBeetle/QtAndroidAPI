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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Video(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Video(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Video();
		
		// Methods
		static QAndroidJniObject query(android::content::ContentResolver arg0, android::net::Uri arg1, jarray arg2);
	};
} // namespace android::provider

