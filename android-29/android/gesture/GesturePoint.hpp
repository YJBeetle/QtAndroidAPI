#pragma once

#ifndef ANDROID_GESTURE_GESTUREPOINT
#define ANDROID_GESTURE_GESTUREPOINT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::gesture
{
	class GesturePoint : public __JniBaseClass
	{
	public:
		// Fields
		jlong timestamp();
		jfloat x();
		jfloat y();
		
		// Constructors
		void __constructor(jfloat arg0, jfloat arg1, jlong arg2);
		
		// Methods
		jobject clone();
	};
} // namespace __jni_impl::android::gesture


namespace __jni_impl::android::gesture
{
	// Fields
	jlong GesturePoint::timestamp()
	{
		return __thiz.getField<jlong>(
			"timestamp"
		);
	}
	jfloat GesturePoint::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat GesturePoint::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	
	// Constructors
	void GesturePoint::__constructor(jfloat arg0, jfloat arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.gesture.GesturePoint",
			"(FFJ)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jobject GesturePoint::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
} // namespace __jni_impl::android::gesture

namespace android::gesture
{
	class GesturePoint : public __jni_impl::android::gesture::GesturePoint
	{
	public:
		GesturePoint(QAndroidJniObject obj) { __thiz = obj; }
		GesturePoint(jfloat arg0, jfloat arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::gesture

#endif // ANDROID_GESTURE_GESTUREPOINT

