#pragma once

#ifndef ANDROID_GRAPHICS_BITMAP
#define ANDROID_GRAPHICS_BITMAP

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap_CompressFormat;
}
namespace __jni_impl::android::graphics
{
	class Bitmap_Config;
}
namespace __jni_impl::android::graphics
{
	class Canvas;
}
namespace __jni_impl::android::graphics
{
	class Color;
}
namespace __jni_impl::android::graphics
{
	class ColorSpace;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Paint;
}
namespace __jni_impl::android::graphics
{
	class Picture;
}
namespace __jni_impl::android::hardware
{
	class HardwareBuffer;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::util
{
	class DisplayMetrics;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::nio
{
	class Buffer;
}

namespace __jni_impl::android::graphics
{
	class Bitmap : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint DENSITY_NONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject createBitmap(__jni_impl::android::graphics::Bitmap arg0);
		static QAndroidJniObject createBitmap(__jni_impl::android::graphics::Picture arg0);
		static QAndroidJniObject createBitmap(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap_Config arg2);
		static QAndroidJniObject createBitmap(jintArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3);
		static QAndroidJniObject createBitmap(__jni_impl::android::graphics::Picture arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3);
		static QAndroidJniObject createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3);
		static QAndroidJniObject createBitmap(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap_Config arg2, jboolean arg3);
		static QAndroidJniObject createBitmap(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		static QAndroidJniObject createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jintArray arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Bitmap_Config arg4);
		static QAndroidJniObject createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3, jboolean arg4);
		static QAndroidJniObject createBitmap(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap_Config arg2, jboolean arg3, __jni_impl::android::graphics::ColorSpace arg4);
		static QAndroidJniObject createBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Bitmap_Config arg5);
		static QAndroidJniObject createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3, jboolean arg4, __jni_impl::android::graphics::ColorSpace arg5);
		static QAndroidJniObject createBitmap(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Matrix arg5, jboolean arg6);
		static QAndroidJniObject createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jintArray arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::android::graphics::Bitmap_Config arg6);
		static QAndroidJniObject createScaledBitmap(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jboolean arg3);
		static QAndroidJniObject wrapHardwareBuffer(__jni_impl::android::hardware::HardwareBuffer arg0, __jni_impl::android::graphics::ColorSpace arg1);
		jboolean compress(__jni_impl::android::graphics::Bitmap_CompressFormat arg0, jint arg1, __jni_impl::java::io::OutputStream arg2);
		QAndroidJniObject copy(__jni_impl::android::graphics::Bitmap_Config arg0, jboolean arg1);
		void copyPixelsFromBuffer(__jni_impl::java::nio::Buffer arg0);
		void copyPixelsToBuffer(__jni_impl::java::nio::Buffer arg0);
		jint describeContents();
		void eraseColor(jint arg0);
		void eraseColor(jlong arg0);
		QAndroidJniObject extractAlpha();
		QAndroidJniObject extractAlpha(__jni_impl::android::graphics::Paint arg0, jintArray arg1);
		jint getAllocationByteCount();
		jint getByteCount();
		QAndroidJniObject getColor(jint arg0, jint arg1);
		QAndroidJniObject getColorSpace();
		QAndroidJniObject getConfig();
		jint getDensity();
		jint getGenerationId();
		jint getHeight();
		jbyteArray getNinePatchChunk();
		jint getPixel(jint arg0, jint arg1);
		void getPixels(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		jint getRowBytes();
		jint getScaledHeight(__jni_impl::android::graphics::Canvas arg0);
		jint getScaledHeight(__jni_impl::android::util::DisplayMetrics arg0);
		jint getScaledHeight(jint arg0);
		jint getScaledWidth(__jni_impl::android::graphics::Canvas arg0);
		jint getScaledWidth(__jni_impl::android::util::DisplayMetrics arg0);
		jint getScaledWidth(jint arg0);
		jint getWidth();
		jboolean hasAlpha();
		jboolean hasMipMap();
		jboolean isMutable();
		jboolean isPremultiplied();
		jboolean isRecycled();
		void prepareToDraw();
		void reconfigure(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap_Config arg2);
		void recycle();
		jboolean sameAs(__jni_impl::android::graphics::Bitmap arg0);
		void setColorSpace(__jni_impl::android::graphics::ColorSpace arg0);
		void setConfig(__jni_impl::android::graphics::Bitmap_Config arg0);
		void setDensity(jint arg0);
		void setHasAlpha(jboolean arg0);
		void setHasMipMap(jboolean arg0);
		void setHeight(jint arg0);
		void setPixel(jint arg0, jint arg1, jint arg2);
		void setPixels(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		void setPremultiplied(jboolean arg0);
		void setWidth(jint arg0);
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::graphics

#include "Bitmap_CompressFormat.hpp"
#include "Bitmap_Config.hpp"
#include "Canvas.hpp"
#include "Color.hpp"
#include "ColorSpace.hpp"
#include "Matrix.hpp"
#include "Paint.hpp"
#include "Picture.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "../os/Parcel.hpp"
#include "../util/DisplayMetrics.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/nio/Buffer.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Bitmap::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Bitmap",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Bitmap::DENSITY_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.graphics.Bitmap",
			"DENSITY_NONE"
		);
	}
	
	// Constructors
	void Bitmap::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Bitmap",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::graphics::Picture arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Picture;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap_Config arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jintArray arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"([IIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::graphics::Picture arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Picture;IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap_Config arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;IIII)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jintArray arg1, jint arg2, jint arg3, __jni_impl::android::graphics::Bitmap_Config arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;[IIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3, jboolean arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap_Config arg2, jboolean arg3, __jni_impl::android::graphics::ColorSpace arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;ZLandroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Bitmap_Config arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"([IIIIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jint arg1, jint arg2, __jni_impl::android::graphics::Bitmap_Config arg3, jboolean arg4, __jni_impl::android::graphics::ColorSpace arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;ZLandroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object(),
			arg4,
			arg5.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::graphics::Matrix arg5, jboolean arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;IIIILandroid/graphics/Matrix;Z)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object(),
			arg6
		);
	}
	QAndroidJniObject Bitmap::createBitmap(__jni_impl::android::util::DisplayMetrics arg0, jintArray arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::android::graphics::Bitmap_Config arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;[IIIIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::createScaledBitmap(__jni_impl::android::graphics::Bitmap arg0, jint arg1, jint arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createScaledBitmap",
			"(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Bitmap::wrapHardwareBuffer(__jni_impl::android::hardware::HardwareBuffer arg0, __jni_impl::android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"wrapHardwareBuffer",
			"(Landroid/hardware/HardwareBuffer;Landroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Bitmap::compress(__jni_impl::android::graphics::Bitmap_CompressFormat arg0, jint arg1, __jni_impl::java::io::OutputStream arg2)
	{
		return __thiz.callMethod<jboolean>(
			"compress",
			"(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Bitmap::copy(__jni_impl::android::graphics::Bitmap_Config arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"copy",
			"(Landroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Bitmap::copyPixelsFromBuffer(__jni_impl::java::nio::Buffer arg0)
	{
		__thiz.callMethod<void>(
			"copyPixelsFromBuffer",
			"(Ljava/nio/Buffer;)V",
			arg0.__jniObject().object()
		);
	}
	void Bitmap::copyPixelsToBuffer(__jni_impl::java::nio::Buffer arg0)
	{
		__thiz.callMethod<void>(
			"copyPixelsToBuffer",
			"(Ljava/nio/Buffer;)V",
			arg0.__jniObject().object()
		);
	}
	jint Bitmap::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Bitmap::eraseColor(jint arg0)
	{
		__thiz.callMethod<void>(
			"eraseColor",
			"(I)V",
			arg0
		);
	}
	void Bitmap::eraseColor(jlong arg0)
	{
		__thiz.callMethod<void>(
			"eraseColor",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject Bitmap::extractAlpha()
	{
		return __thiz.callObjectMethod(
			"extractAlpha",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject Bitmap::extractAlpha(__jni_impl::android::graphics::Paint arg0, jintArray arg1)
	{
		return __thiz.callObjectMethod(
			"extractAlpha",
			"(Landroid/graphics/Paint;[I)Landroid/graphics/Bitmap;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jint Bitmap::getAllocationByteCount()
	{
		return __thiz.callMethod<jint>(
			"getAllocationByteCount",
			"()I"
		);
	}
	jint Bitmap::getByteCount()
	{
		return __thiz.callMethod<jint>(
			"getByteCount",
			"()I"
		);
	}
	QAndroidJniObject Bitmap::getColor(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getColor",
			"(II)Landroid/graphics/Color;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Bitmap::getColorSpace()
	{
		return __thiz.callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	QAndroidJniObject Bitmap::getConfig()
	{
		return __thiz.callObjectMethod(
			"getConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	jint Bitmap::getDensity()
	{
		return __thiz.callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	jint Bitmap::getGenerationId()
	{
		return __thiz.callMethod<jint>(
			"getGenerationId",
			"()I"
		);
	}
	jint Bitmap::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jbyteArray Bitmap::getNinePatchChunk()
	{
		return __thiz.callObjectMethod(
			"getNinePatchChunk",
			"()[B"
		).object<jbyteArray>();
	}
	jint Bitmap::getPixel(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"getPixel",
			"(II)I",
			arg0,
			arg1
		);
	}
	void Bitmap::getPixels(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"getPixels",
			"([IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	jint Bitmap::getRowBytes()
	{
		return __thiz.callMethod<jint>(
			"getRowBytes",
			"()I"
		);
	}
	jint Bitmap::getScaledHeight(__jni_impl::android::graphics::Canvas arg0)
	{
		return __thiz.callMethod<jint>(
			"getScaledHeight",
			"(Landroid/graphics/Canvas;)I",
			arg0.__jniObject().object()
		);
	}
	jint Bitmap::getScaledHeight(__jni_impl::android::util::DisplayMetrics arg0)
	{
		return __thiz.callMethod<jint>(
			"getScaledHeight",
			"(Landroid/util/DisplayMetrics;)I",
			arg0.__jniObject().object()
		);
	}
	jint Bitmap::getScaledHeight(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getScaledHeight",
			"(I)I",
			arg0
		);
	}
	jint Bitmap::getScaledWidth(__jni_impl::android::graphics::Canvas arg0)
	{
		return __thiz.callMethod<jint>(
			"getScaledWidth",
			"(Landroid/graphics/Canvas;)I",
			arg0.__jniObject().object()
		);
	}
	jint Bitmap::getScaledWidth(__jni_impl::android::util::DisplayMetrics arg0)
	{
		return __thiz.callMethod<jint>(
			"getScaledWidth",
			"(Landroid/util/DisplayMetrics;)I",
			arg0.__jniObject().object()
		);
	}
	jint Bitmap::getScaledWidth(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getScaledWidth",
			"(I)I",
			arg0
		);
	}
	jint Bitmap::getWidth()
	{
		return __thiz.callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Bitmap::hasAlpha()
	{
		return __thiz.callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	jboolean Bitmap::hasMipMap()
	{
		return __thiz.callMethod<jboolean>(
			"hasMipMap",
			"()Z"
		);
	}
	jboolean Bitmap::isMutable()
	{
		return __thiz.callMethod<jboolean>(
			"isMutable",
			"()Z"
		);
	}
	jboolean Bitmap::isPremultiplied()
	{
		return __thiz.callMethod<jboolean>(
			"isPremultiplied",
			"()Z"
		);
	}
	jboolean Bitmap::isRecycled()
	{
		return __thiz.callMethod<jboolean>(
			"isRecycled",
			"()Z"
		);
	}
	void Bitmap::prepareToDraw()
	{
		__thiz.callMethod<void>(
			"prepareToDraw",
			"()V"
		);
	}
	void Bitmap::reconfigure(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap_Config arg2)
	{
		__thiz.callMethod<void>(
			"reconfigure",
			"(IILandroid/graphics/Bitmap$Config;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Bitmap::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jboolean Bitmap::sameAs(__jni_impl::android::graphics::Bitmap arg0)
	{
		return __thiz.callMethod<jboolean>(
			"sameAs",
			"(Landroid/graphics/Bitmap;)Z",
			arg0.__jniObject().object()
		);
	}
	void Bitmap::setColorSpace(__jni_impl::android::graphics::ColorSpace arg0)
	{
		__thiz.callMethod<void>(
			"setColorSpace",
			"(Landroid/graphics/ColorSpace;)V",
			arg0.__jniObject().object()
		);
	}
	void Bitmap::setConfig(__jni_impl::android::graphics::Bitmap_Config arg0)
	{
		__thiz.callMethod<void>(
			"setConfig",
			"(Landroid/graphics/Bitmap$Config;)V",
			arg0.__jniObject().object()
		);
	}
	void Bitmap::setDensity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setDensity",
			"(I)V",
			arg0
		);
	}
	void Bitmap::setHasAlpha(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHasAlpha",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setHasMipMap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setHasMipMap",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void Bitmap::setPixel(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"setPixel",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Bitmap::setPixels(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"setPixels",
			"([IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void Bitmap::setPremultiplied(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setPremultiplied",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	void Bitmap::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Bitmap : public __jni_impl::android::graphics::Bitmap
	{
	public:
		Bitmap(QAndroidJniObject obj) { __thiz = obj; }
		Bitmap()
		{
			__constructor();
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_BITMAP

