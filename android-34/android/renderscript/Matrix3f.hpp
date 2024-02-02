#pragma once

#include "../../JFloatArray.hpp"
#include "./Matrix3f.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline Matrix3f::Matrix3f()
		: JObject(
			"android.renderscript.Matrix3f",
			"()V"
		) {}
	inline Matrix3f::Matrix3f(JFloatArray arg0)
		: JObject(
			"android.renderscript.Matrix3f",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	
	// Methods
	inline jfloat Matrix3f::get(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline JFloatArray Matrix3f::getArray() const
	{
		return callObjectMethod(
			"getArray",
			"()[F"
		);
	}
	inline void Matrix3f::load(android::renderscript::Matrix3f arg0) const
	{
		callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.object()
		);
	}
	inline void Matrix3f::loadIdentity() const
	{
		callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	inline void Matrix3f::loadMultiply(android::renderscript::Matrix3f arg0, android::renderscript::Matrix3f arg1) const
	{
		callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix3f;Landroid/renderscript/Matrix3f;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Matrix3f::loadRotate(jfloat arg0) const
	{
		callMethod<void>(
			"loadRotate",
			"(F)V",
			arg0
		);
	}
	inline void Matrix3f::loadRotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"loadRotate",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Matrix3f::loadScale(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"loadScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix3f::loadScale(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"loadScale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Matrix3f::loadTranslate(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"loadTranslate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix3f::multiply(android::renderscript::Matrix3f arg0) const
	{
		callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.object()
		);
	}
	inline void Matrix3f::rotate(jfloat arg0) const
	{
		callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	inline void Matrix3f::rotate(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
	{
		callMethod<void>(
			"rotate",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	inline void Matrix3f::scale(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix3f::scale(jfloat arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"scale",
			"(FFF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Matrix3f::set(jint arg0, jint arg1, jfloat arg2) const
	{
		callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Matrix3f::translate(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"translate",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix3f::transpose() const
	{
		callMethod<void>(
			"transpose",
			"()V"
		);
	}
} // namespace android::renderscript

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
