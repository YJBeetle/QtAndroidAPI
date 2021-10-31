#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Albums : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring ENTRY_CONTENT_TYPE();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Albums(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Albums(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Audio_Albums();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
	};
} // namespace android::provider

