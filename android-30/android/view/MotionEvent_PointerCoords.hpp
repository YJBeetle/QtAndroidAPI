#pragma once

#include "./MotionEvent_PointerCoords.def.hpp"

namespace android::view
{
	// Fields
	inline jfloat MotionEvent_PointerCoords::orientation()
	{
		return getField<jfloat>(
			"orientation"
		);
	}
	inline jfloat MotionEvent_PointerCoords::pressure()
	{
		return getField<jfloat>(
			"pressure"
		);
	}
	inline jfloat MotionEvent_PointerCoords::size()
	{
		return getField<jfloat>(
			"size"
		);
	}
	inline jfloat MotionEvent_PointerCoords::toolMajor()
	{
		return getField<jfloat>(
			"toolMajor"
		);
	}
	inline jfloat MotionEvent_PointerCoords::toolMinor()
	{
		return getField<jfloat>(
			"toolMinor"
		);
	}
	inline jfloat MotionEvent_PointerCoords::touchMajor()
	{
		return getField<jfloat>(
			"touchMajor"
		);
	}
	inline jfloat MotionEvent_PointerCoords::touchMinor()
	{
		return getField<jfloat>(
			"touchMinor"
		);
	}
	inline jfloat MotionEvent_PointerCoords::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	inline jfloat MotionEvent_PointerCoords::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	
	// Constructors
	inline MotionEvent_PointerCoords::MotionEvent_PointerCoords()
		: JObject(
			"android.view.MotionEvent$PointerCoords",
			"()V"
		) {}
	inline MotionEvent_PointerCoords::MotionEvent_PointerCoords(android::view::MotionEvent_PointerCoords &arg0)
		: JObject(
			"android.view.MotionEvent$PointerCoords",
			"(Landroid/view/MotionEvent$PointerCoords;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void MotionEvent_PointerCoords::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void MotionEvent_PointerCoords::copyFrom(android::view::MotionEvent_PointerCoords arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/view/MotionEvent$PointerCoords;)V",
			arg0.object()
		);
	}
	inline jfloat MotionEvent_PointerCoords::getAxisValue(jint arg0) const
	{
		return callMethod<jfloat>(
			"getAxisValue",
			"(I)F",
			arg0
		);
	}
	inline void MotionEvent_PointerCoords::setAxisValue(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setAxisValue",
			"(IF)V",
			arg0,
			arg1
		);
	}
} // namespace android::view

// Base class headers

