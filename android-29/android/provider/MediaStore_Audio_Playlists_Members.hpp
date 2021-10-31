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
	class MediaStore_Audio_Playlists_Members : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUDIO_ID();
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PLAYLIST_ID();
		static jstring PLAY_ORDER();
		static jstring _ID();
		
		MediaStore_Audio_Playlists_Members(QAndroidJniObject obj);
		// Constructors
		MediaStore_Audio_Playlists_Members();
		
		// Methods
		static QAndroidJniObject getContentUri(jstring arg0, jlong arg1);
		static jboolean moveItem(android::content::ContentResolver arg0, jlong arg1, jint arg2, jint arg3);
	};
} // namespace android::provider

