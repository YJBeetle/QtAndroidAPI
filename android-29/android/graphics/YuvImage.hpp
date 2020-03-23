#pragma once

#ifndef ANDROID_GRAPHICS_YUVIMAGE
#define ANDROID_GRAPHICS_YUVIMAGE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}

namespace __jni_impl::android::graphics
{
	class YuvImage : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jbyteArray arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		
		// Methods
		jint getWidth();
		jint getHeight();
		jboolean compressToJpeg(__jni_impl::android::graphics::Rect arg0, jint arg1, __jni_impl::java::io::OutputStream arg2);
		QAndroidJniObject getYuvData();
		jint getYuvFormat();
		QAndroidJniObject getStrides();
	};
} // namespace __jni_impl::android::graphics

#include "Rect.hpp"
#include "../../java/io/OutputStream.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void YuvImage::__constructor(jbyteArray arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.YuvImage",
			"([BIII[I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	
	// Methods
	jint YuvImage::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
	}
	jint YuvImage::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I");
	}
	jboolean YuvImage::compressToJpeg(__jni_impl::android::graphics::Rect arg0, jint arg1, __jni_impl::java::io::OutputStream arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compressToJpeg",
			"(Landroid/graphics/Rect;ILjava/io/OutputStream;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	QAndroidJniObject YuvImage::getYuvData()
	{
		return __thiz.callObjectMethod(
			"getYuvData",
			"()[B");
	}
	jint YuvImage::getYuvFormat()
	{
		return __thiz.callMethod<jint>(
			"getYuvFormat",
			"()I");
	}
	QAndroidJniObject YuvImage::getStrides()
	{
		return __thiz.callObjectMethod(
			"getStrides",
			"()[I");
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class YuvImage : public __jni_impl::android::graphics::YuvImage
	{
	public:
		YuvImage(QAndroidJniObject obj) { __thiz = obj; }
		YuvImage(jbyteArray arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_YUVIMAGE

