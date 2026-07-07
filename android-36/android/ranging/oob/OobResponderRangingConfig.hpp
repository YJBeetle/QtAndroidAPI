#pragma once

#include "../../os/Parcel.def.hpp"
#include "./DeviceHandle.def.hpp"
#include "../../../JString.hpp"
#include "./OobResponderRangingConfig.def.hpp"

namespace android::ranging::oob
{
	// Fields
	inline JObject OobResponderRangingConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.oob.OobResponderRangingConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint OobResponderRangingConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::ranging::oob::DeviceHandle OobResponderRangingConfig::getDeviceHandle() const
	{
		return callObjectMethod(
			"getDeviceHandle",
			"()Landroid/ranging/oob/DeviceHandle;"
		);
	}
	inline JString OobResponderRangingConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void OobResponderRangingConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::oob

// Base class headers
#include "../RangingConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::oob;
#endif
