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
		
		FontsContract_FontInfo(QAndroidJniObject obj);
		// Constructors
		FontsContract_FontInfo() = default;
		
		// Methods
		jarray getAxes();
		jint getResultCode();
		jint getTtcIndex();
		QAndroidJniObject getUri();
		jint getWeight();
		jboolean isItalic();
	};
} // namespace android::provider

