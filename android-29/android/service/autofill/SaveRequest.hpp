#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./SaveRequest.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject SaveRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.SaveRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SaveRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::os::Bundle SaveRequest::getClientState() const
	{
		return callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	inline JObject SaveRequest::getDatasetIds() const
	{
		return callObjectMethod(
			"getDatasetIds",
			"()Ljava/util/List;"
		);
	}
	inline JObject SaveRequest::getFillContexts() const
	{
		return callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	inline void SaveRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

