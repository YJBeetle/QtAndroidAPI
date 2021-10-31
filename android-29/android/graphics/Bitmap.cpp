#include "./Bitmap_CompressFormat.hpp"
#include "./Bitmap_Config.hpp"
#include "./Canvas.hpp"
#include "./Color.hpp"
#include "./ColorSpace.hpp"
#include "./Matrix.hpp"
#include "./Paint.hpp"
#include "./Picture.hpp"
#include "../hardware/HardwareBuffer.hpp"
#include "../os/Parcel.hpp"
#include "../util/DisplayMetrics.hpp"
#include "../../java/io/OutputStream.hpp"
#include "../../java/nio/Buffer.hpp"
#include "./Bitmap.hpp"

namespace android::graphics
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
	
	// QAndroidJniObject forward
	Bitmap::Bitmap(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject Bitmap::createBitmap(android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::graphics::Picture arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Picture;)Landroid/graphics/Bitmap;",
			arg0.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jintArray arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"([IIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::graphics::Picture arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Picture;IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.object(),
			arg3
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;IIII)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::util::DisplayMetrics arg0, jintArray arg1, jint arg2, jint arg3, android::graphics::Bitmap_Config arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;[IIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3, jboolean arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2, jboolean arg3, android::graphics::ColorSpace arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(IILandroid/graphics/Bitmap$Config;ZLandroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0,
			arg1,
			arg2.object(),
			arg3,
			arg4.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Bitmap_Config arg5)
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
			arg5.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::util::DisplayMetrics arg0, jint arg1, jint arg2, android::graphics::Bitmap_Config arg3, jboolean arg4, android::graphics::ColorSpace arg5)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;IILandroid/graphics/Bitmap$Config;ZLandroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5.object()
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3, jint arg4, android::graphics::Matrix arg5, jboolean arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/graphics/Bitmap;IIIILandroid/graphics/Matrix;Z)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object(),
			arg6
		);
	}
	QAndroidJniObject Bitmap::createBitmap(android::util::DisplayMetrics arg0, jintArray arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::graphics::Bitmap_Config arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createBitmap",
			"(Landroid/util/DisplayMetrics;[IIIIILandroid/graphics/Bitmap$Config;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	QAndroidJniObject Bitmap::createScaledBitmap(android::graphics::Bitmap arg0, jint arg1, jint arg2, jboolean arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"createScaledBitmap",
			"(Landroid/graphics/Bitmap;IIZ)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject Bitmap::wrapHardwareBuffer(android::hardware::HardwareBuffer arg0, android::graphics::ColorSpace arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Bitmap",
			"wrapHardwareBuffer",
			"(Landroid/hardware/HardwareBuffer;Landroid/graphics/ColorSpace;)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Bitmap::compress(android::graphics::Bitmap_CompressFormat arg0, jint arg1, java::io::OutputStream arg2)
	{
		return callMethod<jboolean>(
			"compress",
			"(Landroid/graphics/Bitmap$CompressFormat;ILjava/io/OutputStream;)Z",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject Bitmap::copy(android::graphics::Bitmap_Config arg0, jboolean arg1)
	{
		return callObjectMethod(
			"copy",
			"(Landroid/graphics/Bitmap$Config;Z)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1
		);
	}
	void Bitmap::copyPixelsFromBuffer(java::nio::Buffer arg0)
	{
		callMethod<void>(
			"copyPixelsFromBuffer",
			"(Ljava/nio/Buffer;)V",
			arg0.object()
		);
	}
	void Bitmap::copyPixelsToBuffer(java::nio::Buffer arg0)
	{
		callMethod<void>(
			"copyPixelsToBuffer",
			"(Ljava/nio/Buffer;)V",
			arg0.object()
		);
	}
	jint Bitmap::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Bitmap::eraseColor(jint arg0)
	{
		callMethod<void>(
			"eraseColor",
			"(I)V",
			arg0
		);
	}
	void Bitmap::eraseColor(jlong arg0)
	{
		callMethod<void>(
			"eraseColor",
			"(J)V",
			arg0
		);
	}
	QAndroidJniObject Bitmap::extractAlpha()
	{
		return callObjectMethod(
			"extractAlpha",
			"()Landroid/graphics/Bitmap;"
		);
	}
	QAndroidJniObject Bitmap::extractAlpha(android::graphics::Paint arg0, jintArray arg1)
	{
		return callObjectMethod(
			"extractAlpha",
			"(Landroid/graphics/Paint;[I)Landroid/graphics/Bitmap;",
			arg0.object(),
			arg1
		);
	}
	jint Bitmap::getAllocationByteCount()
	{
		return callMethod<jint>(
			"getAllocationByteCount",
			"()I"
		);
	}
	jint Bitmap::getByteCount()
	{
		return callMethod<jint>(
			"getByteCount",
			"()I"
		);
	}
	QAndroidJniObject Bitmap::getColor(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getColor",
			"(II)Landroid/graphics/Color;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Bitmap::getColorSpace()
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	QAndroidJniObject Bitmap::getConfig()
	{
		return callObjectMethod(
			"getConfig",
			"()Landroid/graphics/Bitmap$Config;"
		);
	}
	jint Bitmap::getDensity()
	{
		return callMethod<jint>(
			"getDensity",
			"()I"
		);
	}
	jint Bitmap::getGenerationId()
	{
		return callMethod<jint>(
			"getGenerationId",
			"()I"
		);
	}
	jint Bitmap::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	jbyteArray Bitmap::getNinePatchChunk()
	{
		return callObjectMethod(
			"getNinePatchChunk",
			"()[B"
		).object<jbyteArray>();
	}
	jint Bitmap::getPixel(jint arg0, jint arg1)
	{
		return callMethod<jint>(
			"getPixel",
			"(II)I",
			arg0,
			arg1
		);
	}
	void Bitmap::getPixels(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		callMethod<void>(
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
		return callMethod<jint>(
			"getRowBytes",
			"()I"
		);
	}
	jint Bitmap::getScaledHeight(android::graphics::Canvas arg0)
	{
		return callMethod<jint>(
			"getScaledHeight",
			"(Landroid/graphics/Canvas;)I",
			arg0.object()
		);
	}
	jint Bitmap::getScaledHeight(android::util::DisplayMetrics arg0)
	{
		return callMethod<jint>(
			"getScaledHeight",
			"(Landroid/util/DisplayMetrics;)I",
			arg0.object()
		);
	}
	jint Bitmap::getScaledHeight(jint arg0)
	{
		return callMethod<jint>(
			"getScaledHeight",
			"(I)I",
			arg0
		);
	}
	jint Bitmap::getScaledWidth(android::graphics::Canvas arg0)
	{
		return callMethod<jint>(
			"getScaledWidth",
			"(Landroid/graphics/Canvas;)I",
			arg0.object()
		);
	}
	jint Bitmap::getScaledWidth(android::util::DisplayMetrics arg0)
	{
		return callMethod<jint>(
			"getScaledWidth",
			"(Landroid/util/DisplayMetrics;)I",
			arg0.object()
		);
	}
	jint Bitmap::getScaledWidth(jint arg0)
	{
		return callMethod<jint>(
			"getScaledWidth",
			"(I)I",
			arg0
		);
	}
	jint Bitmap::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	jboolean Bitmap::hasAlpha()
	{
		return callMethod<jboolean>(
			"hasAlpha",
			"()Z"
		);
	}
	jboolean Bitmap::hasMipMap()
	{
		return callMethod<jboolean>(
			"hasMipMap",
			"()Z"
		);
	}
	jboolean Bitmap::isMutable()
	{
		return callMethod<jboolean>(
			"isMutable",
			"()Z"
		);
	}
	jboolean Bitmap::isPremultiplied()
	{
		return callMethod<jboolean>(
			"isPremultiplied",
			"()Z"
		);
	}
	jboolean Bitmap::isRecycled()
	{
		return callMethod<jboolean>(
			"isRecycled",
			"()Z"
		);
	}
	void Bitmap::prepareToDraw()
	{
		callMethod<void>(
			"prepareToDraw",
			"()V"
		);
	}
	void Bitmap::reconfigure(jint arg0, jint arg1, android::graphics::Bitmap_Config arg2)
	{
		callMethod<void>(
			"reconfigure",
			"(IILandroid/graphics/Bitmap$Config;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	void Bitmap::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
	jboolean Bitmap::sameAs(android::graphics::Bitmap arg0)
	{
		return callMethod<jboolean>(
			"sameAs",
			"(Landroid/graphics/Bitmap;)Z",
			arg0.object()
		);
	}
	void Bitmap::setColorSpace(android::graphics::ColorSpace arg0)
	{
		callMethod<void>(
			"setColorSpace",
			"(Landroid/graphics/ColorSpace;)V",
			arg0.object()
		);
	}
	void Bitmap::setConfig(android::graphics::Bitmap_Config arg0)
	{
		callMethod<void>(
			"setConfig",
			"(Landroid/graphics/Bitmap$Config;)V",
			arg0.object()
		);
	}
	void Bitmap::setDensity(jint arg0)
	{
		callMethod<void>(
			"setDensity",
			"(I)V",
			arg0
		);
	}
	void Bitmap::setHasAlpha(jboolean arg0)
	{
		callMethod<void>(
			"setHasAlpha",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setHasMipMap(jboolean arg0)
	{
		callMethod<void>(
			"setHasMipMap",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setHeight(jint arg0)
	{
		callMethod<void>(
			"setHeight",
			"(I)V",
			arg0
		);
	}
	void Bitmap::setPixel(jint arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"setPixel",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Bitmap::setPixels(jintArray arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		callMethod<void>(
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
		callMethod<void>(
			"setPremultiplied",
			"(Z)V",
			arg0
		);
	}
	void Bitmap::setWidth(jint arg0)
	{
		callMethod<void>(
			"setWidth",
			"(I)V",
			arg0
		);
	}
	void Bitmap::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics
