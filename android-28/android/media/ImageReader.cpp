#include "./Image.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"
#include "./ImageReader.hpp"

namespace android::media
{
	// Fields
	
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
	android::media::Image ImageReader::acquireLatestImage() const
	{
		return callObjectMethod(
			"acquireLatestImage",
			"()Landroid/media/Image;"
		);
	}
	android::media::Image ImageReader::acquireNextImage() const
	{
		return callObjectMethod(
			"acquireNextImage",
			"()Landroid/media/Image;"
		);
	}
	void ImageReader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void ImageReader::discardFreeBuffers() const
	{
		callMethod<void>(
			"discardFreeBuffers",
			"()V"
		);
	}
	jint ImageReader::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jint ImageReader::getImageFormat() const
	{
		return callMethod<jint>(
			"getImageFormat",
			"()I"
		);
	}
	jint ImageReader::getMaxImages() const
	{
		return callMethod<jint>(
			"getMaxImages",
			"()I"
		);
	}
	android::view::Surface ImageReader::getSurface() const
	{
		return callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	jint ImageReader::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	void ImageReader::setOnImageAvailableListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnImageAvailableListener",
			"(Landroid/media/ImageReader$OnImageAvailableListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

