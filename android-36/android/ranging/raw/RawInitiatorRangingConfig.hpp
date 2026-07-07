#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./RawInitiatorRangingConfig.def.hpp"

namespace android::ranging::raw
{
	// Fields
	inline JObject RawInitiatorRangingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.raw.RawInitiatorRangingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RawInitiatorRangingConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject RawInitiatorRangingConfig::getRawRangingDevices() const
	{
		return callObjectMethod(
			"getRawRangingDevices",
			"()Ljava/util/List;"
		);
	}
	inline JString RawInitiatorRangingConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RawInitiatorRangingConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
