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
		
		// QJniObject forward
		template<typename ...Ts> explicit Font(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Font(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JArray getAxes() const;
		java::nio::ByteBuffer getBuffer() const;
		java::io::File getFile() const;
		android::os::LocaleList getLocaleList() const;
		android::graphics::fonts::FontStyle getStyle() const;
		jint getTtcIndex() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::graphics::fonts

