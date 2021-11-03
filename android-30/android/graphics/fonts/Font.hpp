#pragma once

#include "../../../JObject.hpp"

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
	class Font : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Font(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Font(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jarray getAxes();
		java::nio::ByteBuffer getBuffer();
		java::io::File getFile();
		android::os::LocaleList getLocaleList();
		android::graphics::fonts::FontStyle getStyle();
		jint getTtcIndex();
		jint hashCode();
		jstring toString();
	};
} // namespace android::graphics::fonts

