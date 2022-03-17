#pragma once

#include "./InputDevice_MotionRange.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint InputDevice_MotionRange::getAxis() const
	{
		return callMethod<jint>(
			"getAxis",
			"()I"
		);
	}
	inline jfloat InputDevice_MotionRange::getFlat() const
	{
		return callMethod<jfloat>(
			"getFlat",
			"()F"
		);
	}
	inline jfloat InputDevice_MotionRange::getFuzz() const
	{
		return callMethod<jfloat>(
			"getFuzz",
			"()F"
		);
	}
	inline jfloat InputDevice_MotionRange::getMax() const
	{
		return callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
	inline jfloat InputDevice_MotionRange::getMin() const
	{
		return callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	inline jfloat InputDevice_MotionRange::getRange() const
	{
		return callMethod<jfloat>(
			"getRange",
			"()F"
		);
	}
	inline jfloat InputDevice_MotionRange::getResolution() const
	{
		return callMethod<jfloat>(
			"getResolution",
			"()F"
		);
	}
	inline jint InputDevice_MotionRange::getSource() const
	{
		return callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	inline jboolean InputDevice_MotionRange::isFromSource(jint arg0) const
	{
		return callMethod<jboolean>(
			"isFromSource",
			"(I)Z",
			arg0
		);
	}
} // namespace android::view

// Base class headers

