#include "./Image.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"
#include "./ImageReader.hpp"

namespace android::media
{
	// Fields
	
	ImageReader::ImageReader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ImageReader::newInstance(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ImageReader",
			"newInstance",
			"(IIII)Landroid/media/ImageReader;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject ImageReader::newInstance(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ImageReader",
			"newInstance",
			"(IIIIJ)Landroid/media/ImageReader;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject ImageReader::acquireLatestImage()
	{
		return __thiz.callObjectMethod(
			"acquireLatestImage",
			"()Landroid/media/Image;"
		);
	}
	QAndroidJniObject ImageReader::acquireNextImage()
	{
		return __thiz.callObjectMethod(
			"acquireNextImage",
			"()Landroid/media/Image;"
		);
	}
	void ImageReader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void ImageReader::discardFreeBuffers()
	{
		__thiz.callMethod<void>(
			"discardFreeBuffers",
			"()V"
		);
	}
	jint ImageReader::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ImageReader::getImageFormat()
	{
		return __thiz.callMethod<jint>(
			"getImageFormat",
			"()I"
		);
	}
	jint ImageReader::getMaxImages()
	{
		return __thiz.callMethod<jint>(
			"getMaxImages",
			"()I"
		);
	}
	QAndroidJniObject ImageReader::getSurface()
	{
		return __thiz.callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	jint ImageReader::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void ImageReader::setOnImageAvailableListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnImageAvailableListener",
			"(Landroid/media/ImageReader$OnImageAvailableListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::media

