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
		return QAndroidJniObject::getStaticField<jint>(
			"android.hardware.camera2.DngCreator",
			"MAX_THUMBNAIL_DIMENSION"
		);
	}
	
	DngCreator::DngCreator(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DngCreator::DngCreator(android::hardware::camera2::CameraCharacteristics &arg0, android::hardware::camera2::CaptureResult &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.hardware.camera2.DngCreator",
			"(Landroid/hardware/camera2/CameraCharacteristics;Landroid/hardware/camera2/CaptureResult;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void DngCreator::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject DngCreator::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/hardware/camera2/DngCreator;",
			arg0
		);
	}
	QAndroidJniObject DngCreator::setDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/String;)Landroid/hardware/camera2/DngCreator;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DngCreator::setLocation(android::location::Location arg0)
	{
		return __thiz.callObjectMethod(
			"setLocation",
			"(Landroid/location/Location;)Landroid/hardware/camera2/DngCreator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DngCreator::setOrientation(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setOrientation",
			"(I)Landroid/hardware/camera2/DngCreator;",
			arg0
		);
	}
	QAndroidJniObject DngCreator::setThumbnail(android::graphics::Bitmap arg0)
	{
		return __thiz.callObjectMethod(
			"setThumbnail",
			"(Landroid/graphics/Bitmap;)Landroid/hardware/camera2/DngCreator;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DngCreator::setThumbnail(android::media::Image arg0)
	{
		return __thiz.callObjectMethod(
			"setThumbnail",
			"(Landroid/media/Image;)Landroid/hardware/camera2/DngCreator;",
			arg0.__jniObject().object()
		);
	}
	void DngCreator::writeByteBuffer(java::io::OutputStream arg0, android::util::Size arg1, java::nio::ByteBuffer arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"writeByteBuffer",
			"(Ljava/io/OutputStream;Landroid/util/Size;Ljava/nio/ByteBuffer;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DngCreator::writeImage(java::io::OutputStream arg0, android::media::Image arg1)
	{
		__thiz.callMethod<void>(
			"writeImage",
			"(Ljava/io/OutputStream;Landroid/media/Image;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DngCreator::writeInputStream(java::io::OutputStream arg0, android::util::Size arg1, java::io::InputStream arg2, jlong arg3)
	{
		__thiz.callMethod<void>(
			"writeInputStream",
			"(Ljava/io/OutputStream;Landroid/util/Size;Ljava/io/InputStream;J)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
} // namespace android::hardware::camera2

