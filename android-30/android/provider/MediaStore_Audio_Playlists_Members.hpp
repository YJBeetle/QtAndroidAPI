#pragma once

#include "../../JObject.hpp"

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
	class MediaStore_Audio_Playlists_Members : public JObject
	{
	public:
		// Fields
		static jstring AUDIO_ID();
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring PLAYLIST_ID();
		static jstring PLAY_ORDER();
		static jstring _ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Playlists_Members(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Playlists_Members(QJniObject obj);
		
		// Constructors
		MediaStore_Audio_Playlists_Members();
		
		// Methods
		static android::net::Uri getContentUri(jstring arg0, jlong arg1);
		static jboolean moveItem(android::content::ContentResolver arg0, jlong arg1, jint arg2, jint arg3);
	};
} // namespace android::provider

