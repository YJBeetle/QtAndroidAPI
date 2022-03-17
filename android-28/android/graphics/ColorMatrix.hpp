#pragma once

#include "../../JFloatArray.hpp"
#include "../../JObject.hpp"
#include "./ColorMatrix.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline ColorMatrix::ColorMatrix()
		: JObject(
			"android.graphics.ColorMatrix",
			"()V"
		) {}
	inline ColorMatrix::ColorMatrix(JFloatArray arg0)
		: JObject(
			"android.graphics.ColorMatrix",
			"([F)V",
			arg0.object<jfloatArray>()
		) {}
	inline ColorMatrix::ColorMatrix(android::graphics::ColorMatrix &arg0)
		: JObject(
			"android.graphics.ColorMatrix",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ColorMatrix::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JFloatArray ColorMatrix::getArray() const
	{
		return callObjectMethod(
			"getArray",
			"()[F"
		);
	}
	inline void ColorMatrix::postConcat(android::graphics::ColorMatrix arg0) const
	{
		callMethod<void>(
			"postConcat",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		);
	}
	inline void ColorMatrix::preConcat(android::graphics::ColorMatrix arg0) const
	{
		callMethod<void>(
			"preConcat",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		);
	}
	inline void ColorMatrix::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void ColorMatrix::set(JFloatArray arg0) const
	{
		callMethod<void>(
			"set",
			"([F)V",
			arg0.object<jfloatArray>()
		);
	}
	inline void ColorMatrix::set(android::graphics::ColorMatrix arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/ColorMatrix;)V",
			arg0.object()
		);
	}
	inline void ColorMatrix::setConcat(android::graphics::ColorMatrix arg0, android::graphics::ColorMatrix arg1) const
	{
		callMethod<void>(
			"setConcat",
			"(Landroid/graphics/ColorMatrix;Landroid/graphics/ColorMatrix;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void ColorMatrix::setRGB2YUV() const
	{
		callMethod<void>(
			"setRGB2YUV",
			"()V"
		);
	}
	inline void ColorMatrix::setRotate(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setRotate",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void ColorMatrix::setSaturation(jfloat arg0) const
	{
		callMethod<void>(
			"setSaturation",
			"(F)V",
			arg0
		);
	}
	inline void ColorMatrix::setScale(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3) const
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
	inline void ColorMatrix::setYUV2RGB() const
	{
		callMethod<void>(
			"setYUV2RGB",
			"()V"
		);
	}
} // namespace android::graphics

// Base class headers

