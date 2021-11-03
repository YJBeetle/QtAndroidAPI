#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Audio_Genres_Members : public JObject
	{
	public:
		// Fields
		static JString AUDIO_ID();
		static JString CONTENT_DIRECTORY();
		static JString DEFAULT_SORT_ORDER();
		static JString GENRE_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Genres_Members(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Genres_Members(QJniObject obj);
		
		// Constructors
		MediaStore_Audio_Genres_Members();
		
		// Methods
		static android::net::Uri getContentUri(JString arg0, jlong arg1);
	};
} // namespace android::provider

