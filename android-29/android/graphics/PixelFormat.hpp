#pragma once

#ifndef ANDROID_GRAPHICS_PIXELFORMAT
#define ANDROID_GRAPHICS_PIXELFORMAT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class PixelFormat : public __JniBaseClass
	{
	public:
		// Fields
		static jint A_8();
		static jint JPEG();
		static jint LA_88();
		static jint L_8();
		static jint OPAQUE();
		static jint RGBA_1010102();
		static jint RGBA_4444();
		static jint RGBA_5551();
		static jint RGBA_8888();
		static jint RGBA_F16();
		static jint RGBX_8888();
		static jint RGB_332();
		static jint RGB_565();
		static jint RGB_888();
		static jint TRANSLUCENT();
		static jint TRANSPARENT();
		static jint UNKNOWN();
		static jint YCbCr_420_SP();
		static jint YCbCr_422_I();
		static jint YCbCr_422_SP();
		jint bitsPerPixel();
		jint bytesPerPixel();
		
		// Constructors
		void __constructor();
		
		// Methods
		static void getPixelFormatInfo(jint arg0, __jni_impl::android::graphics::PixelFormat arg1);
		static jboolean formatHasAlpha(jint arg0);
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	jint PixelFormat::A_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"A_8"
		);
	}
	jint PixelFormat::JPEG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"JPEG"
		);
	}
	jint PixelFormat::LA_88()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"LA_88"
		);
	}
	jint PixelFormat::L_8()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"L_8"
		);
	}
	jint PixelFormat::OPAQUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"OPAQUE"
		);
	}
	jint PixelFormat::RGBA_1010102()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_1010102"
		);
	}
	jint PixelFormat::RGBA_4444()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_4444"
		);
	}
	jint PixelFormat::RGBA_5551()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_5551"
		);
	}
	jint PixelFormat::RGBA_8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_8888"
		);
	}
	jint PixelFormat::RGBA_F16()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBA_F16"
		);
	}
	jint PixelFormat::RGBX_8888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGBX_8888"
		);
	}
	jint PixelFormat::RGB_332()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_332"
		);
	}
	jint PixelFormat::RGB_565()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_565"
		);
	}
	jint PixelFormat::RGB_888()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"RGB_888"
		);
	}
	jint PixelFormat::TRANSLUCENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"TRANSLUCENT"
		);
	}
	jint PixelFormat::TRANSPARENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"TRANSPARENT"
		);
	}
	jint PixelFormat::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"UNKNOWN"
		);
	}
	jint PixelFormat::YCbCr_420_SP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_420_SP"
		);
	}
	jint PixelFormat::YCbCr_422_I()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_422_I"
		);
	}
	jint PixelFormat::YCbCr_422_SP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.PixelFormat",
			"YCbCr_422_SP"
		);
	}
	jint PixelFormat::bitsPerPixel()
	{
		return __thiz.getField<jint>(
			"bitsPerPixel"
		);
	}
	jint PixelFormat::bytesPerPixel()
	{
		return __thiz.getField<jint>(
			"bytesPerPixel"
		);
	}
	
	// Constructors
	void PixelFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.PixelFormat",
			"()V"
		);
	}
	
	// Methods
	void PixelFormat::getPixelFormatInfo(jint arg0, __jni_impl::android::graphics::PixelFormat arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.graphics.PixelFormat",
			"getPixelFormatInfo",
			"(ILandroid/graphics/PixelFormat;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean PixelFormat::formatHasAlpha(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.graphics.PixelFormat",
			"formatHasAlpha",
			"(I)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class PixelFormat : public __jni_impl::android::graphics::PixelFormat
	{
	public:
		PixelFormat(QAndroidJniObject obj) { __thiz = obj; }
		PixelFormat()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PIXELFORMAT

