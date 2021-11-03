#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./AccessibilityGestureEvent.hpp"

namespace android::accessibilityservice
{
	// Fields
	JObject AccessibilityGestureEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.accessibilityservice.AccessibilityGestureEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	AccessibilityGestureEvent::AccessibilityGestureEvent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString AccessibilityGestureEvent::gestureIdToString(jint arg0)
	{
		return callStaticObjectMethod(
			"android.accessibilityservice.AccessibilityGestureEvent",
			"gestureIdToString",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jint AccessibilityGestureEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint AccessibilityGestureEvent::getDisplayId()
	{
		return callMethod<jint>(
			"getDisplayId",
			"()I"
		);
	}
	jint AccessibilityGestureEvent::getGestureId()
	{
		return callMethod<jint>(
			"getGestureId",
			"()I"
		);
	}
	JObject AccessibilityGestureEvent::getMotionEvents()
	{
		return callObjectMethod(
			"getMotionEvents",
			"()Ljava/util/List;"
		);
	}
	JString AccessibilityGestureEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void AccessibilityGestureEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accessibilityservice

