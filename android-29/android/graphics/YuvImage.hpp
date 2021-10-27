#pragma once

#include "../../__JniBaseClass.hpp"

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
	class YuvImage : public __JniBaseClass
	{
	public:
		// Fields
		
		YuvImage(QAndroidJniObject obj);
		// Constructors
		YuvImage(jbyteArray &arg0, jint &arg1, jint &arg2, jint &arg3, jintArray &arg4);
		YuvImage() = default;
		
		// Methods
		jboolean compressToJpeg(android::graphics::Rect arg0, jint arg1, java::io::OutputStream arg2);
		jint getHeight();
		jintArray getStrides();
		jint getWidth();
		jbyteArray getYuvData();
		jint getYuvFormat();
	};
} // namespace android::graphics

