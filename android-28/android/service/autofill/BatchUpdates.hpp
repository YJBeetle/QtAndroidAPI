#pragma once

#include "../../os/Parcel.def.hpp"
#include "./BatchUpdates_Builder.def.hpp"
#include "../../../JString.hpp"
#include "./BatchUpdates.def.hpp"

namespace android::service::autofill
{
	// Fields
	inline JObject BatchUpdates::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.BatchUpdates",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BatchUpdates::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString BatchUpdates::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BatchUpdates::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
