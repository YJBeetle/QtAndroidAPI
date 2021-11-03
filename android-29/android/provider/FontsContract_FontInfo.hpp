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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontsContract_FontInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FontsContract_FontInfo(QAndroidJniObject obj);
		
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

