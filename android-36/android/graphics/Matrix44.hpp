#pragma once

#include "../../JFloatArray.hpp"
#include "./Matrix.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Matrix44.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Matrix44::Matrix44()
		: JObject(
			"android.graphics.Matrix44",
			"()V"
		) {}
	inline Matrix44::Matrix44(android::graphics::Matrix arg0)
		: JObject(
			"android.graphics.Matrix44",
			"(Landroid/graphics/Matrix;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::graphics::Matrix44 Matrix44::concat(android::graphics::Matrix44 arg0) const
	{
		return callObjectMethod(
			"concat",
			"(Landroid/graphics/Matrix44;)Landroid/graphics/Matrix44;",
			arg0.object()
		);
	}
	inline jboolean Matrix44::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jfloat Matrix44::get(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline void Matrix44::getValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"getValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline jint Matrix44::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean Matrix44::invert() const
	{
		return callMethod<jboolean>(
			"invert",
			"()Z"
		);
	}
	inline jboolean Matrix44::isIdentity() const
	{
		return callMethod<jboolean>(
			"isIdentity",
			"()Z"
		);
	}
	inline JFloatArray Matrix44::map(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callObjectMethod(
			"map",
			"(FFFF)[F",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Matrix44::map(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3, JFloatArray arg4) const
	{
		callMethod<void>(
			"map",
			"(FFFF[F)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>()
		);
	}
	inline void Matrix44::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline android::graphics::Matrix44 Matrix44::rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		return callObjectMethod(
			"rotate",
			"(FFFF)Landroid/graphics/Matrix44;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline android::graphics::Matrix44 Matrix44::scale(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"scale",
			"(FFF)Landroid/graphics/Matrix44;",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Matrix44::set(jint arg0, jint arg1, jfloat arg2) const
	{
		callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Matrix44::setValues(JFloatArray arg0) const
	{
		callMethod<void>(
			"setValues",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline JString Matrix44::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline android::graphics::Matrix44 Matrix44::translate(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		return callObjectMethod(
			"translate",
			"(FFF)Landroid/graphics/Matrix44;",
			arg0,
			arg1,
			arg2
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
