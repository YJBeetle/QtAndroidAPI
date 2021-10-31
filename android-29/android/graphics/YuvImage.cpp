#include "./Rect.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./YuvImage.hpp"

namespace android::graphics
{
	// Fields
	
	YuvImage::YuvImage(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	YuvImage::YuvImage(jbyteArray arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.YuvImage",
			"([BIII[I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jboolean YuvImage::compressToJpeg(android::graphics::Rect arg0, jint arg1, java::io::OutputStream arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compressToJpeg",
			"(Landroid/graphics/Rect;ILjava/io/OutputStream;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	jint YuvImage::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jintArray YuvImage::getStrides()
	{
		return __thiz.callObjectMethod(
			"getStrides",
			"()[I"
		).object<jintArray>();
	}
	jint YuvImage::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jbyteArray YuvImage::getYuvData()
	{
		return __thiz.callObjectMethod(
			"getYuvData",
			"()[B"
		).object<jbyteArray>();
	}
	jint YuvImage::getYuvFormat()
	{
		return __thiz.callMethod<jint>(
			"getYuvFormat",
			"()I"
		);
	}
} // namespace android::graphics

