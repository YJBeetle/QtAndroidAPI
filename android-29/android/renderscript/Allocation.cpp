#include "../content/res/Resources.hpp"
#include "../graphics/Bitmap.hpp"
#include "./Allocation_MipmapControl.hpp"
#include "./Element.hpp"
#include "./FieldPacker.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "../view/Surface.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "./Allocation.hpp"

namespace android::renderscript
{
	// Fields
	jint Allocation::USAGE_GRAPHICS_CONSTANTS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_GRAPHICS_CONSTANTS"
		);
	}
	jint Allocation::USAGE_GRAPHICS_RENDER_TARGET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_GRAPHICS_RENDER_TARGET"
		);
	}
	jint Allocation::USAGE_GRAPHICS_TEXTURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_GRAPHICS_TEXTURE"
		);
	}
	jint Allocation::USAGE_GRAPHICS_VERTEX()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_GRAPHICS_VERTEX"
		);
	}
	jint Allocation::USAGE_IO_INPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_IO_INPUT"
		);
	}
	jint Allocation::USAGE_IO_OUTPUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_IO_OUTPUT"
		);
	}
	jint Allocation::USAGE_SCRIPT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_SCRIPT"
		);
	}
	jint Allocation::USAGE_SHARED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.Allocation",
			"USAGE_SHARED"
		);
	}
	
	Allocation::Allocation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jarray Allocation::createAllocations(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createAllocations",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;II)[Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		).object<jarray>();
	}
	QAndroidJniObject Allocation::createCubemapFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Allocation::createCubemapFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Allocation::createCubemapFromCubeFaces(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::graphics::Bitmap arg2, android::graphics::Bitmap arg3, android::graphics::Bitmap arg4, android::graphics::Bitmap arg5, android::graphics::Bitmap arg6)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromCubeFaces",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object()
		);
	}
	QAndroidJniObject Allocation::createCubemapFromCubeFaces(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::graphics::Bitmap arg2, android::graphics::Bitmap arg3, android::graphics::Bitmap arg4, android::graphics::Bitmap arg5, android::graphics::Bitmap arg6, android::renderscript::Allocation_MipmapControl arg7, jint arg8)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromCubeFaces",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5.__jniObject().object(),
			arg6.__jniObject().object(),
			arg7.__jniObject().object(),
			arg8
		);
	}
	QAndroidJniObject Allocation::createFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Allocation::createFromBitmap(android::renderscript::RenderScript arg0, android::graphics::Bitmap arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	QAndroidJniObject Allocation::createFromBitmapResource(android::renderscript::RenderScript arg0, android::content::res::Resources arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmapResource",
			"(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Allocation::createFromBitmapResource(android::renderscript::RenderScript arg0, android::content::res::Resources arg1, jint arg2, android::renderscript::Allocation_MipmapControl arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmapResource",
			"(Landroid/renderscript/RenderScript;Landroid/content/res/Resources;ILandroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object(),
			arg4
		);
	}
	QAndroidJniObject Allocation::createFromString(android::renderscript::RenderScript arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromString",
			"(Landroid/renderscript/RenderScript;Ljava/lang/String;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Allocation::createSized(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createSized",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Allocation::createSized(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createSized",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;II)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject Allocation::createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Allocation::createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Allocation::createTyped(android::renderscript::RenderScript arg0, android::renderscript::Type arg1, android::renderscript::Allocation_MipmapControl arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;Landroid/renderscript/Allocation$MipmapControl;I)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFrom",
			"(II[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, jfloatArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFrom",
			"(II[F)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFrom",
			"(II[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, jshortArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFrom",
			"(II[S)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFrom",
			"(IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, android::renderscript::Allocation arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFrom",
			"(IILandroid/renderscript/Allocation;I)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(II[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, jfloatArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(II[F)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(II[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, jshortArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(II[S)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeFromUnchecked(jint arg0, jint arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeFromUnchecked",
			"(IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeTo",
			"(II[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, jfloatArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeTo",
			"(II[F)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeTo",
			"(II[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, jshortArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeTo",
			"(II[S)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeTo(jint arg0, jint arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeTo",
			"(IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, jbyteArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeToUnchecked",
			"(II[B)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, jfloatArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeToUnchecked",
			"(II[F)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, jintArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeToUnchecked",
			"(II[I)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, jshortArray arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeToUnchecked",
			"(II[S)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy1DRangeToUnchecked(jint arg0, jint arg1, jobject arg2)
	{
		__thiz.callMethod<void>(
			"copy1DRangeToUnchecked",
			"(IILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, android::graphics::Bitmap arg2)
	{
		__thiz.callMethod<void>(
			"copy2DRangeFrom",
			"(IILandroid/graphics/Bitmap;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeFrom",
			"(IIII[B)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jfloatArray arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeFrom",
			"(IIII[F)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeFrom",
			"(IIII[I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jshortArray arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeFrom",
			"(IIII[S)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jobject arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeFrom",
			"(IIIILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::Allocation arg4, jint arg5, jint arg6)
	{
		__thiz.callMethod<void>(
			"copy2DRangeFrom",
			"(IIIILandroid/renderscript/Allocation;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5,
			arg6
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeTo",
			"(IIII[B)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jfloatArray arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeTo",
			"(IIII[F)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeTo",
			"(IIII[I)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jshortArray arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeTo",
			"(IIII[S)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jobject arg4)
	{
		__thiz.callMethod<void>(
			"copy2DRangeTo",
			"(IIIILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void Allocation::copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jobject arg6)
	{
		__thiz.callMethod<void>(
			"copy3DRangeFrom",
			"(IIIIIILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void Allocation::copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, android::renderscript::Allocation arg6, jint arg7, jint arg8, jint arg9)
	{
		__thiz.callMethod<void>(
			"copy3DRangeFrom",
			"(IIIIIILandroid/renderscript/Allocation;III)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object(),
			arg7,
			arg8,
			arg9
		);
	}
	void Allocation::copy3DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jobject arg6)
	{
		__thiz.callMethod<void>(
			"copy3DRangeTo",
			"(IIIIIILjava/lang/Object;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void Allocation::copyFrom(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"([B)V",
			arg0
		);
	}
	void Allocation::copyFrom(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"([F)V",
			arg0
		);
	}
	void Allocation::copyFrom(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"([I)V",
			arg0
		);
	}
	void Allocation::copyFrom(jarray arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"([Landroid/renderscript/BaseObj;)V",
			arg0
		);
	}
	void Allocation::copyFrom(jshortArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"([S)V",
			arg0
		);
	}
	void Allocation::copyFrom(android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void Allocation::copyFrom(android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
		);
	}
	void Allocation::copyFrom(jobject arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Allocation::copyFromUnchecked(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFromUnchecked",
			"([B)V",
			arg0
		);
	}
	void Allocation::copyFromUnchecked(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFromUnchecked",
			"([F)V",
			arg0
		);
	}
	void Allocation::copyFromUnchecked(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFromUnchecked",
			"([I)V",
			arg0
		);
	}
	void Allocation::copyFromUnchecked(jshortArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFromUnchecked",
			"([S)V",
			arg0
		);
	}
	void Allocation::copyFromUnchecked(jobject arg0)
	{
		__thiz.callMethod<void>(
			"copyFromUnchecked",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Allocation::copyTo(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"([B)V",
			arg0
		);
	}
	void Allocation::copyTo(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"([F)V",
			arg0
		);
	}
	void Allocation::copyTo(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"([I)V",
			arg0
		);
	}
	void Allocation::copyTo(jshortArray arg0)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"([S)V",
			arg0
		);
	}
	void Allocation::copyTo(android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void Allocation::copyTo(jobject arg0)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"(Ljava/lang/Object;)V",
			arg0
		);
	}
	void Allocation::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void Allocation::generateMipmaps()
	{
		__thiz.callMethod<void>(
			"generateMipmaps",
			"()V"
		);
	}
	QAndroidJniObject Allocation::getByteBuffer()
	{
		return __thiz.callObjectMethod(
			"getByteBuffer",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint Allocation::getBytesSize()
	{
		return __thiz.callMethod<jint>(
			"getBytesSize",
			"()I"
		);
	}
	QAndroidJniObject Allocation::getElement()
	{
		return __thiz.callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	jlong Allocation::getStride()
	{
		return __thiz.callMethod<jlong>(
			"getStride",
			"()J"
		);
	}
	QAndroidJniObject Allocation::getSurface()
	{
		return __thiz.callObjectMethod(
			"getSurface",
			"()Landroid/view/Surface;"
		);
	}
	jlong Allocation::getTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimeStamp",
			"()J"
		);
	}
	QAndroidJniObject Allocation::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Landroid/renderscript/Type;"
		);
	}
	jint Allocation::getUsage()
	{
		return __thiz.callMethod<jint>(
			"getUsage",
			"()I"
		);
	}
	void Allocation::ioReceive()
	{
		__thiz.callMethod<void>(
			"ioReceive",
			"()V"
		);
	}
	void Allocation::ioSend()
	{
		__thiz.callMethod<void>(
			"ioSend",
			"()V"
		);
	}
	void Allocation::resize(jint arg0)
	{
		__thiz.callMethod<void>(
			"resize",
			"(I)V",
			arg0
		);
	}
	void Allocation::setAutoPadding(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoPadding",
			"(Z)V",
			arg0
		);
	}
	void Allocation::setFromFieldPacker(jint arg0, android::renderscript::FieldPacker arg1)
	{
		__thiz.callMethod<void>(
			"setFromFieldPacker",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Allocation::setFromFieldPacker(jint arg0, jint arg1, android::renderscript::FieldPacker arg2)
	{
		__thiz.callMethod<void>(
			"setFromFieldPacker",
			"(IILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Allocation::setFromFieldPacker(jint arg0, jint arg1, jint arg2, jint arg3, android::renderscript::FieldPacker arg4)
	{
		__thiz.callMethod<void>(
			"setFromFieldPacker",
			"(IIIILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object()
		);
	}
	void Allocation::setOnBufferAvailableListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnBufferAvailableListener",
			"(Landroid/renderscript/Allocation$OnBufferAvailableListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Allocation::setSurface(android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	void Allocation::syncAll(jint arg0)
	{
		__thiz.callMethod<void>(
			"syncAll",
			"(I)V",
			arg0
		);
	}
} // namespace android::renderscript

