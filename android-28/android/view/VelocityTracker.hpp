#pragma once

#include "./MotionEvent.def.hpp"
#include "../../JString.hpp"
#include "./VelocityTracker.def.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::view::VelocityTracker VelocityTracker::obtain()
	{
		return callStaticObjectMethod(
			"android.view.VelocityTracker",
			"obtain",
			"()Landroid/view/VelocityTracker;"
		);
	}
	inline void VelocityTracker::addMovement(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"addMovement",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	inline void VelocityTracker::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void VelocityTracker::computeCurrentVelocity(jint arg0) const
	{
		callMethod<void>(
			"computeCurrentVelocity",
			"(I)V",
			arg0
		);
	}
	inline void VelocityTracker::computeCurrentVelocity(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"computeCurrentVelocity",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline jfloat VelocityTracker::getXVelocity() const
	{
		return callMethod<jfloat>(
			"getXVelocity",
			"()F"
		);
	}
	inline jfloat VelocityTracker::getXVelocity(jint arg0) const
	{
		return callMethod<jfloat>(
			"getXVelocity",
			"(I)F",
			arg0
		);
	}
	inline jfloat VelocityTracker::getYVelocity() const
	{
		return callMethod<jfloat>(
			"getYVelocity",
			"()F"
		);
	}
	inline jfloat VelocityTracker::getYVelocity(jint arg0) const
	{
		return callMethod<jfloat>(
			"getYVelocity",
			"(I)F",
			arg0
		);
	}
	inline void VelocityTracker::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::view

// Base class headers

