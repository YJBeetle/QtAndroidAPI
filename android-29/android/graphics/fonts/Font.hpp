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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Font(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Font(QAndroidJniObject obj);
		
		// Constructors
		
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

