#include "./Matrix.hpp"
#include "./Path_Direction.hpp"
#include "./Path_FillType.hpp"
#include "./Path_Op.hpp"
#include "./RectF.hpp"
#include "./Path.hpp"

namespace android::graphics
{
	// Fields
	
	// QAndroidJniObject forward
	Path::Path(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	Path::Path()
		: JObject(
			"android.graphics.Path",
			"()V"
		) {}
	Path::Path(android::graphics::Path &arg0)
		: JObject(
			"android.graphics.Path",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		) {}
	
	// Methods
	void Path::addArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"addArc",
			"(Landroid/graphics/RectF;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Path::addArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callMethod<void>(
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
	void Path::addCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Path_Direction arg3)
	{
		callMethod<void>(
			"addCircle",
			"(FFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Path::addOval(android::graphics::RectF arg0, android::graphics::Path_Direction arg1)
	{
		callMethod<void>(
			"addOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Path::addOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Path_Direction arg4)
	{
		callMethod<void>(
			"addOval",
			"(FFFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void Path::addPath(android::graphics::Path arg0)
	{
		callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		);
	}
	void Path::addPath(android::graphics::Path arg0, android::graphics::Matrix arg1)
	{
		callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;Landroid/graphics/Matrix;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Path::addPath(android::graphics::Path arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Path::addRect(android::graphics::RectF arg0, android::graphics::Path_Direction arg1)
	{
		callMethod<void>(
			"addRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void Path::addRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Path_Direction arg4)
	{
		callMethod<void>(
			"addRect",
			"(FFFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object()
		);
	}
	void Path::addRoundRect(android::graphics::RectF arg0, jfloatArray arg1, android::graphics::Path_Direction arg2)
	{
		callMethod<void>(
			"addRoundRect",
			"(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	void Path::addRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Path_Direction arg3)
	{
		callMethod<void>(
			"addRoundRect",
			"(Landroid/graphics/RectF;FFLandroid/graphics/Path$Direction;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	void Path::addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloatArray arg4, android::graphics::Path_Direction arg5)
	{
		callMethod<void>(
			"addRoundRect",
			"(FFFF[FLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	void Path::addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Path_Direction arg6)
	{
		callMethod<void>(
			"addRoundRect",
			"(FFFFFFLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6.object()
		);
	}
	jfloatArray Path::approximate(jfloat arg0)
	{
		return callObjectMethod(
			"approximate",
			"(F)[F",
			arg0
		).object<jfloatArray>();
	}
	void Path::arcTo(android::graphics::RectF arg0, jfloat arg1, jfloat arg2)
	{
		callMethod<void>(
			"arcTo",
			"(Landroid/graphics/RectF;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	void Path::arcTo(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3)
	{
		callMethod<void>(
			"arcTo",
			"(Landroid/graphics/RectF;FFZ)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void Path::arcTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6)
	{
		callMethod<void>(
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
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void Path::computeBounds(android::graphics::RectF arg0, jboolean arg1)
	{
		callMethod<void>(
			"computeBounds",
			"(Landroid/graphics/RectF;Z)V",
			arg0.object(),
			arg1
		);
	}
	void Path::cubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5)
	{
		callMethod<void>(
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
	android::graphics::Path_FillType Path::getFillType()
	{
		return callObjectMethod(
			"getFillType",
			"()Landroid/graphics/Path$FillType;"
		);
	}
	void Path::incReserve(jint arg0)
	{
		callMethod<void>(
			"incReserve",
			"(I)V",
			arg0
		);
	}
	jboolean Path::isConvex()
	{
		return callMethod<jboolean>(
			"isConvex",
			"()Z"
		);
	}
	jboolean Path::isEmpty()
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	jboolean Path::isInverseFillType()
	{
		return callMethod<jboolean>(
			"isInverseFillType",
			"()Z"
		);
	}
	jboolean Path::isRect(android::graphics::RectF arg0)
	{
		return callMethod<jboolean>(
			"isRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	void Path::lineTo(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"lineTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::moveTo(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"moveTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::offset(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::offset(jfloat arg0, jfloat arg1, android::graphics::Path arg2)
	{
		callMethod<void>(
			"offset",
			"(FFLandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	jboolean Path::op(android::graphics::Path arg0, android::graphics::Path_Op arg1)
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Path;Landroid/graphics/Path$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	jboolean Path::op(android::graphics::Path arg0, android::graphics::Path arg1, android::graphics::Path_Op arg2)
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Path;Landroid/graphics/Path;Landroid/graphics/Path$Op;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void Path::quadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
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
		callMethod<void>(
			"rLineTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::rMoveTo(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"rMoveTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::rQuadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Path::rewind()
	{
		callMethod<void>(
			"rewind",
			"()V"
		);
	}
	void Path::set(android::graphics::Path arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		);
	}
	void Path::setFillType(android::graphics::Path_FillType arg0)
	{
		callMethod<void>(
			"setFillType",
			"(Landroid/graphics/Path$FillType;)V",
			arg0.object()
		);
	}
	void Path::setLastPoint(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setLastPoint",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void Path::toggleInverseFillType()
	{
		callMethod<void>(
			"toggleInverseFillType",
			"()V"
		);
	}
	void Path::transform(android::graphics::Matrix arg0)
	{
		callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	void Path::transform(android::graphics::Matrix arg0, android::graphics::Path arg1)
	{
		callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;Landroid/graphics/Path;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics

