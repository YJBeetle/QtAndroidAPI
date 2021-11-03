#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Video_Media : public JObject
	{
	public:
		// Fields
		static JString CONTENT_TYPE();
		static JString DEFAULT_SORT_ORDER();
		static android::net::Uri EXTERNAL_CONTENT_URI();
		static android::net::Uri INTERNAL_CONTENT_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Video_Media(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Video_Media(QJniObject obj);
		
		// Constructors
		MediaStore_Video_Media();
		
		// Methods
		static android::net::Uri getContentUri(JString arg0);
		static android::net::Uri getContentUri(JString arg0, jlong arg1);
	};
} // namespace android::provider

