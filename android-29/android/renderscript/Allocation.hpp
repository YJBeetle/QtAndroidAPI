#pragma once

#ifndef ANDROID_RENDERSCRIPT_ALLOCATION
#define ANDROID_RENDERSCRIPT_ALLOCATION

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Type;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}
namespace __jni_impl::android::renderscript
{
	class FieldPacker;
}
namespace __jni_impl::android::renderscript
{
	class Allocation_MipmapControl;
}
namespace __jni_impl::android::view
{
	class Surface;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}

namespace __jni_impl::android::renderscript
{
	class Allocation : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		static jint USAGE_GRAPHICS_CONSTANTS();
		static jint USAGE_GRAPHICS_RENDER_TARGET();
		static jint USAGE_GRAPHICS_TEXTURE();
		static jint USAGE_GRAPHICS_VERTEX();
		static jint USAGE_IO_INPUT();
		static jint USAGE_IO_OUTPUT();
		static jint USAGE_SCRIPT();
		static jint USAGE_SHARED();
		
		// Constructors
		void __constructor();
		
		// Methods
		void destroy();
		QAndroidJniObject getType();
		void syncAll(jint arg0);
		QAndroidJniObject getByteBuffer();
		void resize(jint arg0);
		void copyFrom(__jni_impl::android::graphics::Bitmap arg0);
		void copyFrom(jfloatArray arg0);
		void copyFrom(jbyteArray arg0);
		void copyFrom(jshortArray arg0);
		void copyFrom(jintArray arg0);
		void copyFrom(jobject arg0);
		void copyFrom(__jni_impl::android::renderscript::Allocation arg0);
		void copyFrom(jarray arg0);
		QAndroidJniObject getElement();
		jint getUsage();
		void setAutoPadding(jboolean arg0);
		jint getBytesSize();
		void ioSend();
		void ioReceive();
		void copyFromUnchecked(jobject arg0);
		void copyFromUnchecked(jfloatArray arg0);
		void copyFromUnchecked(jbyteArray arg0);
		void copyFromUnchecked(jshortArray arg0);
		void copyFromUnchecked(jintArray arg0);
		void setFromFieldPacker(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::FieldPacker arg4);
		void setFromFieldPacker(jint arg0, __jni_impl::android::renderscript::FieldPacker arg1);
		void setFromFieldPacker(jint arg0, jint arg1, __jni_impl::android::renderscript::FieldPacker arg2);
		void generateMipmaps();
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jfloatArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jobject arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jintArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jbyteArray arg2);
		void copy1DRangeFromUnchecked(jint arg0, jint arg1, jshortArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3);
		void copy1DRangeFrom(jint arg0, jint arg1, jintArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, jshortArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, jbyteArray arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, jobject arg2);
		void copy1DRangeFrom(jint arg0, jint arg1, jfloatArray arg2);
		void copy2DRangeFrom(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap arg2);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jobject arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jfloatArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jshortArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4);
		void copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, jint arg6);
		void copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7, jint arg8, jint arg9);
		void copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jobject arg6);
		void copyTo(__jni_impl::android::graphics::Bitmap arg0);
		void copyTo(jfloatArray arg0);
		void copyTo(jbyteArray arg0);
		void copyTo(jobject arg0);
		void copyTo(jintArray arg0);
		void copyTo(jshortArray arg0);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jobject arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jfloatArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jintArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jshortArray arg2);
		void copy1DRangeToUnchecked(jint arg0, jint arg1, jbyteArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jfloatArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jbyteArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jintArray arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jobject arg2);
		void copy1DRangeTo(jint arg0, jint arg1, jshortArray arg2);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jfloatArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jobject arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jbyteArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jshortArray arg4);
		void copy2DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jintArray arg4);
		void copy3DRangeTo(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jobject arg6);
		static QAndroidJniObject createTyped(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Type arg1, __jni_impl::android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		static QAndroidJniObject createTyped(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Type arg1, jint arg2);
		static QAndroidJniObject createTyped(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Type arg1);
		static QAndroidJniObject createSized(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2, jint arg3);
		static QAndroidJniObject createSized(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2);
		static QAndroidJniObject createFromBitmap(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1);
		static QAndroidJniObject createFromBitmap(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		static jarray createAllocations(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Type arg1, jint arg2, jint arg3);
		jlong getStride();
		jlong getTimeStamp();
		QAndroidJniObject getSurface();
		void setSurface(__jni_impl::android::view::Surface arg0);
		static QAndroidJniObject createCubemapFromBitmap(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1);
		static QAndroidJniObject createCubemapFromBitmap(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::android::renderscript::Allocation_MipmapControl arg2, jint arg3);
		static QAndroidJniObject createCubemapFromCubeFaces(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::android::graphics::Bitmap arg3, __jni_impl::android::graphics::Bitmap arg4, __jni_impl::android::graphics::Bitmap arg5, __jni_impl::android::graphics::Bitmap arg6, __jni_impl::android::renderscript::Allocation_MipmapControl arg7, jint arg8);
		static QAndroidJniObject createCubemapFromCubeFaces(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::android::graphics::Bitmap arg3, __jni_impl::android::graphics::Bitmap arg4, __jni_impl::android::graphics::Bitmap arg5, __jni_impl::android::graphics::Bitmap arg6);
		static QAndroidJniObject createFromBitmapResource(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::content::res::Resources arg1, jint arg2);
		static QAndroidJniObject createFromBitmapResource(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::content::res::Resources arg1, jint arg2, __jni_impl::android::renderscript::Allocation_MipmapControl arg3, jint arg4);
		static QAndroidJniObject createFromString(__jni_impl::android::renderscript::RenderScript arg0, jstring arg1, jint arg2);
		void setOnBufferAvailableListener(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Type.hpp"
#include "../../java/nio/ByteBuffer.hpp"
#include "../graphics/Bitmap.hpp"
#include "Element.hpp"
#include "FieldPacker.hpp"
#include "Allocation_MipmapControl.hpp"
#include "../view/Surface.hpp"
#include "../content/res/Resources.hpp"

namespace __jni_impl::android::renderscript
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
	
	// Constructors
	void Allocation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Allocation",
			"(V)V");
	}
	
	// Methods
	void Allocation::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	QAndroidJniObject Allocation::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Landroid/renderscript/Type;"
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
	QAndroidJniObject Allocation::getByteBuffer()
	{
		return __thiz.callObjectMethod(
			"getByteBuffer",
			"()Ljava/nio/ByteBuffer;"
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
	void Allocation::copyFrom(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
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
	void Allocation::copyFrom(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"([B)V",
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
	void Allocation::copyFrom(jintArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"([I)V",
			arg0
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
	void Allocation::copyFrom(__jni_impl::android::renderscript::Allocation arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object()
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
	QAndroidJniObject Allocation::getElement()
	{
		return __thiz.callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	jint Allocation::getUsage()
	{
		return __thiz.callMethod<jint>(
			"getUsage",
			"()I"
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
	jint Allocation::getBytesSize()
	{
		return __thiz.callMethod<jint>(
			"getBytesSize",
			"()I"
		);
	}
	void Allocation::ioSend()
	{
		__thiz.callMethod<void>(
			"ioSend",
			"()V"
		);
	}
	void Allocation::ioReceive()
	{
		__thiz.callMethod<void>(
			"ioReceive",
			"()V"
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
	void Allocation::copyFromUnchecked(jfloatArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFromUnchecked",
			"([F)V",
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
	void Allocation::copyFromUnchecked(jshortArray arg0)
	{
		__thiz.callMethod<void>(
			"copyFromUnchecked",
			"([S)V",
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
	void Allocation::setFromFieldPacker(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::FieldPacker arg4)
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
	void Allocation::setFromFieldPacker(jint arg0, __jni_impl::android::renderscript::FieldPacker arg1)
	{
		__thiz.callMethod<void>(
			"setFromFieldPacker",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Allocation::setFromFieldPacker(jint arg0, jint arg1, __jni_impl::android::renderscript::FieldPacker arg2)
	{
		__thiz.callMethod<void>(
			"setFromFieldPacker",
			"(IILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Allocation::generateMipmaps()
	{
		__thiz.callMethod<void>(
			"generateMipmaps",
			"()V"
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
	void Allocation::copy1DRangeFrom(jint arg0, jint arg1, __jni_impl::android::renderscript::Allocation arg2, jint arg3)
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
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, __jni_impl::android::graphics::Bitmap arg2)
	{
		__thiz.callMethod<void>(
			"copy2DRangeFrom",
			"(IILandroid/graphics/Bitmap;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
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
	void Allocation::copy2DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, __jni_impl::android::renderscript::Allocation arg4, jint arg5, jint arg6)
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
	void Allocation::copy3DRangeFrom(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, __jni_impl::android::renderscript::Allocation arg6, jint arg7, jint arg8, jint arg9)
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
	void Allocation::copyTo(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
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
	void Allocation::copyTo(jbyteArray arg0)
	{
		__thiz.callMethod<void>(
			"copyTo",
			"([B)V",
			arg0
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
	QAndroidJniObject Allocation::createTyped(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Type arg1, __jni_impl::android::renderscript::Allocation_MipmapControl arg2, jint arg3)
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
	QAndroidJniObject Allocation::createTyped(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Type arg1, jint arg2)
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
	QAndroidJniObject Allocation::createTyped(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Type arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Type;)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Allocation::createSized(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2, jint arg3)
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
	QAndroidJniObject Allocation::createSized(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1, jint arg2)
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
	QAndroidJniObject Allocation::createFromBitmap(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Allocation::createFromBitmap(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::android::renderscript::Allocation_MipmapControl arg2, jint arg3)
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
	jarray Allocation::createAllocations(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Type arg1, jint arg2, jint arg3)
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
	jlong Allocation::getStride()
	{
		return __thiz.callMethod<jlong>(
			"getStride",
			"()J"
		);
	}
	jlong Allocation::getTimeStamp()
	{
		return __thiz.callMethod<jlong>(
			"getTimeStamp",
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
	void Allocation::setSurface(__jni_impl::android::view::Surface arg0)
	{
		__thiz.callMethod<void>(
			"setSurface",
			"(Landroid/view/Surface;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Allocation::createCubemapFromBitmap(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Allocation",
			"createCubemapFromBitmap",
			"(Landroid/renderscript/RenderScript;Landroid/graphics/Bitmap;)Landroid/renderscript/Allocation;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Allocation::createCubemapFromBitmap(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::android::renderscript::Allocation_MipmapControl arg2, jint arg3)
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
	QAndroidJniObject Allocation::createCubemapFromCubeFaces(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::android::graphics::Bitmap arg3, __jni_impl::android::graphics::Bitmap arg4, __jni_impl::android::graphics::Bitmap arg5, __jni_impl::android::graphics::Bitmap arg6, __jni_impl::android::renderscript::Allocation_MipmapControl arg7, jint arg8)
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
	QAndroidJniObject Allocation::createCubemapFromCubeFaces(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::graphics::Bitmap arg1, __jni_impl::android::graphics::Bitmap arg2, __jni_impl::android::graphics::Bitmap arg3, __jni_impl::android::graphics::Bitmap arg4, __jni_impl::android::graphics::Bitmap arg5, __jni_impl::android::graphics::Bitmap arg6)
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
	QAndroidJniObject Allocation::createFromBitmapResource(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::content::res::Resources arg1, jint arg2)
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
	QAndroidJniObject Allocation::createFromBitmapResource(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::content::res::Resources arg1, jint arg2, __jni_impl::android::renderscript::Allocation_MipmapControl arg3, jint arg4)
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
	QAndroidJniObject Allocation::createFromString(__jni_impl::android::renderscript::RenderScript arg0, jstring arg1, jint arg2)
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
	void Allocation::setOnBufferAvailableListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setOnBufferAvailableListener",
			"(Landroid/renderscript/Allocation$OnBufferAvailableListener;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Allocation : public __jni_impl::android::renderscript::Allocation
	{
	public:
		Allocation(QAndroidJniObject obj) { __thiz = obj; }
		Allocation()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_ALLOCATION

