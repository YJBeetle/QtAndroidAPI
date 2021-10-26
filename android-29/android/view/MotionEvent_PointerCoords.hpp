#pragma once

#ifndef ANDROID_VIEW_MOTIONEVENT_POINTERCOORDS
#define ANDROID_VIEW_MOTIONEVENT_POINTERCOORDS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::view
{
	class MotionEvent_PointerCoords : public __JniBaseClass
	{
	public:
		// Fields
		jfloat orientation();
		jfloat pressure();
		jfloat size();
		jfloat toolMajor();
		jfloat toolMinor();
		jfloat touchMajor();
		jfloat touchMinor();
		jfloat x();
		jfloat y();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::view::MotionEvent_PointerCoords arg0);
		
		// Methods
		void clear();
		void copyFrom(__jni_impl::android::view::MotionEvent_PointerCoords arg0);
		jfloat getAxisValue(jint arg0);
		void setAxisValue(jint arg0, jfloat arg1);
	};
} // namespace __jni_impl::android::view


namespace __jni_impl::android::view
{
	// Fields
	jfloat MotionEvent_PointerCoords::orientation()
	{
		return __thiz.getField<jfloat>(
			"orientation"
		);
	}
	jfloat MotionEvent_PointerCoords::pressure()
	{
		return __thiz.getField<jfloat>(
			"pressure"
		);
	}
	jfloat MotionEvent_PointerCoords::size()
	{
		return __thiz.getField<jfloat>(
			"size"
		);
	}
	jfloat MotionEvent_PointerCoords::toolMajor()
	{
		return __thiz.getField<jfloat>(
			"toolMajor"
		);
	}
	jfloat MotionEvent_PointerCoords::toolMinor()
	{
		return __thiz.getField<jfloat>(
			"toolMinor"
		);
	}
	jfloat MotionEvent_PointerCoords::touchMajor()
	{
		return __thiz.getField<jfloat>(
			"touchMajor"
		);
	}
	jfloat MotionEvent_PointerCoords::touchMinor()
	{
		return __thiz.getField<jfloat>(
			"touchMinor"
		);
	}
	jfloat MotionEvent_PointerCoords::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat MotionEvent_PointerCoords::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	
	// Constructors
	void MotionEvent_PointerCoords::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.MotionEvent$PointerCoords",
			"()V"
		);
	}
	void MotionEvent_PointerCoords::__constructor(__jni_impl::android::view::MotionEvent_PointerCoords arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.MotionEvent$PointerCoords",
			"(Landroid/view/MotionEvent$PointerCoords;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void MotionEvent_PointerCoords::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void MotionEvent_PointerCoords::copyFrom(__jni_impl::android::view::MotionEvent_PointerCoords arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Landroid/view/MotionEvent$PointerCoords;)V",
			arg0.__jniObject().object()
		);
	}
	jfloat MotionEvent_PointerCoords::getAxisValue(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getAxisValue",
			"(I)F",
			arg0
		);
	}
	void MotionEvent_PointerCoords::setAxisValue(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setAxisValue",
			"(IF)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class MotionEvent_PointerCoords : public __jni_impl::android::view::MotionEvent_PointerCoords
	{
	public:
		MotionEvent_PointerCoords(QAndroidJniObject obj) { __thiz = obj; }
		MotionEvent_PointerCoords()
		{
			__constructor();
		}
		MotionEvent_PointerCoords(__jni_impl::android::view::MotionEvent_PointerCoords arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_MOTIONEVENT_POINTERCOORDS

