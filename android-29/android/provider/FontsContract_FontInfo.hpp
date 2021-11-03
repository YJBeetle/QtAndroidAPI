#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class FontsContract_FontInfo : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FontsContract_FontInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontsContract_FontInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		JArray getAxes();
		jint getResultCode();
		jint getTtcIndex();
		android::net::Uri getUri();
		jint getWeight();
		jboolean isItalic();
	};
} // namespace android::provider

