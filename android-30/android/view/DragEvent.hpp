#pragma once

#include "../content/ClipData.def.hpp"
#include "../content/ClipDescription.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DragEvent.def.hpp"

namespace android::view
{
	// Fields
	inline jint DragEvent::ACTION_DRAG_ENDED()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENDED"
		);
	}
	inline jint DragEvent::ACTION_DRAG_ENTERED()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_ENTERED"
		);
	}
	inline jint DragEvent::ACTION_DRAG_EXITED()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_EXITED"
		);
	}
	inline jint DragEvent::ACTION_DRAG_LOCATION()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_LOCATION"
		);
	}
	inline jint DragEvent::ACTION_DRAG_STARTED()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DRAG_STARTED"
		);
	}
	inline jint DragEvent::ACTION_DROP()
	{
		return getStaticField<jint>(
			"android.view.DragEvent",
			"ACTION_DROP"
		);
	}
	inline JObject DragEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.view.DragEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DragEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint DragEvent::getAction() const
	{
		return callMethod<jint>(
			"getAction",
			"()I"
		);
	}
	inline android::content::ClipData DragEvent::getClipData() const
	{
		return callObjectMethod(
			"getClipData",
			"()Landroid/content/ClipData;"
		);
	}
	inline android::content::ClipDescription DragEvent::getClipDescription() const
	{
		return callObjectMethod(
			"getClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	inline JObject DragEvent::getLocalState() const
	{
		return callObjectMethod(
			"getLocalState",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean DragEvent::getResult() const
	{
		return callMethod<jboolean>(
			"getResult",
			"()Z"
		);
	}
	inline jfloat DragEvent::getX() const
	{
		return callMethod<jfloat>(
			"getX",
			"()F"
		);
	}
	inline jfloat DragEvent::getY() const
	{
		return callMethod<jfloat>(
			"getY",
			"()F"
		);
	}
	inline JString DragEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DragEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers

