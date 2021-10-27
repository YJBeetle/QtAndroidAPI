#pragma once

#ifndef ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS
#define ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Bitmap_Config;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace;
}

namespace __jni_impl::android::graphics
{
	class BitmapFactory_Options : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject inBitmap();
		jint inDensity();
		jboolean inDither();
		jboolean inInputShareable();
		jboolean inJustDecodeBounds();
		jboolean inMutable();
		jboolean inPreferQualityOverSpeed();
		QAndroidJniObject inPreferredColorSpace();
		QAndroidJniObject inPreferredConfig();
		jboolean inPremultiplied();
		jboolean inPurgeable();
		jint inSampleSize();
		jboolean inScaled();
		jint inScreenDensity();
		jint inTargetDensity();
		jbyteArray inTempStorage();
		jboolean mCancel();
		QAndroidJniObject outColorSpace();
		QAndroidJniObject outConfig();
		jint outHeight();
		jstring outMimeType();
		jint outWidth();
		
		// Constructors
		void __constructor();
		
		// Methods
		void requestCancelDecode();
	};
} // namespace __jni_impl::android::graphics

#include "Bitmap.hpp"
#include "Bitmap_Config.hpp"
#include "ColorSpace.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject BitmapFactory_Options::inBitmap()
	{
		return __thiz.getObjectField(
			"inBitmap",
			"Landroid/graphics/Bitmap;"
		);
	}
	jint BitmapFactory_Options::inDensity()
	{
		return __thiz.getField<jint>(
			"inDensity"
		);
	}
	jboolean BitmapFactory_Options::inDither()
	{
		return __thiz.getField<jboolean>(
			"inDither"
		);
	}
	jboolean BitmapFactory_Options::inInputShareable()
	{
		return __thiz.getField<jboolean>(
			"inInputShareable"
		);
	}
	jboolean BitmapFactory_Options::inJustDecodeBounds()
	{
		return __thiz.getField<jboolean>(
			"inJustDecodeBounds"
		);
	}
	jboolean BitmapFactory_Options::inMutable()
	{
		return __thiz.getField<jboolean>(
			"inMutable"
		);
	}
	jboolean BitmapFactory_Options::inPreferQualityOverSpeed()
	{
		return __thiz.getField<jboolean>(
			"inPreferQualityOverSpeed"
		);
	}
	QAndroidJniObject BitmapFactory_Options::inPreferredColorSpace()
	{
		return __thiz.getObjectField(
			"inPreferredColorSpace",
			"Landroid/graphics/ColorSpace;"
		);
	}
	QAndroidJniObject BitmapFactory_Options::inPreferredConfig()
	{
		return __thiz.getObjectField(
			"inPreferredConfig",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	jboolean BitmapFactory_Options::inPremultiplied()
	{
		return __thiz.getField<jboolean>(
			"inPremultiplied"
		);
	}
	jboolean BitmapFactory_Options::inPurgeable()
	{
		return __thiz.getField<jboolean>(
			"inPurgeable"
		);
	}
	jint BitmapFactory_Options::inSampleSize()
	{
		return __thiz.getField<jint>(
			"inSampleSize"
		);
	}
	jboolean BitmapFactory_Options::inScaled()
	{
		return __thiz.getField<jboolean>(
			"inScaled"
		);
	}
	jint BitmapFactory_Options::inScreenDensity()
	{
		return __thiz.getField<jint>(
			"inScreenDensity"
		);
	}
	jint BitmapFactory_Options::inTargetDensity()
	{
		return __thiz.getField<jint>(
			"inTargetDensity"
		);
	}
	jbyteArray BitmapFactory_Options::inTempStorage()
	{
		return __thiz.getObjectField(
			"inTempStorage",
			"[B"
		).object<jbyteArray>();
	}
	jboolean BitmapFactory_Options::mCancel()
	{
		return __thiz.getField<jboolean>(
			"mCancel"
		);
	}
	QAndroidJniObject BitmapFactory_Options::outColorSpace()
	{
		return __thiz.getObjectField(
			"outColorSpace",
			"Landroid/graphics/ColorSpace;"
		);
	}
	QAndroidJniObject BitmapFactory_Options::outConfig()
	{
		return __thiz.getObjectField(
			"outConfig",
			"Landroid/graphics/Bitmap$Config;"
		);
	}
	jint BitmapFactory_Options::outHeight()
	{
		return __thiz.getField<jint>(
			"outHeight"
		);
	}
	jstring BitmapFactory_Options::outMimeType()
	{
		return __thiz.getObjectField(
			"outMimeType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint BitmapFactory_Options::outWidth()
	{
		return __thiz.getField<jint>(
			"outWidth"
		);
	}
	
	// Constructors
	void BitmapFactory_Options::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.BitmapFactory$Options",
			"()V"
		);
	}
	
	// Methods
	void BitmapFactory_Options::requestCancelDecode()
	{
		__thiz.callMethod<void>(
			"requestCancelDecode",
			"()V"
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class BitmapFactory_Options : public __jni_impl::android::graphics::BitmapFactory_Options
	{
	public:
		BitmapFactory_Options(QAndroidJniObject obj) { __thiz = obj; }
		BitmapFactory_Options()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BITMAPFACTORY_OPTIONS

