#pragma once

#ifndef ANDROID_GRAPHICS_IMAGEDECODER_IMAGEINFO
#define ANDROID_GRAPHICS_IMAGEDECODER_IMAGEINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class ColorSpace;
}
namespace __jni_impl::android::graphics
{
	class ImageDecoder;
}
namespace __jni_impl::android::util
{
	class Size;
}

namespace __jni_impl::android::graphics
{
	class ImageDecoder_ImageInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getColorSpace();
		jstring getMimeType();
		QAndroidJniObject getSize();
		jboolean isAnimated();
	};
} // namespace __jni_impl::android::graphics

#include "ColorSpace.hpp"
#include "ImageDecoder.hpp"
#include "../util/Size.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void ImageDecoder_ImageInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ImageDecoder$ImageInfo",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject ImageDecoder_ImageInfo::getColorSpace()
	{
		return __thiz.callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jstring ImageDecoder_ImageInfo::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject ImageDecoder_ImageInfo::getSize()
	{
		return __thiz.callObjectMethod(
			"getSize",
			"()Landroid/util/Size;"
		);
	}
	jboolean ImageDecoder_ImageInfo::isAnimated()
	{
		return __thiz.callMethod<jboolean>(
			"isAnimated",
			"()Z"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ImageDecoder_ImageInfo : public __jni_impl::android::graphics::ImageDecoder_ImageInfo
	{
	public:
		ImageDecoder_ImageInfo(QAndroidJniObject obj) { __thiz = obj; }
		ImageDecoder_ImageInfo()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_IMAGEDECODER_IMAGEINFO

