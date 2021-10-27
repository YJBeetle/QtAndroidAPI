#include "./MotionEvent_PointerProperties.hpp"

namespace android::view
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
	
	MotionEvent_PointerProperties::MotionEvent_PointerProperties(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	MotionEvent_PointerProperties::MotionEvent_PointerProperties()
	{
		__thiz = QAndroidJniObject(
			"android.view.MotionEvent$PointerProperties",
			"()V"
		);
	}
	MotionEvent_PointerProperties::MotionEvent_PointerProperties(android::view::MotionEvent_PointerProperties &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.MotionEvent$PointerProperties",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void MotionEvent_PointerProperties::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void MotionEvent_PointerProperties::copyFrom(android::view::MotionEvent_PointerProperties arg0)
	{
		__thiz.callMethod<void>(
			"copyFrom",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.__jniObject().object()
		);
	}
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
} // namespace android::view

