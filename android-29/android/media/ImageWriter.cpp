#include "./Image.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"
#include "./ImageWriter.hpp"

namespace android::media
{
	// Fields
	
	ImageWriter::ImageWriter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject ImageWriter::newInstance(android::view::Surface arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ImageWriter",
			"newInstance",
			"(Landroid/view/Surface;I)Landroid/media/ImageWriter;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ImageWriter::newInstance(android::view::Surface arg0, jint arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ImageWriter",
			"newInstance",
			"(Landroid/view/Surface;II)Landroid/media/ImageWriter;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void ImageWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject ImageWriter::dequeueInputImage()
	{
		return __thiz.callObjectMethod(
			"dequeueInputImage",
			"()Landroid/media/Image;"
		);
	}
	jint ImageWriter::getFormat()
	{
		return __thiz.callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	jint ImageWriter::getMaxImages()
	{
		return __thiz.callMethod<jint>(
			"getMaxImages",
			"()I"
		);
	}
	void ImageWriter::queueInputImage(android::media::Image arg0)
	{
		__thiz.callMethod<void>(
			"queueInputImage",
			"(Landroid/media/Image;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageWriter::setOnImageReleasedListener(__JniBaseClass arg0, android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnImageReleasedListener",
			"(Landroid/media/ImageWriter$OnImageReleasedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::media

