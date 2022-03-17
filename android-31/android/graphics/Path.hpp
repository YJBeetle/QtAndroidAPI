#pragma once

#include "../../JFloatArray.hpp"
#include "./Matrix.def.hpp"
#include "./Path_Direction.def.hpp"
#include "./Path_FillType.def.hpp"
#include "./Path_Op.def.hpp"
#include "./RectF.def.hpp"
#include "./Path.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Path::Path()
		: JObject(
			"android.graphics.Path",
			"()V"
		) {}
	inline Path::Path(android::graphics::Path &arg0)
		: JObject(
			"android.graphics.Path",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void Path::addArc(android::graphics::RectF arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"addArc",
			"(Landroid/graphics/RectF;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void Path::addArc(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const
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
	inline void Path::addCircle(jfloat arg0, jfloat arg1, jfloat arg2, android::graphics::Path_Direction arg3) const
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
	inline void Path::addOval(android::graphics::RectF arg0, android::graphics::Path_Direction arg1) const
	{
		callMethod<void>(
			"addOval",
			"(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Path::addOval(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Path_Direction arg4) const
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
	inline void Path::addPath(android::graphics::Path arg0) const
	{
		callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		);
	}
	inline void Path::addPath(android::graphics::Path arg0, android::graphics::Matrix arg1) const
	{
		callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;Landroid/graphics/Matrix;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Path::addPath(android::graphics::Path arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"addPath",
			"(Landroid/graphics/Path;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void Path::addRect(android::graphics::RectF arg0, android::graphics::Path_Direction arg1) const
	{
		callMethod<void>(
			"addRect",
			"(Landroid/graphics/RectF;Landroid/graphics/Path$Direction;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Path::addRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, android::graphics::Path_Direction arg4) const
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
	inline void Path::addRoundRect(android::graphics::RectF arg0, JFloatArray arg1, android::graphics::Path_Direction arg2) const
	{
		callMethod<void>(
			"addRoundRect",
			"(Landroid/graphics/RectF;[FLandroid/graphics/Path$Direction;)V",
			arg0.object(),
			arg1.object<jfloatArray>(),
			arg2.object()
		);
	}
	inline void Path::addRoundRect(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, android::graphics::Path_Direction arg3) const
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
	inline void Path::addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, JFloatArray arg4, android::graphics::Path_Direction arg5) const
	{
		callMethod<void>(
			"addRoundRect",
			"(FFFF[FLandroid/graphics/Path$Direction;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>(),
			arg5.object()
		);
	}
	inline void Path::addRoundRect(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, android::graphics::Path_Direction arg6) const
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
	inline JFloatArray Path::approximate(jfloat arg0) const
	{
		return callObjectMethod(
			"approximate",
			"(F)[F",
			arg0
		);
	}
	inline void Path::arcTo(android::graphics::RectF arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"arcTo",
			"(Landroid/graphics/RectF;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void Path::arcTo(android::graphics::RectF arg0, jfloat arg1, jfloat arg2, jboolean arg3) const
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
	inline void Path::arcTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5, jboolean arg6) const
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
	inline void Path::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void Path::computeBounds(android::graphics::RectF arg0, jboolean arg1) const
	{
		callMethod<void>(
			"computeBounds",
			"(Landroid/graphics/RectF;Z)V",
			arg0.object(),
			arg1
		);
	}
	inline void Path::cubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const
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
	inline android::graphics::Path_FillType Path::getFillType() const
	{
		return callObjectMethod(
			"getFillType",
			"()Landroid/graphics/Path$FillType;"
		);
	}
	inline void Path::incReserve(jint arg0) const
	{
		callMethod<void>(
			"incReserve",
			"(I)V",
			arg0
		);
	}
	inline jboolean Path::isConvex() const
	{
		return callMethod<jboolean>(
			"isConvex",
			"()Z"
		);
	}
	inline jboolean Path::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline jboolean Path::isInverseFillType() const
	{
		return callMethod<jboolean>(
			"isInverseFillType",
			"()Z"
		);
	}
	inline jboolean Path::isRect(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"isRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	inline void Path::lineTo(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"lineTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Path::moveTo(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"moveTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Path::offset(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Path::offset(jfloat arg0, jfloat arg1, android::graphics::Path arg2) const
	{
		callMethod<void>(
			"offset",
			"(FFLandroid/graphics/Path;)V",
			arg0,
			arg1,
			arg2.object()
		);
	}
	inline jboolean Path::op(android::graphics::Path arg0, android::graphics::Path_Op arg1) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Path;Landroid/graphics/Path$Op;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Path::op(android::graphics::Path arg0, android::graphics::Path arg1, android::graphics::Path_Op arg2) const
	{
		return callMethod<jboolean>(
			"op",
			"(Landroid/graphics/Path;Landroid/graphics/Path;Landroid/graphics/Path$Op;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Path::quadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void Path::rCubicTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, jfloat arg4, jfloat arg5) const
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
	inline void Path::rLineTo(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"rLineTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Path::rMoveTo(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"rMoveTo",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Path::rQuadTo(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void Path::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Path::rewind() const
	{
		callMethod<void>(
			"rewind",
			"()V"
		);
	}
	inline void Path::set(android::graphics::Path arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Path;)V",
			arg0.object()
		);
	}
	inline void Path::setFillType(android::graphics::Path_FillType arg0) const
	{
		callMethod<void>(
			"setFillType",
			"(Landroid/graphics/Path$FillType;)V",
			arg0.object()
		);
	}
	inline void Path::setLastPoint(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setLastPoint",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Path::toggleInverseFillType() const
	{
		callMethod<void>(
			"toggleInverseFillType",
			"()V"
		);
	}
	inline void Path::transform(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline void Path::transform(android::graphics::Matrix arg0, android::graphics::Path arg1) const
	{
		callMethod<void>(
			"transform",
			"(Landroid/graphics/Matrix;Landroid/graphics/Path;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics

// Base class headers

