#pragma once

#include "../../../JObject.hpp"

class JArray;
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
class JObject;
class JString;
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
		jboolean equals(JObject arg0);
		JArray getAxes();
		java::nio::ByteBuffer getBuffer();
		java::io::File getFile();
		android::os::LocaleList getLocaleList();
		android::graphics::fonts::FontStyle getStyle();
		jint getTtcIndex();
		jint hashCode();
		JString toString();
	};
} // namespace android::graphics::fonts

