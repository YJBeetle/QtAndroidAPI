#pragma once

#include "../../../os/Bundle.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "./Characteristics.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	inline JObject Characteristics::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.aware.Characteristics",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint Characteristics::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint Characteristics::getMaxMatchFilterLength() const
	{
		return callMethod<jint>(
			"getMaxMatchFilterLength",
			"()I"
		);
	}
	inline jint Characteristics::getMaxServiceNameLength() const
	{
		return callMethod<jint>(
			"getMaxServiceNameLength",
			"()I"
		);
	}
	inline jint Characteristics::getMaxServiceSpecificInfoLength() const
	{
		return callMethod<jint>(
			"getMaxServiceSpecificInfoLength",
			"()I"
		);
	}
	inline void Characteristics::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

