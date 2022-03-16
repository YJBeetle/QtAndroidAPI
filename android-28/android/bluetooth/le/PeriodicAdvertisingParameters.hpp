#pragma once

#include "../../os/Parcel.def.hpp"
#include "./PeriodicAdvertisingParameters.def.hpp"

namespace android::bluetooth::le
{
	// Fields
	inline JObject PeriodicAdvertisingParameters::CREATOR()
	{
		return getStaticObjectField(
			"android.bluetooth.le.PeriodicAdvertisingParameters",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PeriodicAdvertisingParameters::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PeriodicAdvertisingParameters::getIncludeTxPower() const
	{
		return callMethod<jboolean>(
			"getIncludeTxPower",
			"()Z"
		);
	}
	inline jint PeriodicAdvertisingParameters::getInterval() const
	{
		return callMethod<jint>(
			"getInterval",
			"()I"
		);
	}
	inline void PeriodicAdvertisingParameters::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::bluetooth::le

// Base class headers

