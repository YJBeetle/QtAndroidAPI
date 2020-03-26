#pragma once

#ifndef ANDROID_MEDIA_IMAGEWRITER
#define ANDROID_MEDIA_IMAGEWRITER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::media
{
	class Image;
}
namespace __jni_impl::android::os
{
	class Handler;
}

namespace __jni_impl::android::media
{
	class ImageWriter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(__jni_impl::android::view::Surface arg0, jint arg1);
		static QAndroidJniObject newInstance(__jni_impl::android::view::Surface arg0, jint arg1, jint arg2);
		void close();
		jint getFormat();
		jint getMaxImages();
		QAndroidJniObject dequeueInputImage();
		void queueInputImage(__jni_impl::android::media::Image arg0);
		void setOnImageReleasedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
	};
} // namespace __jni_impl::android::media

#include "../view/Surface.hpp"
#include "Image.hpp"
#include "../os/Handler.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void ImageWriter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.ImageWriter",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ImageWriter::newInstance(__jni_impl::android::view::Surface arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.media.ImageWriter",
			"newInstance",
			"(Landroid/view/Surface;I)Landroid/media/ImageWriter;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ImageWriter::newInstance(__jni_impl::android::view::Surface arg0, jint arg1, jint arg2)
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
	QAndroidJniObject ImageWriter::dequeueInputImage()
	{
		return __thiz.callObjectMethod(
			"dequeueInputImage",
			"()Landroid/media/Image;"
		);
	}
	void ImageWriter::queueInputImage(__jni_impl::android::media::Image arg0)
	{
		__thiz.callMethod<void>(
			"queueInputImage",
			"(Landroid/media/Image;)V",
			arg0.__jniObject().object()
		);
	}
	void ImageWriter::setOnImageReleasedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnImageReleasedListener",
			"(Landroid/media/ImageWriter$OnImageReleasedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class ImageWriter : public __jni_impl::android::media::ImageWriter
	{
	public:
		ImageWriter(QAndroidJniObject obj) { __thiz = obj; }
		ImageWriter()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_IMAGEWRITER

