#pragma once

#include "../../os/Parcel.def.hpp"
#include "./VisibilitySetterAction_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./VisibilitySetterAction.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject VisibilitySetterAction::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.VisibilitySetterAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint VisibilitySetterAction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString VisibilitySetterAction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void VisibilitySetterAction::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

// Base class headers

