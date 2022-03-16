#pragma once

#include "../../JFloatArray.hpp"
#include "./Interpolator_Result.def.hpp"
#include "./Interpolator.def.hpp"

namespace android::graphics
{
	// Fields
	
	// Constructors
	inline Interpolator::Interpolator(jint arg0)
		: JObject(
			"android.graphics.Interpolator",
			"(I)V",
			arg0
		) {}
	inline Interpolator::Interpolator(jint arg0, jint arg1)
		: JObject(
			"android.graphics.Interpolator",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint Interpolator::getKeyFrameCount() const
	{
		return callMethod<jint>(
			"getKeyFrameCount",
			"()I"
		);
	}
	inline jint Interpolator::getValueCount() const
	{
		return callMethod<jint>(
			"getValueCount",
			"()I"
		);
	}
	inline void Interpolator::reset(jint arg0) const
	{
		callMethod<void>(
			"reset",
			"(I)V",
			arg0
		);
	}
	inline void Interpolator::reset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"reset",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Interpolator::setKeyFrame(jint arg0, jint arg1, JFloatArray arg2) const
	{
		callMethod<void>(
			"setKeyFrame",
			"(II[F)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>()
		);
	}
	inline void Interpolator::setKeyFrame(jint arg0, jint arg1, JFloatArray arg2, JFloatArray arg3) const
	{
		callMethod<void>(
			"setKeyFrame",
			"(II[F[F)V",
			arg0,
			arg1,
			arg2.object<jfloatArray>(),
			arg3.object<jfloatArray>()
		);
	}
	inline void Interpolator::setRepeatMirror(jfloat arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setRepeatMirror",
			"(FZ)V",
			arg0,
			arg1
		);
	}
	inline android::graphics::Interpolator_Result Interpolator::timeToValues(JFloatArray arg0) const
	{
		return callObjectMethod(
			"timeToValues",
			"([F)Landroid/graphics/Interpolator$Result;",
			arg0.object<jfloatArray>()
		);
	}
	inline android::graphics::Interpolator_Result Interpolator::timeToValues(jint arg0, JFloatArray arg1) const
	{
		return callObjectMethod(
			"timeToValues",
			"(I[F)Landroid/graphics/Interpolator$Result;",
			arg0,
			arg1.object<jfloatArray>()
		);
	}
} // namespace android::graphics

// Base class headers

