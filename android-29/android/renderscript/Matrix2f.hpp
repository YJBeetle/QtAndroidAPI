#pragma once

#include "../../JFloatArray.hpp"
#include "./Matrix2f.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	inline Matrix2f::Matrix2f()
		: JObject(
			"android.renderscript.Matrix2f",
			"()V"
		) {}
	inline Matrix2f::Matrix2f(JFloatArray arg0)
		: JObject(
			"android.renderscript.Matrix2f",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	
	// Methods
	inline jfloat Matrix2f::get(jint arg0, jint arg1) const
	{
		return callMethod<jfloat>(
			"get",
			"(II)F",
			arg0,
			arg1
		);
	}
	inline JFloatArray Matrix2f::getArray() const
	{
		return callObjectMethod(
			"getArray",
			"()[F"
		);
	}
	inline void Matrix2f::load(android::renderscript::Matrix2f arg0) const
	{
		callMethod<void>(
			"load",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.object()
		);
	}
	inline void Matrix2f::loadIdentity() const
	{
		callMethod<void>(
			"loadIdentity",
			"()V"
		);
	}
	inline void Matrix2f::loadMultiply(android::renderscript::Matrix2f arg0, android::renderscript::Matrix2f arg1) const
	{
		callMethod<void>(
			"loadMultiply",
			"(Landroid/renderscript/Matrix2f;Landroid/renderscript/Matrix2f;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void Matrix2f::loadRotate(jfloat arg0) const
	{
		callMethod<void>(
			"loadRotate",
			"(F)V",
			arg0
		);
	}
	inline void Matrix2f::loadScale(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"loadScale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix2f::multiply(android::renderscript::Matrix2f arg0) const
	{
		callMethod<void>(
			"multiply",
			"(Landroid/renderscript/Matrix2f;)V",
			arg0.object()
		);
	}
	inline void Matrix2f::rotate(jfloat arg0) const
	{
		callMethod<void>(
			"rotate",
			"(F)V",
			arg0
		);
	}
	inline void Matrix2f::scale(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"scale",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void Matrix2f::set(jint arg0, jint arg1, jfloat arg2) const
	{
		callMethod<void>(
			"set",
			"(IIF)V",
			arg0,
			arg1,
			arg2
		);
	}
	inline void Matrix2f::transpose() const
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
