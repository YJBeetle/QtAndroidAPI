#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Genres_Members : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUDIO_ID();
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring GENRE_ID();
		
		MediaStore_Audio_Genres_Members(QAndroidJniObject obj);
		// Constructors
		MediaStore_Audio_Genres_Members();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
	};
} // namespace android::provider

