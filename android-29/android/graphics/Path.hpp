#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class Path_Direction;
}
namespace __jni_impl::android::graphics
{
	class Path_FillType;
}
namespace __jni_impl::android::graphics
{
	class Path_Op;
}
namespace __jni_impl::android::graphics
{
	class RectF;
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
		void addArc(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2);
		void addArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void addCircle(jfloat arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Path_Direction arg3);
		void addOval(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Path_Direction arg1);
		void addOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Path_Direction arg4);
		void addPath(__jni_impl::android::graphics::Path arg0);
		void addPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Matrix arg1);
		void addPath(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2);
		void addRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Path_Direction arg1);
		void addRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, __jni_impl::android::graphics::Path_Direction arg4);
		void addRoundRect(__jni_impl::android::graphics::RectF arg0, jfloatArray arg1, __jni_impl::android::graphics::Path_Direction arg2);
		void addRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Path_Direction arg3);
		void addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloatArray arg4, __jni_impl::android::graphics::Path_Direction arg5);
		void addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, __jni_impl::android::graphics::Path_Direction arg6);
		jfloatArray approximate(jfloat arg0);
		void arcTo(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2);
		void arcTo(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3);
		void arcTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6);
		void close();
		void computeBounds(__jni_impl::android::graphics::RectF arg0, jboolean arg1);
		void cubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		QAndroidJniObject getFillType();
		void incReserve(jint arg0);
		jboolean isConvex();
		jboolean isEmpty();
		jboolean isInverseFillType();
		jboolean isRect(__jni_impl::android::graphics::RectF arg0);
		void lineTo(jfloat arg0, jfloat arg1);
		void moveTo(jfloat arg0, jfloat arg1);
		void offset(jfloat arg0, jfloat arg1);
		void offset(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Path arg2);
		jboolean op(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path_Op arg1);
		jboolean op(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path arg1, __jni_impl::android::graphics::Path_Op arg2);
		void quadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void rCubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5);
		void rLineTo(jfloat arg0, jfloat arg1);
		void rMoveTo(jfloat arg0, jfloat arg1);
		void rQuadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void reset();
		void rewind();
		void set(__jni_impl::android::graphics::Path arg0);
		void setFillType(__jni_impl::android::graphics::Path_FillType arg0);
		void setLastPoint(jfloat arg0, jfloat arg1);
		void toggleInverseFillType();
		void transform(__jni_impl::android::graphics::Matrix arg0);
		void transform(__jni_impl::android::graphics::Matrix arg0, __jni_impl::android::graphics::Path arg1);
	};
} // namespace __jni_impl::android::graphics

#include "Matrix.hpp"
#include "Path_Direction.hpp"
#include "Path_FillType.hpp"
#include "Path_Op.hpp"
#include "RectF.hpp"

namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void Path::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Path",
			"()V"
		);
	}
	void Path::__constructor(__jni_impl::android::graphics::Path arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Path",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void Path::addArc(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"addArc",
			"(Landroid/graphics/RectF;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
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
			arg5
		);
	}
	void Path::addCircle(jfloat arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Path_Direction arg3)
	{
		__thiz.callMethod<void>(
			"addCircle",
			"(FFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void Path::addOval(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Path_Direction arg1)
	{
		__thiz.callMethod<void>(
			"addOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
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
			arg4.__jniObject().object()
		);
	}
	void Path::addPath(__jni_impl::android::graphics::Path arg0)
	{
		__thiz.callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
	void Path::addPath(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Matrix arg1)
	{
		__thiz.callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Path::addPath(__jni_impl::android::graphics::Path arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Path::addRect(__jni_impl::android::graphics::RectF arg0, __jni_impl::android::graphics::Path_Direction arg1)
	{
		__thiz.callMethod<void>(
			"addRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
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
			arg4.__jniObject().object()
		);
	}
	void Path::addRoundRect(__jni_impl::android::graphics::RectF arg0, jfloatArray arg1, __jni_impl::android::graphics::Path_Direction arg2)
	{
		__thiz.callMethod<void>(
			"addRoundRect",
			"(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Path::addRoundRect(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, __jni_impl::android::graphics::Path_Direction arg3)
	{
		__thiz.callMethod<void>(
			"addRoundRect",
			"(Landroid/graphics/RectF;FFLandroid/graphics/Path$Direction;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
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
			arg5.__jniObject().object()
		);
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
			arg6.__jniObject().object()
		);
	}
	jfloatArray Path::approximate(jfloat arg0)
	{
		return __thiz.callObjectMethod(
			"approximate",
			"(F)[F",
			arg0
		).object<jfloatArray>();
	}
	void Path::arcTo(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"arcTo",
			"(Landroid/graphics/RectF;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void Path::arcTo(__jni_impl::android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3)
	{
		__thiz.callMethod<void>(
			"arcTo",
			"(Landroid/graphics/RectF;FFZ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
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
			arg6
		);
	}
	void Path::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Path::computeBounds(__jni_impl::android::graphics::RectF arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"computeBounds",
			"(Landroid/graphics/RectF;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
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
			arg5
		);
	}
	QAndroidJniObject Path::getFillType()
	{
		return __thiz.callObjectMethod(
			"getFillType",
			"()Landroid/graphics/Path$FillType;"
		);
	}
	void Path::incReserve(jint arg0)
	{
		__thiz.callMethod<void>(
			"incReserve",
			"(I)V",
			arg0
		);
	}
	jboolean Path::isConvex()
	{
		return __thiz.callMethod<jboolean>(
			"isConvex",
			"()Z"
		);
	}
	jboolean Path::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Path::isInverseFillType()
	{
		return __thiz.callMethod<jboolean>(
			"isInverseFillType",
			"()Z"
		);
	}
	jboolean Path::isRect(__jni_impl::android::graphics::RectF arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.__jniObject().object()
		);
	}
	void Path::lineTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"lineTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::moveTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"moveTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::offset(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::offset(jfloat arg0, jfloat arg1, __jni_impl::android::graphics::Path arg2)
	{
		__thiz.callMethod<void>(
			"offset",
			"(FFLandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	jboolean Path::op(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path_Op arg1)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Path;Landroid/graphics/Path$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jboolean Path::op(__jni_impl::android::graphics::Path arg0, __jni_impl::android::graphics::Path arg1, __jni_impl::android::graphics::Path_Op arg2)
	{
		return __thiz.callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Path;Landroid/graphics/Path;Landroid/graphics/Path$Op;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Path::quadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"quadTo",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
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
			arg5
		);
	}
	void Path::rLineTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"rLineTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::rMoveTo(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"rMoveTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::rQuadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"rQuadTo",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void Path::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Path::rewind()
	{
		__thiz.callMethod<void>(
			"rewind",
			"()V"
		);
	}
	void Path::set(__jni_impl::android::graphics::Path arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/graphics/Path;)V",
			arg0.__jniObject().object()
		);
	}
	void Path::setFillType(__jni_impl::android::graphics::Path_FillType arg0)
	{
		__thiz.callMethod<void>(
			"setFillType",
			"(Landroid/graphics/Path$FillType;)V",
			arg0.__jniObject().object()
		);
	}
	void Path::setLastPoint(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setLastPoint",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::toggleInverseFillType()
	{
		__thiz.callMethod<void>(
			"toggleInverseFillType",
			"()V"
		);
	}
	void Path::transform(__jni_impl::android::graphics::Matrix arg0)
	{
		__thiz.callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;)V",
			arg0.__jniObject().object()
		);
	}
	void Path::transform(__jni_impl::android::graphics::Matrix arg0, __jni_impl::android::graphics::Path arg1)
	{
		__thiz.callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;Landroid/graphics/Path;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
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

