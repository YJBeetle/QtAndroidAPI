#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./FillEventHistory.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject FillEventHistory::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillEventHistory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FillEventHistory::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle FillEventHistory::getClientState() const
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	inline JObject FillEventHistory::getEvents() const
	{
		return callObjectMethod(
			"getEvents",
			"()Ljava/util/List;"
		);
	}
	inline JString FillEventHistory::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FillEventHistory::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

