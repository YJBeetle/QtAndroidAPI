#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class ContactsContract_DisplayPhoto : public JObject
	{
	public:
		// Fields
		static android::net::Uri CONTENT_MAX_DIMENSIONS_URI();
		static android::net::Uri CONTENT_URI();
		static JString DISPLAY_MAX_DIM();
		static JString THUMBNAIL_MAX_DIM();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ContactsContract_DisplayPhoto(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ContactsContract_DisplayPhoto(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::provider

