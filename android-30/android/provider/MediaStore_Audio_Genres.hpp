#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Audio_Genres : public JObject
	{
	public:
		// Fields
		static JString CONTENT_TYPE();
		static JString DEFAULT_SORT_ORDER();
		static JString ENTRY_CONTENT_TYPE();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Genres(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Genres(QAndroidJniObject obj);
		
		// Constructors
		MediaStore_Audio_Genres();
		
		// Methods
		static android::net::Uri getContentUri(JString arg0);
		static android::net::Uri getContentUriForAudioId(JString arg0, jint arg1);
	};
} // namespace android::provider

