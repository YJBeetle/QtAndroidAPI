#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class MediaStore_Audio_Genres_Members : public JObject
	{
	public:
		// Fields
		static jstring AUDIO_ID();
		static jstring CONTENT_DIRECTORY();
		static jstring DEFAULT_SORT_ORDER();
		static jstring GENRE_ID();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Genres_Members(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Genres_Members(QJniObject obj);
		
		// Constructors
		MediaStore_Audio_Genres_Members();
		
		// Methods
		static android::net::Uri getContentUri(jstring arg0, jlong arg1);
	};
} // namespace android::provider

