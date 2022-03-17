#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./FillResponse.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject FillResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.FillResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint FillResponse::FLAG_DISABLE_ACTIVITY_ONLY()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillResponse",
			"FLAG_DISABLE_ACTIVITY_ONLY"
		);
	}
	inline jint FillResponse::FLAG_TRACK_CONTEXT_COMMITED()
	{
		return getStaticField<jint>(
			"android.service.autofill.FillResponse",
			"FLAG_TRACK_CONTEXT_COMMITED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint FillResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString FillResponse::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void FillResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

