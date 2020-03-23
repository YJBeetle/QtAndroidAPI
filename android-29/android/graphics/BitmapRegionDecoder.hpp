#pragma once

#ifndef ANDROID_GRAPHICS_BITMAPREGIONDECODER
#define ANDROID_GRAPHICS_BITMAPREGIONDECODER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics
{
	class BitmapFactory_Options;
}

namespace __jni_impl::android::graphics
{
	class BitmapRegionDecoder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject newInstance(jbyteArray arg0, jint arg1, jint arg2, jboolean arg3);
		static QAndroidJniObject newInstance(jstring arg0, jboolean arg1);
		static QAndroidJniObject newInstance(__jni_impl::java::io::InputStream arg0, jboolean arg1);
		static QAndroidJniObject newInstance(__jni_impl::java::io::FileDescriptor arg0, jboolean arg1);
		jboolean isRecycled();
		jint getWidth();
		jint getHeight();
		QAndroidJniObject decodeRegion(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::BitmapFactory_Options arg1);
		void recycle();
	};
} // namespace __jni_impl::android::graphics

#include "../../java/io/InputStream.hpp"
#include "../../java/io/FileDescriptor.hpp"
#include "Bitmap.hpp"
#include "Rect.hpp"
#include "BitmapFactory_Options.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void BitmapRegionDecoder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BitmapRegionDecoder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BitmapRegionDecoder::newInstance(jbyteArray arg0, jint arg1, jint arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"([BIIZ)Landroid/graphics/BitmapRegionDecoder;",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject BitmapRegionDecoder::newInstance(jstring arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/lang/String;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0,
			arg1);
	}
	QAndroidJniObject BitmapRegionDecoder::newInstance(__jni_impl::java::io::InputStream arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/io/InputStream;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject BitmapRegionDecoder::newInstance(__jni_impl::java::io::FileDescriptor arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.BitmapRegionDecoder",
			"newInstance",
			"(Ljava/io/FileDescriptor;Z)Landroid/graphics/BitmapRegionDecoder;",
			arg0.__jniObject().object(),
			arg1);
	}
	jboolean BitmapRegionDecoder::isRecycled()
	{
		return __thiz.callMethod<jboolean>(
			"isRecycled",
			"()Z");
	}
	jint BitmapRegionDecoder::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I");
	}
	jint BitmapRegionDecoder::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I");
	}
	QAndroidJniObject BitmapRegionDecoder::decodeRegion(__jni_impl::android::graphics::Rect arg0, __jni_impl::android::graphics::BitmapFactory_Options arg1)
	{
		return __thiz.callObjectMethod(
			"decodeRegion",
			"(Landroid/graphics/Rect;Landroid/graphics/BitmapFactory$Options;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void BitmapRegionDecoder::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V");
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class BitmapRegionDecoder : public __jni_impl::android::graphics::BitmapRegionDecoder
	{
	public:
		BitmapRegionDecoder(QAndroidJniObject obj) { __thiz = obj; }
		BitmapRegionDecoder()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BITMAPREGIONDECODER

