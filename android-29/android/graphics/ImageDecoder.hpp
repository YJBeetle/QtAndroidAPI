#pragma once

#ifndef ANDROID_GRAPHICS_IMAGEDECODER
#define ANDROID_GRAPHICS_IMAGEDECODER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class ImageDecoder_Source;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::android::content::res
{
	class AssetManager;
}
namespace __jni_impl::android::content
{
	class ContentResolver;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}

namespace __jni_impl::android::graphics
{
	class ImageDecoder : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALLOCATOR_DEFAULT();
		static jint ALLOCATOR_HARDWARE();
		static jint ALLOCATOR_SHARED_MEMORY();
		static jint ALLOCATOR_SOFTWARE();
		static jint MEMORY_POLICY_DEFAULT();
		static jint MEMORY_POLICY_LOW_RAM();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		static jboolean isMimeTypeSupported(jstring arg0);
		static QAndroidJniObject createSource(__jni_impl::java::nio::ByteBuffer arg0);
		static QAndroidJniObject createSource(__jni_impl::java::io::File arg0);
		static QAndroidJniObject createSource(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject createSource(__jni_impl::android::content::res::AssetManager arg0, jstring arg1);
		static QAndroidJniObject createSource(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1);
		static QAndroidJniObject createSource(__jni_impl::android::content::res::Resources arg0, jint arg1);
		void setTargetSize(jint arg0, jint arg1);
		void setTargetSampleSize(jint arg0);
		void setAllocator(jint arg0);
		jint getAllocator();
		void setUnpremultipliedRequired(jboolean arg0);
		jboolean isUnpremultipliedRequired();
		void setPostProcessor(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getPostProcessor();
		void setOnPartialImageListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getOnPartialImageListener();
		void setCrop(__jni_impl::android::graphics::Rect arg0);
		QAndroidJniObject getCrop();
		void setMutableRequired(jboolean arg0);
		jboolean isMutableRequired();
		void setMemorySizePolicy(jint arg0);
		jint getMemorySizePolicy();
		void setDecodeAsAlphaMaskEnabled(jboolean arg0);
		jboolean isDecodeAsAlphaMaskEnabled();
		void setTargetColorSpace(__jni_impl::android::graphics::ColorSpace arg0);
		static QAndroidJniObject decodeDrawable(__jni_impl::android::graphics::ImageDecoder_Source arg0);
		static QAndroidJniObject decodeDrawable(__jni_impl::android::graphics::ImageDecoder_Source arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject decodeBitmap(__jni_impl::android::graphics::ImageDecoder_Source arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject decodeBitmap(__jni_impl::android::graphics::ImageDecoder_Source arg0);
	};
} // namespace __jni_impl::android::graphics

#include "ImageDecoder_Source.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../../java/io/File.hpp"
#include "../content/res/AssetManager.hpp"
#include "../content/ContentResolver.hpp"
#include "../net/Uri.hpp"
#include "../content/res/Resources.hpp"
#include "Rect.hpp"
#include "ColorSpace.hpp"
#include "drawable/Drawable.hpp"
#include "Bitmap.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	jint ImageDecoder::ALLOCATOR_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_DEFAULT"
		);
	}
	jint ImageDecoder::ALLOCATOR_HARDWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_HARDWARE"
		);
	}
	jint ImageDecoder::ALLOCATOR_SHARED_MEMORY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_SHARED_MEMORY"
		);
	}
	jint ImageDecoder::ALLOCATOR_SOFTWARE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"ALLOCATOR_SOFTWARE"
		);
	}
	jint ImageDecoder::MEMORY_POLICY_DEFAULT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"MEMORY_POLICY_DEFAULT"
		);
	}
	jint ImageDecoder::MEMORY_POLICY_LOW_RAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.ImageDecoder",
			"MEMORY_POLICY_LOW_RAM"
		);
	}
	
	// Constructors
	void ImageDecoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ImageDecoder",
			"(V)V");
	}
	
	// Methods
	void ImageDecoder::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean ImageDecoder::isMimeTypeSupported(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.ImageDecoder",
			"isMimeTypeSupported",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	QAndroidJniObject ImageDecoder::createSource(__jni_impl::java::nio::ByteBuffer arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/nio/ByteBuffer;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(__jni_impl::java::io::File arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/io/File;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Ljava/util/concurrent/Callable;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(__jni_impl::android::content::res::AssetManager arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/res/AssetManager;Ljava/lang/String;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject ImageDecoder::createSource(__jni_impl::android::content::ContentResolver arg0, __jni_impl::android::net::Uri arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/ContentResolver;Landroid/net/Uri;)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::createSource(__jni_impl::android::content::res::Resources arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"createSource",
			"(Landroid/content/res/Resources;I)Landroid/graphics/ImageDecoder$Source;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void ImageDecoder::setTargetSize(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setTargetSize",
			"(II)V",
			arg0,
			arg1
		);
	}
	void ImageDecoder::setTargetSampleSize(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTargetSampleSize",
			"(I)V",
			arg0
		);
	}
	void ImageDecoder::setAllocator(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAllocator",
			"(I)V",
			arg0
		);
	}
	jint ImageDecoder::getAllocator()
	{
		return __thiz.callMethod<jint>(
			"getAllocator",
			"()I"
		);
	}
	void ImageDecoder::setUnpremultipliedRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setUnpremultipliedRequired",
			"(Z)V",
			arg0
		);
	}
	jboolean ImageDecoder::isUnpremultipliedRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isUnpremultipliedRequired",
			"()Z"
		);
	}
	void ImageDecoder::setPostProcessor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setPostProcessor",
			"(Landroid/graphics/PostProcessor;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::getPostProcessor()
	{
		return __thiz.callObjectMethod(
			"getPostProcessor",
			"()Landroid/graphics/PostProcessor;"
		);
	}
	void ImageDecoder::setOnPartialImageListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnPartialImageListener",
			"(Landroid/graphics/ImageDecoder$OnPartialImageListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::getOnPartialImageListener()
	{
		return __thiz.callObjectMethod(
			"getOnPartialImageListener",
			"()Landroid/graphics/ImageDecoder$OnPartialImageListener;"
		);
	}
	void ImageDecoder::setCrop(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setCrop",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::getCrop()
	{
		return __thiz.callObjectMethod(
			"getCrop",
			"()Landroid/graphics/Rect;"
		);
	}
	void ImageDecoder::setMutableRequired(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMutableRequired",
			"(Z)V",
			arg0
		);
	}
	jboolean ImageDecoder::isMutableRequired()
	{
		return __thiz.callMethod<jboolean>(
			"isMutableRequired",
			"()Z"
		);
	}
	void ImageDecoder::setMemorySizePolicy(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMemorySizePolicy",
			"(I)V",
			arg0
		);
	}
	jint ImageDecoder::getMemorySizePolicy()
	{
		return __thiz.callMethod<jint>(
			"getMemorySizePolicy",
			"()I"
		);
	}
	void ImageDecoder::setDecodeAsAlphaMaskEnabled(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDecodeAsAlphaMaskEnabled",
			"(Z)V",
			arg0
		);
	}
	jboolean ImageDecoder::isDecodeAsAlphaMaskEnabled()
	{
		return __thiz.callMethod<jboolean>(
			"isDecodeAsAlphaMaskEnabled",
			"()Z"
		);
	}
	void ImageDecoder::setTargetColorSpace(__jni_impl::android::graphics::ColorSpace arg0)
	{
		__thiz.callMethod<void>(
			"setTargetColorSpace",
			"(Landroid/graphics/ColorSpace;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::decodeDrawable(__jni_impl::android::graphics::ImageDecoder_Source arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeDrawable",
			"(Landroid/graphics/ImageDecoder$Source;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::decodeDrawable(__jni_impl::android::graphics::ImageDecoder_Source arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeDrawable",
			"(Landroid/graphics/ImageDecoder$Source;Landroid/graphics/ImageDecoder$OnHeaderDecodedListener;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::decodeBitmap(__jni_impl::android::graphics::ImageDecoder_Source arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeBitmap",
			"(Landroid/graphics/ImageDecoder$Source;Landroid/graphics/ImageDecoder$OnHeaderDecodedListener;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ImageDecoder::decodeBitmap(__jni_impl::android::graphics::ImageDecoder_Source arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.ImageDecoder",
			"decodeBitmap",
			"(Landroid/graphics/ImageDecoder$Source;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ImageDecoder : public __jni_impl::android::graphics::ImageDecoder
	{
	public:
		ImageDecoder(QAndroidJniObject obj) { __thiz = obj; }
		ImageDecoder()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_IMAGEDECODER

