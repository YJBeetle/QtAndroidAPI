#pragma once

#ifndef ANDROID_VIEW_MOTIONEVENT_POINTERPROPERTIES
#define ANDROID_VIEW_MOTIONEVENT_POINTERPROPERTIES

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class MotionEvent_PointerProperties : public __JniBaseClass
	{
	public:
		// Fields
		jint id();
		jint toolType();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::view::MotionEvent_PointerProperties arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		void clear();
		void copyFrom(__jni_impl::android::view::MotionEvent_PointerProperties arg0);
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	jint MotionEvent_PointerProperties::id()
	{
		return __thiz.getField<jint>(
			"id"
		);
	}
	jint MotionEvent_PointerProperties::toolType()
	{
		return __thiz.getField<jint>(
			"toolType"
		);
	}
	
	// Constructors
	void MotionEvent_PointerProperties::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.MotionEvent$PointerProperties",
			"()V");
	}
	void MotionEvent_PointerProperties::__constructor(__jni_impl::android::view::MotionEvent_PointerProperties arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.MotionEvent$PointerProperties",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean MotionEvent_PointerProperties::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MotionEvent_PointerProperties::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void MotionEvent_PointerProperties::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void MotionEvent_PointerProperties::copyFrom(__jni_impl::android::view::MotionEvent_PointerProperties arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class MotionEvent_PointerProperties : public __jni_impl::android::view::MotionEvent_PointerProperties
	{
	public:
		MotionEvent_PointerProperties(QAndroidJniObject obj) { __thiz = obj; }
		MotionEvent_PointerProperties()
		{
			__constructor();
		}
		MotionEvent_PointerProperties(__jni_impl::android::view::MotionEvent_PointerProperties arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_MOTIONEVENT_POINTERPROPERTIES

