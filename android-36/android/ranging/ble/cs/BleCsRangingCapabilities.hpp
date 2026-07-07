#pragma once

#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./BleCsRangingCapabilities.def.hpp"

namespace android::ranging::ble::cs
{
	// Fields
	inline JObject BleCsRangingCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.ble.cs.BleCsRangingCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint BleCsRangingCapabilities::CS_SECURITY_LEVEL_FOUR()
	{
		return getStaticField<jint>(
			"android.ranging.ble.cs.BleCsRangingCapabilities",
			"CS_SECURITY_LEVEL_FOUR"
		);
	}
	inline jint BleCsRangingCapabilities::CS_SECURITY_LEVEL_ONE()
	{
		return getStaticField<jint>(
			"android.ranging.ble.cs.BleCsRangingCapabilities",
			"CS_SECURITY_LEVEL_ONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint BleCsRangingCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject BleCsRangingCapabilities::getSupportedSecurityLevels() const
	{
		return callObjectMethod(
			"getSupportedSecurityLevels",
			"()Ljava/util/Set;"
		);
	}
	inline JString BleCsRangingCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void BleCsRangingCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::ble::cs

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::ble::cs;
#endif
