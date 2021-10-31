#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class FontsContract_FontInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FontsContract_FontInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FontsContract_FontInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jarray getAxes();
		jint getResultCode();
		jint getTtcIndex();
		QAndroidJniObject getUri();
		jint getWeight();
		jboolean isItalic();
	};
} // namespace android::provider

