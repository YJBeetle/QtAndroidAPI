#pragma once

#include "../../os/Parcel.def.hpp"
#include "./StreamingServiceInfo.def.hpp"

namespace android::telephony::mbms
{
	// Fields
	inline JObject StreamingServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telephony.mbms.StreamingServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint StreamingServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void StreamingServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telephony::mbms

// Base class headers
#include "./ServiceInfo.hpp"

