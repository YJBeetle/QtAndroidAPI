#include "./MotionEvent.hpp"
#include "../../JString.hpp"
#include "./VelocityTracker.hpp"

namespace android::view
{
	// Fields
	
	// Constructors
	
	// Methods
	android::view::VelocityTracker VelocityTracker::obtain()
	{
		return callStaticObjectMethod(
			"android.view.VelocityTracker",
			"obtain",
			"()Landroid/view/VelocityTracker;"
		);
	}
	void VelocityTracker::addMovement(android::view::MotionEvent arg0) const
	{
		callMethod<void>(
			"addMovement",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	void VelocityTracker::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void VelocityTracker::computeCurrentVelocity(jint arg0) const
	{
		callMethod<void>(
			"computeCurrentVelocity",
			"(I)V",
			arg0
		);
	}
	void VelocityTracker::computeCurrentVelocity(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"computeCurrentVelocity",
			"(IF)V",
			arg0,
			arg1
		);
	}
	jfloat VelocityTracker::getXVelocity() const
	{
		return callMethod<jfloat>(
			"getXVelocity",
			"()F"
		);
	}
	jfloat VelocityTracker::getXVelocity(jint arg0) const
	{
		return callMethod<jfloat>(
			"getXVelocity",
			"(I)F",
			arg0
		);
	}
	jfloat VelocityTracker::getYVelocity() const
	{
		return callMethod<jfloat>(
			"getYVelocity",
			"()F"
		);
	}
	jfloat VelocityTracker::getYVelocity(jint arg0) const
	{
		return callMethod<jfloat>(
			"getYVelocity",
			"(I)F",
			arg0
		);
	}
	void VelocityTracker::recycle() const
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::view

