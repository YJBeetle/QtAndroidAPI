#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Playlists : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONTENT_TYPE();
		static jstring DEFAULT_SORT_ORDER();
		static jstring ENTRY_CONTENT_TYPE();
		static QAndroidJniObject EXTERNAL_CONTENT_URI();
		static QAndroidJniObject INTERNAL_CONTENT_URI();
		
		MediaStore_Audio_Playlists(QAndroidJniObject obj);
		// Constructors
		MediaStore_Audio_Playlists();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0);
	};
} // namespace android::provider

