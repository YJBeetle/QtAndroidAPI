#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JIntArray;
namespace android::graphics
{
	class ColorSpace;
}
namespace android::graphics
{
	class Rect;
}
namespace java::io
{
	class OutputStream;
}

namespace android::graphics
{
	class YuvImage : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit YuvImage(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		YuvImage(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		YuvImage(JByteArray arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4);
		YuvImage(JByteArray arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4, android::graphics::ColorSpace arg5);
		
		// Methods
		jboolean compressToJpeg(android::graphics::Rect arg0, jint arg1, java::io::OutputStream arg2) const;
		jboolean compressToJpegR(android::graphics::YuvImage arg0, jint arg1, java::io::OutputStream arg2) const;
		android::graphics::ColorSpace getColorSpace() const;
		jint getHeight() const;
		JIntArray getStrides() const;
		jint getWidth() const;
		JByteArray getYuvData() const;
		jint getYuvFormat() const;
	};
} // namespace android::graphics

