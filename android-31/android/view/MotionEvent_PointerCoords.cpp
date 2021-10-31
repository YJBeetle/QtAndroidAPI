#include "./MotionEvent_PointerCoords.hpp"

namespace android::view
{
	// Fields
	jfloat MotionEvent_PointerCoords::orientation()
	{
		return getField<jfloat>(
			"orientation"
		);
	}
	jfloat MotionEvent_PointerCoords::pressure()
	{
		return getField<jfloat>(
			"pressure"
		);
	}
	jfloat MotionEvent_PointerCoords::size()
	{
		return getField<jfloat>(
			"size"
		);
	}
	jfloat MotionEvent_PointerCoords::toolMajor()
	{
		return getField<jfloat>(
			"toolMajor"
		);
	}
	jfloat MotionEvent_PointerCoords::toolMinor()
	{
		return getField<jfloat>(
			"toolMinor"
		);
	}
	jfloat MotionEvent_PointerCoords::touchMajor()
	{
		return getField<jfloat>(
			"touchMajor"
		);
	}
	jfloat MotionEvent_PointerCoords::touchMinor()
	{
		return getField<jfloat>(
			"touchMinor"
		);
	}
	jfloat MotionEvent_PointerCoords::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	jfloat MotionEvent_PointerCoords::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	
	// QJniObject forward
	MotionEvent_PointerCoords::MotionEvent_PointerCoords(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MotionEvent_PointerCoords::MotionEvent_PointerCoords()
		: __JniBaseClass(
			"android.view.MotionEvent$PointerCoords",
			"()V"
		) {}
	MotionEvent_PointerCoords::MotionEvent_PointerCoords(android::view::MotionEvent_PointerCoords &arg0)
		: __JniBaseClass(
			"android.view.MotionEvent$PointerCoords",
			"(Landroid/view/MotionEvent$PointerCoords;)V",
			arg0.object()
		) {}
	
	// Methods
	void MotionEvent_PointerCoords::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void MotionEvent_PointerCoords::copyFrom(android::view::MotionEvent_PointerCoords arg0)
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/view/MotionEvent$PointerCoords;)V",
			arg0.object()
		);
	}
	jfloat MotionEvent_PointerCoords::getAxisValue(jint arg0)
	{
		return callMethod<jfloat>(
			"getAxisValue",
			"(I)F",
			arg0
		);
	}
	void MotionEvent_PointerCoords::setAxisValue(jint arg0, jfloat arg1)
	{
		callMethod<void>(
			"setAxisValue",
			"(IF)V",
			arg0,
			arg1
		);
	}
} // namespace android::view

