#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class MediaStore_Files : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaStore_Files(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaStore_Files(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaStore_Files();
		
		// Methods
		static android::net::Uri getContentUri(JString arg0);
		static android::net::Uri getContentUri(JString arg0, jlong arg1);
	};
} // namespace android::provider

