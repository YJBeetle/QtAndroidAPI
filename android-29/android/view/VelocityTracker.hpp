#pragma once

#ifndef ANDROID_VIEW_VELOCITYTRACKER
#define ANDROID_VIEW_VELOCITYTRACKER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class MotionEvent;
}

namespace __jni_impl::android::view
{
	class VelocityTracker : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void clear();
		static QAndroidJniObject obtain();
		void recycle();
		void addMovement(__jni_impl::android::view::MotionEvent arg0);
		void computeCurrentVelocity(jint arg0, jfloat arg1);
		void computeCurrentVelocity(jint arg0);
		jfloat getXVelocity(jint arg0);
		jfloat getXVelocity();
		jfloat getYVelocity(jint arg0);
		jfloat getYVelocity();
	};
} // namespace __jni_impl::android::view

#include "MotionEvent.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void VelocityTracker::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.VelocityTracker",
			"(V)V");
	}
	
	// Methods
	void VelocityTracker::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	QAndroidJniObject VelocityTracker::obtain()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.view.VelocityTracker",
			"obtain",
			"()Landroid/view/VelocityTracker;"
		);
	}
	void VelocityTracker::recycle()
	{
		__thiz.callMethod<void>(
			"recycle",
			"()V"
		);
	}
	void VelocityTracker::addMovement(__jni_impl::android::view::MotionEvent arg0)
	{
		__thiz.callMethod<void>(
			"addMovement",
			"(Landroid/view/MotionEvent;)V",
			arg0.__jniObject().object()
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
	void VelocityTracker::computeCurrentVelocity(jint arg0)
	{
		__thiz.callMethod<void>(
			"computeCurrentVelocity",
			"(I)V",
			arg0
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
	jfloat VelocityTracker::getXVelocity()
	{
		return __thiz.callMethod<jfloat>(
			"getXVelocity",
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
	jfloat VelocityTracker::getYVelocity()
	{
		return __thiz.callMethod<jfloat>(
			"getYVelocity",
			"()F"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class VelocityTracker : public __jni_impl::android::view::VelocityTracker
	{
	public:
		VelocityTracker(QAndroidJniObject obj) { __thiz = obj; }
		VelocityTracker()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_VELOCITYTRACKER

