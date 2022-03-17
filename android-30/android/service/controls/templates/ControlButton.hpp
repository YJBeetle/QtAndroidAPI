#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./ControlButton.def.hpp"

namespace android::service::controls::templates
{
	// Fields
	inline JObject ControlButton::CREATOR()
	{
		return getStaticObjectField(
			"android.service.controls.templates.ControlButton",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ControlButton::ControlButton(jboolean arg0, JString arg1)
		: JObject(
			"android.service.controls.templates.ControlButton",
			"(ZLjava/lang/CharSequence;)V",
			arg0,
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint ControlButton::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString ControlButton::getActionDescription() const
	{
		return callObjectMethod(
			"getActionDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean ControlButton::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
	inline void ControlButton::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::controls::templates

// Base class headers

