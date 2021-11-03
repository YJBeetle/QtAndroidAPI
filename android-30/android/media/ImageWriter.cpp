#include "./Image.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"
#include "./ImageWriter.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	ImageWriter::ImageWriter(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::media::ImageWriter ImageWriter::newInstance(android::view::Surface arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.media.ImageWriter",
			"newInstance",
			"(Landroid/view/Surface;I)Landroid/media/ImageWriter;",
			arg0.object(),
			arg1
		);
	}
	android::media::ImageWriter ImageWriter::newInstance(android::view::Surface arg0, jint arg1, jint arg2)
	{
		return callStaticObjectMethod(
			"android.media.ImageWriter",
			"newInstance",
			"(Landroid/view/Surface;II)Landroid/media/ImageWriter;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void ImageWriter::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::media::Image ImageWriter::dequeueInputImage() const
	{
		return callObjectMethod(
			"dequeueInputImage",
			"()Landroid/media/Image;"
		);
	}
	jint ImageWriter::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint ImageWriter::getMaxImages() const
	{
		return callMethod<jint>(
			"getMaxImages",
			"()I"
		);
	}
	void ImageWriter::queueInputImage(android::media::Image arg0) const
	{
		callMethod<void>(
			"queueInputImage",
			"(Landroid/media/Image;)V",
			arg0.object()
		);
	}
	void ImageWriter::setOnImageReleasedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"setOnImageReleasedListener",
			"(Landroid/media/ImageWriter$OnImageReleasedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

