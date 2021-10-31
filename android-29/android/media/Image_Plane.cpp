#include "../../java/nio/ByteBuffer.hpp"
#include "./Image_Plane.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	Image_Plane::Image_Plane(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::ByteBuffer Image_Plane::getBuffer()
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint Image_Plane::getPixelStride()
	{
		return callMethod<jint>(
			"getPixelStride",
			"()I"
		);
	}
	jint Image_Plane::getRowStride()
	{
		return callMethod<jint>(
			"getRowStride",
			"()I"
		);
	}
} // namespace android::media

