#include "../../graphics/Bitmap.hpp"
#include "./CameraCharacteristics.hpp"
#include "./CaptureResult.hpp"
#include "../../location/Location.hpp"
#include "../../media/Image.hpp"
#include "../../util/Size.hpp"
#include "../../../java/io/InputStream.hpp"
#include "../../../java/io/OutputStream.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./DngCreator.hpp"

namespace android::hardware::camera2
{
	// Fields
	jint DngCreator::MAX_THUMBNAIL_DIMENSION()
	{
		return getStaticField<jint>(
			"android.hardware.camera2.DngCreator",
			"MAX_THUMBNAIL_DIMENSION"
		);
	}
	
	// QAndroidJniObject forward
	DngCreator::DngCreator(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	DngCreator::DngCreator(android::hardware::camera2::CameraCharacteristics arg0, android::hardware::camera2::CaptureResult arg1)
		: JObject(
			"android.hardware.camera2.DngCreator",
			"(Landroid/hardware/camera2/CameraCharacteristics;Landroid/hardware/camera2/CaptureResult;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	void DngCreator::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::hardware::camera2::DngCreator DngCreator::setDescription(jstring arg0)
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/hardware/camera2/DngCreator;",
			arg0
		);
	}
	android::hardware::camera2::DngCreator DngCreator::setLocation(android::location::Location arg0)
	{
		return callObjectMethod(
			"setLocation",
			"(Landroid/location/Location;)Landroid/hardware/camera2/DngCreator;",
			arg0.object()
		);
	}
	android::hardware::camera2::DngCreator DngCreator::setOrientation(jint arg0)
	{
		return callObjectMethod(
			"setOrientation",
			"(I)Landroid/hardware/camera2/DngCreator;",
			arg0
		);
	}
	android::hardware::camera2::DngCreator DngCreator::setThumbnail(android::graphics::Bitmap arg0)
	{
		return callObjectMethod(
			"setThumbnail",
			"(Landroid/graphics/Bitmap;)Landroid/hardware/camera2/DngCreator;",
			arg0.object()
		);
	}
	android::hardware::camera2::DngCreator DngCreator::setThumbnail(android::media::Image arg0)
	{
		return callObjectMethod(
			"setThumbnail",
			"(Landroid/media/Image;)Landroid/hardware/camera2/DngCreator;",
			arg0.object()
		);
	}
	void DngCreator::writeByteBuffer(java::io::OutputStream arg0, android::util::Size arg1, java::nio::ByteBuffer arg2, jlong arg3)
	{
		callMethod<void>(
			"writeByteBuffer",
			"(Ljava/io/OutputStream;Landroid/util/Size;Ljava/nio/ByteBuffer;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
	void DngCreator::writeImage(java::io::OutputStream arg0, android::media::Image arg1)
	{
		callMethod<void>(
			"writeImage",
			"(Ljava/io/OutputStream;Landroid/media/Image;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void DngCreator::writeInputStream(java::io::OutputStream arg0, android::util::Size arg1, java::io::InputStream arg2, jlong arg3)
	{
		callMethod<void>(
			"writeInputStream",
			"(Ljava/io/OutputStream;Landroid/util/Size;Ljava/io/InputStream;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
} // namespace android::hardware::camera2

