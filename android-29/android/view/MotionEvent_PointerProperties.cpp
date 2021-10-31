#include "./MotionEvent_PointerProperties.hpp"

namespace android::view
{
	// Fields
	jint MotionEvent_PointerProperties::id()
	{
		return getField<jint>(
			"id"
		);
	}
	jint MotionEvent_PointerProperties::toolType()
	{
		return getField<jint>(
			"toolType"
		);
	}
	
	// QAndroidJniObject forward
	MotionEvent_PointerProperties::MotionEvent_PointerProperties(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MotionEvent_PointerProperties::MotionEvent_PointerProperties()
		: __JniBaseClass(
			"android.view.MotionEvent$PointerProperties",
			"()V"
		) {}
	MotionEvent_PointerProperties::MotionEvent_PointerProperties(android::view::MotionEvent_PointerProperties &arg0)
		: __JniBaseClass(
			"android.view.MotionEvent$PointerProperties",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.object()
		) {}
	
	// Methods
	void MotionEvent_PointerProperties::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void MotionEvent_PointerProperties::copyFrom(android::view::MotionEvent_PointerProperties arg0)
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.object()
		);
	}
	jboolean MotionEvent_PointerProperties::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MotionEvent_PointerProperties::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::view

