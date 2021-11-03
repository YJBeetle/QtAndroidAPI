#include "../content/ClipData.hpp"
#include "../content/ClipDescription.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DragEvent.hpp"

namespace android::view
{
	// Fields
	jint DragEvent::ACTION_DRAG_ENDED()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENDED"
		);
	}
	jint DragEvent::ACTION_DRAG_ENTERED()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENTERED"
		);
	}
	jint DragEvent::ACTION_DRAG_EXITED()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_EXITED"
		);
	}
	jint DragEvent::ACTION_DRAG_LOCATION()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_LOCATION"
		);
	}
	jint DragEvent::ACTION_DRAG_STARTED()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_STARTED"
		);
	}
	jint DragEvent::ACTION_DROP()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DROP"
		);
	}
	JObject DragEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.DragEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DragEvent::DragEvent(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DragEvent::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint DragEvent::getAction()
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	android::content::ClipData DragEvent::getClipData()
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	android::content::ClipDescription DragEvent::getClipDescription()
	{
		return callObjectMethod(
			"getClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	JObject DragEvent::getLocalState()
	{
		return callObjectMethod(
			"getLocalState",
			"()Ljava/lang/Object;"
		);
	}
	jboolean DragEvent::getResult()
	{
		return callMethod<jboolean>(
			"getResult",
			"()Z"
		);
	}
	jfloat DragEvent::getX()
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	jfloat DragEvent::getY()
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	JString DragEvent::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DragEvent::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

