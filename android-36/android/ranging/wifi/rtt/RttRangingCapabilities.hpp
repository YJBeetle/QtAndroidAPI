#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./RttRangingCapabilities.def.hpp"

namespace android::ranging::wifi::rtt
{
	// Fields
	inline JObject RttRangingCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.wifi.rtt.RttRangingCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RttRangingCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RttRangingCapabilities::hasPeriodicRangingHardwareFeature() const
	{
		return callMethod<jboolean>(
			"hasPeriodicRangingHardwareFeature",
			"()Z"
		);
	}
	inline JString RttRangingCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RttRangingCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::wifi::rtt

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::wifi::rtt;
#endif
