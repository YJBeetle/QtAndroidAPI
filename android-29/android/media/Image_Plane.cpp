#include "../../java/nio/ByteBuffer.hpp"
#include "./Image_Plane.hpp"

namespace android::media
{
	// Fields
	
	Image_Plane::Image_Plane(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Image_Plane::getBuffer()
	{
		return __thiz.callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint Image_Plane::getPixelStride()
	{
		return __thiz.callMethod<jint>(
			"getPixelStride",
			"()I"
		);
	}
	jint Image_Plane::getRowStride()
	{
		return __thiz.callMethod<jint>(
			"getRowStride",
			"()I"
		);
	}
} // namespace android::media

