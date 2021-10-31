#include "./Image.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"
#include "./ImageWriter.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	ImageWriter::ImageWriter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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
	void ImageWriter::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	android::media::Image ImageWriter::dequeueInputImage()
	{
		return callObjectMethod(
			"dequeueInputImage",
			"()Landroid/media/Image;"
		);
	}
	jint ImageWriter::getFormat()
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint ImageWriter::getMaxImages()
	{
		return callMethod<jint>(
			"getMaxImages",
			"()I"
		);
	}
	void ImageWriter::queueInputImage(android::media::Image arg0)
	{
		callMethod<void>(
			"queueInputImage",
			"(Landroid/media/Image;)V",
			arg0.object()
		);
	}
	void ImageWriter::setOnImageReleasedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		callMethod<void>(
			"setOnImageReleasedListener",
			"(Landroid/media/ImageWriter$OnImageReleasedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::media

