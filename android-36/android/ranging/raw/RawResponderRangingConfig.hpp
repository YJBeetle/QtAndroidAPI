#pragma once

#include "../../os/Parcel.def.hpp"
#include "./RawRangingDevice.def.hpp"
#include "../../../JString.hpp"
#include "./RawResponderRangingConfig.def.hpp"

namespace android::ranging::raw
{
	// Fields
	inline JObject RawResponderRangingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.raw.RawResponderRangingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RawResponderRangingConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::ranging::raw::RawRangingDevice RawResponderRangingConfig::getRawRangingDevice() const
	{
		return callObjectMethod(
			"getRawRangingDevice",
			"()Landroid/ranging/raw/RawRangingDevice;"
		);
	}
	inline JString RawResponderRangingConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RawResponderRangingConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::raw

// Base class headers
#include "../RangingConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::raw;
#endif
