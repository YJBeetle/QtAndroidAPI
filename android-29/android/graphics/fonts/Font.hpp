#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::graphics::fonts
{
	class FontStyle;
}
namespace android::os
{
	class LocaleList;
}
namespace java::io
{
	class File;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::graphics::fonts
{
	class Font : public __JniBaseClass
	{
	public:
		// Fields
		
		Font(QAndroidJniObject obj);
		// Constructors
		Font() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jarray getAxes();
		QAndroidJniObject getBuffer();
		QAndroidJniObject getFile();
		QAndroidJniObject getLocaleList();
		QAndroidJniObject getStyle();
		jint getTtcIndex();
		jint hashCode();
		jstring toString();
	};
} // namespace android::graphics::fonts

