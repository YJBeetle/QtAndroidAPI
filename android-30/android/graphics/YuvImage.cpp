#include "./Rect.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./YuvImage.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	YuvImage::YuvImage(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	YuvImage::YuvImage(jbyteArray arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
		: __JniBaseClass(
			"android.graphics.YuvImage",
			"([BIII[I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jboolean YuvImage::compressToJpeg(android::graphics::Rect arg0, jint arg1, java::io::OutputStream arg2)
	{
		return callMethod<jboolean>(
			"compressToJpeg",
			"(Landroid/graphics/Rect;ILjava/io/OutputStream;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jint YuvImage::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jintArray YuvImage::getStrides()
	{
		return callObjectMethod(
			"getStrides",
			"()[I"
		).object<jintArray>();
	}
	jint YuvImage::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jbyteArray YuvImage::getYuvData()
	{
		return callObjectMethod(
			"getYuvData",
			"()[B"
		).object<jbyteArray>();
	}
	jint YuvImage::getYuvFormat()
	{
		return callMethod<jint>(
			"getYuvFormat",
			"()I"
		);
	}
} // namespace android::graphics

