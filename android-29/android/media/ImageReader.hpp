#pragma once

#ifndef ANDROID_MEDIA_IMAGEREADER
#define ANDROID_MEDIA_IMAGEREADER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class Image;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::view
{
	class Surface;
}

namespace __jni_impl::android::media
{
	class ImageReader : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(jint arg0, jint arg1, jint arg2, jint arg3);
		static QAndroidJniObject newInstance(jint arg0, jint arg1, jint arg2, jint arg3, jlong arg4);
		QAndroidJniObject acquireLatestImage();
		QAndroidJniObject acquireNextImage();
		void close();
		void discardFreeBuffers();
		jint getHeight();
		jint getImageFormat();
		jint getMaxImages();
		QAndroidJniObject getSurface();
		jint getWidth();
		void setOnImageAvailableListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
	};
} // namespace __jni_impl::android::media

#include "Image.hpp"
#include "../os/Handler.hpp"
#include "../view/Surface.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void ImageReader::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.ImageReader",
			"(V)V");
	}
	
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
	void ImageReader::setOnImageAvailableListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"setOnImageAvailableListener",
			"(Landroid/media/ImageReader$OnImageAvailableListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class ImageReader : public __jni_impl::android::media::ImageReader
	{
	public:
		ImageReader(QAndroidJniObject obj) { __thiz = obj; }
		ImageReader()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_IMAGEREADER

