#include "./MotionEvent_PointerCoords.hpp"

namespace android::view
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
	
	MotionEvent_PointerCoords::MotionEvent_PointerCoords(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MotionEvent_PointerCoords::MotionEvent_PointerCoords()
	{
		__thiz = QAndroidJniObject(
			"android.view.MotionEvent$PointerCoords",
			"()V"
		);
	}
	MotionEvent_PointerCoords::MotionEvent_PointerCoords(android::view::MotionEvent_PointerCoords &arg0)
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
	void MotionEvent_PointerCoords::copyFrom(android::view::MotionEvent_PointerCoords arg0)
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
} // namespace android::view

