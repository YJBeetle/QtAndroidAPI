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
class JString;

namespace android::provider
{
	class MediaStore_Audio_Playlists_Members : public JObject
	{
	public:
		// Fields
		static JString AUDIO_ID();
		static JString CONTENT_DIRECTORY();
		static JString DEFAULT_SORT_ORDER();
		static JString PLAYLIST_ID();
		static JString PLAY_ORDER();
		static JString _ID();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Playlists_Members(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Playlists_Members(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Audio_Playlists_Members();
		
		// Methods
		static android::net::Uri getContentUri(JString arg0, jlong arg1);
		static jboolean moveItem(android::content::ContentResolver arg0, jlong arg1, jint arg2, jint arg3);
	};
} // namespace android::provider

