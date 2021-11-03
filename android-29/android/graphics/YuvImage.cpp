#include "../../JByteArray.hpp"
#include "../../JIntArray.hpp"
#include "./Rect.hpp"
#include "../../java/io/OutputStream.hpp"
#include "./YuvImage.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	YuvImage::YuvImage(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	YuvImage::YuvImage(JByteArray arg0, jint arg1, jint arg2, jint arg3, JIntArray arg4)
		: JObject(
			"android.graphics.YuvImage",
			"([BIII[I)V",
			arg0.object<jbyteArray>(),
			arg1,
			arg2,
			arg3,
			arg4.object<jintArray>()
		) {}
	
	// Methods
	jboolean YuvImage::compressToJpeg(android::graphics::Rect arg0, jint arg1, java::io::OutputStream arg2) const
	{
		return callMethod<jboolean>(
			"compressToJpeg",
			"(Landroid/graphics/Rect;ILjava/io/OutputStream;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	jint YuvImage::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JIntArray YuvImage::getStrides() const
	{
		return callObjectMethod(
			"getStrides",
			"()[I"
		);
	}
	jint YuvImage::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	JByteArray YuvImage::getYuvData() const
	{
		return callObjectMethod(
			"getYuvData",
			"()[B"
		);
	}
	jint YuvImage::getYuvFormat() const
	{
		return callMethod<jint>(
			"getYuvFormat",
			"()I"
		);
	}
} // namespace android::graphics

