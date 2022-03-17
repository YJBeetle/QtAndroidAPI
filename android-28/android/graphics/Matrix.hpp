#pragma once

#include "../../JFloatArray.hpp"
#include "./Matrix_ScaleToFit.def.hpp"
#include "./RectF.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Matrix.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint Matrix::MPERSP_0()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_0"
		);
	}
	inline jint Matrix::MPERSP_1()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_1"
		);
	}
	inline jint Matrix::MPERSP_2()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MPERSP_2"
		);
	}
	inline jint Matrix::MSCALE_X()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MSCALE_X"
		);
	}
	inline jint Matrix::MSCALE_Y()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MSCALE_Y"
		);
	}
	inline jint Matrix::MSKEW_X()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MSKEW_X"
		);
	}
	inline jint Matrix::MSKEW_Y()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MSKEW_Y"
		);
	}
	inline jint Matrix::MTRANS_X()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MTRANS_X"
		);
	}
	inline jint Matrix::MTRANS_Y()
	{
		return getStaticField<jint>(
			"android.graphics.Matrix",
			"MTRANS_Y"
		);
	}
	
	// Constructors
	inline Matrix::Matrix()
		: JObject(
			"android.graphics.Matrix",
			"()V"
		) {}
	inline Matrix::Matrix(android::graphics::Matrix &arg0)
		: JObject(
			"android.graphics.Matrix",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean Matrix::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline void Matrix::getValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"getValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline jint Matrix::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Matrix::invert(android::graphics::Matrix arg0) const
	{
		return callMethod<jboolean>(
			"invert",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	inline jboolean Matrix::isAffine() const
	{
		return callMethod<jboolean>(
			"isAffine",
			"()Z"
		);
	}
	inline jboolean Matrix::isIdentity() const
	{
		return callMethod<jboolean>(
			"isIdentity",
			"()Z"
		);
	}
	inline void Matrix::mapPoints(JFloatArray arg0) const
	{
		callMethod<void>(
			"mapPoints",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void Matrix::mapPoints(JFloatArray arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"mapPoints",
			"([F[F)V",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline void Matrix::mapPoints(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"mapPoints",
			"([FI[FII)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4
		);
	}
	inline jfloat Matrix::mapRadius(jfloat arg0) const
	{
		return callMethod<jfloat>(
			"mapRadius",
			"(F)F",
			arg0
		);
	}
	inline jboolean Matrix::mapRect(android::graphics::RectF arg0) const
	{
		return callMethod<jboolean>(
			"mapRect",
			"(Landroid/graphics/RectF;)Z",
			arg0.object()
		);
	}
	inline jboolean Matrix::mapRect(android::graphics::RectF arg0, android::graphics::RectF arg1) const
	{
		return callMethod<jboolean>(
			"mapRect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Matrix::mapVectors(JFloatArray arg0) const
	{
		callMethod<void>(
			"mapVectors",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void Matrix::mapVectors(JFloatArray arg0, JFloatArray arg1) const
	{
		callMethod<void>(
			"mapVectors",
			"([F[F)V",
			arg0.object<jfloatArray>(),
			arg1.object<jfloatArray>()
		);
	}
	inline void Matrix::mapVectors(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const
	{
		callMethod<void>(
			"mapVectors",
			"([FI[FII)V",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4
		);
	}
	inline jboolean Matrix::postConcat(android::graphics::Matrix arg0) const
	{
		return callMethod<jboolean>(
			"postConcat",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	inline jboolean Matrix::postRotate(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"postRotate",
			"(F)Z",
			arg0
		);
	}
	inline jboolean Matrix::postRotate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"postRotate",
			"(FFF)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean Matrix::postScale(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"postScale",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Matrix::postScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"postScale",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean Matrix::postSkew(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"postSkew",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Matrix::postSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"postSkew",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean Matrix::postTranslate(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"postTranslate",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Matrix::preConcat(android::graphics::Matrix arg0) const
	{
		return callMethod<jboolean>(
			"preConcat",
			"(Landroid/graphics/Matrix;)Z",
			arg0.object()
		);
	}
	inline jboolean Matrix::preRotate(jfloat arg0) const
	{
		return callMethod<jboolean>(
			"preRotate",
			"(F)Z",
			arg0
		);
	}
	inline jboolean Matrix::preRotate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callMethod<jboolean>(
			"preRotate",
			"(FFF)Z",
			arg0,
			arg1,
			arg2
		);
	}
	inline jboolean Matrix::preScale(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"preScale",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Matrix::preScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"preScale",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean Matrix::preSkew(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"preSkew",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Matrix::preSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callMethod<jboolean>(
			"preSkew",
			"(FFFF)Z",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline jboolean Matrix::preTranslate(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"preTranslate",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jboolean Matrix::rectStaysRect() const
	{
		return callMethod<jboolean>(
			"rectStaysRect",
			"()Z"
		);
	}
	inline void Matrix::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Matrix::set(android::graphics::Matrix arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		);
	}
	inline jboolean Matrix::setConcat(android::graphics::Matrix arg0, android::graphics::Matrix arg1) const
	{
		return callMethod<jboolean>(
			"setConcat",
			"(Landroid/graphics/Matrix;Landroid/graphics/Matrix;)Z",
			arg0.object(),
			arg1.object()
		);
	}
	inline jboolean Matrix::setPolyToPoly(JFloatArray arg0, jint arg1, JFloatArray arg2, jint arg3, jint arg4) const
	{
		return callMethod<jboolean>(
			"setPolyToPoly",
			"([FI[FII)Z",
			arg0.object<jfloatArray>(),
			arg1,
			arg2.object<jfloatArray>(),
			arg3,
			arg4
		);
	}
	inline jboolean Matrix::setRectToRect(android::graphics::RectF arg0, android::graphics::RectF arg1, android::graphics::Matrix_ScaleToFit arg2) const
	{
		return callMethod<jboolean>(
			"setRectToRect",
			"(Landroid/graphics/RectF;Landroid/graphics/RectF;Landroid/graphics/Matrix$ScaleToFit;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void Matrix::setRotate(jfloat arg0) const
	{
		callMethod<void>(
			"setRotate",
			"(F)V",
			arg0
		);
	}
	inline void Matrix::setRotate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setRotate",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Matrix::setScale(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix::setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"setScale",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Matrix::setSinCos(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setSinCos",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix::setSinCos(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"setSinCos",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Matrix::setSkew(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setSkew",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix::setSkew(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"setSkew",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Matrix::setTranslate(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setTranslate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix::setValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"setValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline JString Matrix::toShortString() const
	{
		return callObjectMethod(
			"toShortString",
			"()Ljava/lang/String;"
		);
	}
	inline JString Matrix::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics

// Base class headers

