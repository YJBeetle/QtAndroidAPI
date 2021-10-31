#include "./Image.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"
#include "./ImageReader.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	ImageReader::ImageReader(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::media::ImageReader ImageReader::newInstance(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"android.media.ImageReader",
			"newInstance",
			"(IIII)Landroid/media/ImageReader;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::media::ImageReader ImageReader::newInstance(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4)
	{
		return callStaticObjectMethod(
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
	android::media::Image ImageReader::acquireLatestImage()
	{
		return callObjectMethod(
			"acquireLatestImage",
			"()Landroid/media/Image;"
		);
	}
	android::media::Image ImageReader::acquireNextImage()
	{
		return callObjectMethod(
			"acquireNextImage",
			"()Landroid/media/Image;"
		);
	}
	void ImageReader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ImageReader::discardFreeBuffers()
	{
		callMethod<void>(
			"discardFreeBuffers",
			"()V"
		);
	}
	jint ImageReader::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ImageReader::getImageFormat()
	{
		return callMethod<jint>(
			"getImageFormat",
			"()I"
		);
	}
	jint ImageReader::getMaxImages()
	{
		return callMethod<jint>(
			"getMaxImages",
			"()I"
		);
	}
	android::view::Surface ImageReader::getSurface()
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	jint ImageReader::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void ImageReader::setOnImageAvailableListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnImageAvailableListener",
			"(Landroid/media/ImageReader$OnImageAvailableListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

