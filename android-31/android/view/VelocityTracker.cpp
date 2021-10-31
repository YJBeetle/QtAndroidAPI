#include "./MotionEvent.hpp"
#include "./VelocityTracker.hpp"

namespace android::view
{
	// Fields
	
	// QJniObject forward
	VelocityTracker::VelocityTracker(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	void VelocityTracker::addMovement(android::view::MotionEvent arg0)
	{
		callMethod<void>(
			"addMovement",
			"(Landroid/view/MotionEvent;)V",
			arg0.object()
		);
	}
	void VelocityTracker::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void VelocityTracker::computeCurrentVelocity(jint arg0)
	{
		callMethod<void>(
			"computeCurrentVelocity",
			"(I)V",
			arg0
		);
	}
	void VelocityTracker::computeCurrentVelocity(jint arg0, jfloat arg1)
	{
		callMethod<void>(
			"computeCurrentVelocity",
			"(IF)V",
			arg0,
			arg1
		);
	}
	jfloat VelocityTracker::getXVelocity()
	{
		return callMethod<jfloat>(
			"getXVelocity",
			"()F"
		);
	}
	jfloat VelocityTracker::getXVelocity(jint arg0)
	{
		return callMethod<jfloat>(
			"getXVelocity",
			"(I)F",
			arg0
		);
	}
	jfloat VelocityTracker::getYVelocity()
	{
		return callMethod<jfloat>(
			"getYVelocity",
			"()F"
		);
	}
	jfloat VelocityTracker::getYVelocity(jint arg0)
	{
		return callMethod<jfloat>(
			"getYVelocity",
			"(I)F",
			arg0
		);
	}
	void VelocityTracker::recycle()
	{
		callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::view

