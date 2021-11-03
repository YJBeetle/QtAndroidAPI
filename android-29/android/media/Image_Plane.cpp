#include "../../java/nio/ByteBuffer.hpp"
#include "./Image_Plane.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	Image_Plane::Image_Plane(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::ByteBuffer Image_Plane::getBuffer() const
	{
		return callObjectMethod(
			"getBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint Image_Plane::getPixelStride() const
	{
		return callMethod<jint>(
			"getPixelStride",
			"()I"
		);
	}
	jint Image_Plane::getRowStride() const
	{
		return callMethod<jint>(
			"getRowStride",
			"()I"
		);
	}
} // namespace android::media

