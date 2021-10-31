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
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Downloads(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Downloads(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
	};
} // namespace android::provider

