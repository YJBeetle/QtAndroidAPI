#pragma once

#ifndef ANDROID_VIEW_INPUTDEVICE_MOTIONRANGE
#define ANDROID_VIEW_INPUTDEVICE_MOTIONRANGE

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class InputDevice_MotionRange : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getSource();
		jboolean isFromSource(jint arg0);
		jfloat getResolution();
		jint getAxis();
		jfloat getMin();
		jfloat getRange();
		jfloat getFlat();
		jfloat getFuzz();
		jfloat getMax();
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void InputDevice_MotionRange::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.InputDevice$MotionRange",
			"(V)V");
	}
	
	// Methods
	jint InputDevice_MotionRange::getSource()
	{
		return __thiz.callMethod<jint>(
			"getSource",
			"()I"
		);
	}
	jboolean InputDevice_MotionRange::isFromSource(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isFromSource",
			"(I)Z",
			arg0
		);
	}
	jfloat InputDevice_MotionRange::getResolution()
	{
		return __thiz.callMethod<jfloat>(
			"getResolution",
			"()F"
		);
	}
	jint InputDevice_MotionRange::getAxis()
	{
		return __thiz.callMethod<jint>(
			"getAxis",
			"()I"
		);
	}
	jfloat InputDevice_MotionRange::getMin()
	{
		return __thiz.callMethod<jfloat>(
			"getMin",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getRange()
	{
		return __thiz.callMethod<jfloat>(
			"getRange",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getFlat()
	{
		return __thiz.callMethod<jfloat>(
			"getFlat",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getFuzz()
	{
		return __thiz.callMethod<jfloat>(
			"getFuzz",
			"()F"
		);
	}
	jfloat InputDevice_MotionRange::getMax()
	{
		return __thiz.callMethod<jfloat>(
			"getMax",
			"()F"
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class InputDevice_MotionRange : public __jni_impl::android::view::InputDevice_MotionRange
	{
	public:
		InputDevice_MotionRange(QAndroidJniObject obj) { __thiz = obj; }
		InputDevice_MotionRange()
		{
			__constructor();
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_INPUTDEVICE_MOTIONRANGE

