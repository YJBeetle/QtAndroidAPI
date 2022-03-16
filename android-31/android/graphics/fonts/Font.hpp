#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::graphics
{
	class Paint;
}
namespace android::graphics
{
	class Paint_FontMetrics;
}
namespace android::graphics
{
	class RectF;
}
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
		Font(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JArray getAxes() const;
		java::nio::ByteBuffer getBuffer() const;
		java::io::File getFile() const;
		jfloat getGlyphBounds(jint arg0, android::graphics::Paint arg1, android::graphics::RectF arg2) const;
		android::os::LocaleList getLocaleList() const;
		void getMetrics(android::graphics::Paint arg0, android::graphics::Paint_FontMetrics arg1) const;
		jint getSourceIdentifier() const;
		android::graphics::fonts::FontStyle getStyle() const;
		jint getTtcIndex() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::graphics::fonts

