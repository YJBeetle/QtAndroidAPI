#include "../../JObject.hpp"
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
	MotionEvent_PointerProperties::MotionEvent_PointerProperties(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MotionEvent_PointerProperties::MotionEvent_PointerProperties()
		: JObject(
			"android.view.MotionEvent$PointerProperties",
			"()V"
		) {}
	MotionEvent_PointerProperties::MotionEvent_PointerProperties(android::view::MotionEvent_PointerProperties &arg0)
		: JObject(
			"android.view.MotionEvent$PointerProperties",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.object()
		) {}
	
	// Methods
	void MotionEvent_PointerProperties::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	void MotionEvent_PointerProperties::copyFrom(android::view::MotionEvent_PointerProperties arg0) const
	{
		callMethod<void>(
			"copyFrom",
			"(Landroid/view/MotionEvent$PointerProperties;)V",
			arg0.object()
		);
	}
	jboolean MotionEvent_PointerProperties::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint MotionEvent_PointerProperties::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::view

