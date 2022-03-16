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
		FontsContract_FontInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JArray getAxes() const;
		jint getResultCode() const;
		jint getTtcIndex() const;
		android::net::Uri getUri() const;
		jint getWeight() const;
		jboolean isItalic() const;
	};
} // namespace android::provider

