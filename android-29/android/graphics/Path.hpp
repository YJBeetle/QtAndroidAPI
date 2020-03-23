#pragma once

#ifndef ANDROID_GRAPHICS_PATH
#define ANDROID_GRAPHICS_PATH

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Path_Op;
}
namespace __jni_impl::android::graphics
{
	class Path_FillType;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::graphics
{
	class Path_Direction;
}

namespace __jni_impl::android::graphics
{
	class Path : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::graphics::Path arg0);
		
		// Methods
		jboolean isEmpty();
		void offset(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Path arg2);
		void offset(jfloat arg0, jfloat arg1);
		void transform(__jni_impl::android::graphics::Matrix arg0);
		void transform(__jni_impl::android::graphics::Matrix arg0, __jni_impl::android::graphics::Path arg1);
		void set(__jni_impl::android::graphics::Path arg0);
		void close();
		void reset();
		void rewind();
		jboolean op(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path arg1, __jni_impl::android::graphics::Path_Op arg2);
		jboolean op(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path_Op arg1);
		jboolean isConvex();
		QAndroidJniObject getFillType();
		void setFillType(__jni_impl::android::graphics::Path_FillType arg0);
		jboolean isInverseFillType();
		void toggleInverseFillType();
		jboolean isRect(__jni_impl::android::graphics::RectF arg0);
		void computeBounds(__jni_impl::android::graphics::RectF arg0, jboolean arg1);
		void incReserve(jint arg0);
		void moveTo(jfloat arg0, jfloat arg1);
		void rMoveTo(jfloat arg0, jfloat arg1);
		void lineTo(jfloat arg0, jfloat arg1);
		void rLineTo(jfloat arg0, jfloat arg1);
		void quadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void rQuadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void cubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void rCubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void arcTo(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		void arcTo(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2);
		void arcTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6);
		void addRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Path_Direction arg1);
		void addRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Path_Direction arg4);
		void addOval(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Path_Direction arg1);
		void addOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Path_Direction arg4);
		void addCircle(jfloat arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Path_Direction arg3);
		void addArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void addArc(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2);
		void addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloatArray arg4, __jni_impl::android::graphics::Path_Direction arg5);
		void addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Path_Direction arg6);
		void addRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Path_Direction arg3);
		void addRoundRect(__jni_impl::android::graphics::RectF arg0, jfloatArray arg1, __jni_impl::android::graphics::Path_Direction arg2);
		void addPath(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2);
		void addPath(__jni_impl::android::graphics::Path arg0);
		void addPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Matrix arg1);
		void setLastPoint(jfloat arg0, jfloat arg1);
		QAndroidJniObject approximate(jfloat arg0);
	};
} // namespace __jni_impl::android::graphics

#include "Matrix.hpp"
#include "Path_Op.hpp"
#include "Path_FillType.hpp"
#include "RectF.hpp"
#include "Path_Direction.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Path::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Path",
			"()V");
	}
	void Path::__constructor(__jni_impl::android::graphics::Path arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Path",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean Path::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	void Path::offset(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Path arg2)
	{
		__thiz.callMethod<void>(
			"offset",
			"(FFLandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void Path::offset(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1);
	}
	void Path::transform(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object());
	}
	void Path::transform(__jni_impl::android::graphics::Matrix arg0, __jni_impl::android::graphics::Path arg1)
	{
		__thiz.callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;Landroid/graphics/Path;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Path::set(__jni_impl::android::graphics::Path arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object());
	}
	void Path::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void Path::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	void Path::rewind()
	{
		__thiz.callMethod<void>(
			"rewind",
			"()V");
	}
	jboolean Path::op(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path arg1, __jni_impl::android::graphics::Path_Op arg2)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Path;Landroid/graphics/Path;Landroid/graphics/Path$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	jboolean Path::op(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path_Op arg1)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Path;Landroid/graphics/Path$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	jboolean Path::isConvex()
	{
		return __thiz.callMethod<jboolean>(
			"isConvex",
			"()Z");
	}
	QAndroidJniObject Path::getFillType()
	{
		return __thiz.callObjectMethod(
			"getFillType",
			"()Landroid/graphics/Path$FillType;");
	}
	void Path::setFillType(__jni_impl::android::graphics::Path_FillType arg0)
	{
		__thiz.callMethod<void>(
			"setFillType",
			"(Landroid/graphics/Path$FillType;)V",
			arg0.__jniObject().object());
	}
	jboolean Path::isInverseFillType()
	{
		return __thiz.callMethod<jboolean>(
			"isInverseFillType",
			"()Z");
	}
	void Path::toggleInverseFillType()
	{
		__thiz.callMethod<void>(
			"toggleInverseFillType",
			"()V");
	}
	jboolean Path::isRect(__jni_impl::android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object());
	}
	void Path::computeBounds(__jni_impl::android::graphics::RectF arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"computeBounds",
			"(Landroid/graphics/RectF;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void Path::incReserve(jint arg0)
	{
		__thiz.callMethod<void>(
			"incReserve",
			"(I)V",
			arg0);
	}
	void Path::moveTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"moveTo",
			"(FF)V",
			arg0,
			arg1);
	}
	void Path::rMoveTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"rMoveTo",
			"(FF)V",
			arg0,
			arg1);
	}
	void Path::lineTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"lineTo",
			"(FF)V",
			arg0,
			arg1);
	}
	void Path::rLineTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"rLineTo",
			"(FF)V",
			arg0,
			arg1);
	}
	void Path::quadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"quadTo",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Path::rQuadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"rQuadTo",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void Path::cubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		__thiz.callMethod<void>(
			"cubicTo",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void Path::rCubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		__thiz.callMethod<void>(
			"rCubicTo",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void Path::arcTo(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"arcTo",
			"(Landroid/graphics/RectF;FFZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	void Path::arcTo(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"arcTo",
			"(Landroid/graphics/RectF;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void Path::arcTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6)
	{
		__thiz.callMethod<void>(
			"arcTo",
			"(FFFFFFZ)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6);
	}
	void Path::addRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Path_Direction arg1)
	{
		__thiz.callMethod<void>(
			"addRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Path::addRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Path_Direction arg4)
	{
		__thiz.callMethod<void>(
			"addRect",
			"(FFFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void Path::addOval(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Path_Direction arg1)
	{
		__thiz.callMethod<void>(
			"addOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Path::addOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Path_Direction arg4)
	{
		__thiz.callMethod<void>(
			"addOval",
			"(FFFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	void Path::addCircle(jfloat arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Path_Direction arg3)
	{
		__thiz.callMethod<void>(
			"addCircle",
			"(FFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void Path::addArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		__thiz.callMethod<void>(
			"addArc",
			"(FFFFFF)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void Path::addArc(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"addArc",
			"(Landroid/graphics/RectF;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void Path::addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloatArray arg4, __jni_impl::android::graphics::Path_Direction arg5)
	{
		__thiz.callMethod<void>(
			"addRoundRect",
			"(FFFF[FLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object());
	}
	void Path::addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Path_Direction arg6)
	{
		__thiz.callMethod<void>(
			"addRoundRect",
			"(FFFFFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.__jniObject().object());
	}
	void Path::addRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Path_Direction arg3)
	{
		__thiz.callMethod<void>(
			"addRoundRect",
			"(Landroid/graphics/RectF;FFLandroid/graphics/Path$Direction;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object());
	}
	void Path::addRoundRect(__jni_impl::android::graphics::RectF arg0, jfloatArray arg1, __jni_impl::android::graphics::Path_Direction arg2)
	{
		__thiz.callMethod<void>(
			"addRoundRect",
			"(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void Path::addPath(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	void Path::addPath(__jni_impl::android::graphics::Path arg0)
	{
		__thiz.callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object());
	}
	void Path::addPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Matrix arg1)
	{
		__thiz.callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void Path::setLastPoint(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLastPoint",
			"(FF)V",
			arg0,
			arg1);
	}
	QAndroidJniObject Path::approximate(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"approximate",
			"(F)[F",
			arg0);
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Path : public __jni_impl::android::graphics::Path
	{
	public:
		Path(QAndroidJniObject obj) { __thiz = obj; }
		Path()
		{
			__constructor();
		}
		Path(__jni_impl::android::graphics::Path arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::graphics

#endif // ANDROID_GRAPHICS_PATH

