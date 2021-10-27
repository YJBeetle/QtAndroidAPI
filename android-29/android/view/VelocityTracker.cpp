#include "./MotionEvent.hpp"
#include "./VelocityTracker.hpp"

namespace android::view
{
	// Fields
	
	VelocityTracker::VelocityTracker(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject VelocityTracker::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.VelocityTracker",
			"obtain",
			"()Landroid/view/VelocityTracker;"
		);
	}
	void VelocityTracker::addMovement(android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"addMovement",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
		);
	}
	void VelocityTracker::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void VelocityTracker::computeCurrentVelocity(jint arg0)
	{
		__thiz.callMethod<void>(
			"computeCurrentVelocity",
			"(I)V",
			arg0
		);
	}
	void VelocityTracker::computeCurrentVelocity(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"computeCurrentVelocity",
			"(IF)V",
			arg0,
			arg1
		);
	}
	jfloat VelocityTracker::getXVelocity()
	{
		return __thiz.callMethod<jfloat>(
			"getXVelocity",
			"()F"
		);
	}
	jfloat VelocityTracker::getXVelocity(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getXVelocity",
			"(I)F",
			arg0
		);
	}
	jfloat VelocityTracker::getYVelocity()
	{
		return __thiz.callMethod<jfloat>(
			"getYVelocity",
			"()F"
		);
	}
	jfloat VelocityTracker::getYVelocity(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getYVelocity",
			"(I)F",
			arg0
		);
	}
	void VelocityTracker::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
} // namespace android::view

