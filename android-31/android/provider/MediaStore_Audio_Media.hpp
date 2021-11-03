#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Audio_Media : public JObject
	{
	public:
		// Fields
		static JString CONTENT_TYPE();
		static JString DEFAULT_SORT_ORDER();
		static JString ENTRY_CONTENT_TYPE();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static JString EXTRA_MAX_BYTES();
		static android::net::Uri INTERNAL_CONTENT_URI();
		static JString RECORD_SOUND_ACTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Audio_Media(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Audio_Media(QJniObject obj);
		
		// Constructors
		MediaStore_Audio_Media();
		
		// Methods
		static android::net::Uri getContentUri(JString arg0);
		static android::net::Uri getContentUri(JString arg0, jlong arg1);
		static android::net::Uri getContentUriForPath(JString arg0);
	};
} // namespace android::provider

