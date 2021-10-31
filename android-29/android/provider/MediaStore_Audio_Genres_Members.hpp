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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Genres_Members(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Genres_Members(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Audio_Genres_Members();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
	};
} // namespace android::provider

