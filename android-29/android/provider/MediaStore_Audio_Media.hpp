#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Media : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring ENTRY_CONTENT_TYPE();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static jstring EXTRA_MAX_BYTES();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		static jstring RECORD_SOUND_ACTION();
		
		MediaStore_Audio_Media(QAndroidJniObject obj);
		// Constructors
		MediaStore_Audio_Media();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
		static QAndroidJniObject getContentUriForPath(jstring arg0);
	};
} // namespace android::provider

