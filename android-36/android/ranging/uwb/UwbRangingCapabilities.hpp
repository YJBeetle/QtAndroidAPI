#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./UwbRangingCapabilities.def.hpp"

namespace android::ranging::uwb
{
	// Fields
	inline JObject UwbRangingCapabilities::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.uwb.UwbRangingCapabilities",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint UwbRangingCapabilities::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline java::time::Duration UwbRangingCapabilities::getMinimumRangingInterval() const
	{
		return callObjectMethod(
			"getMinimumRangingInterval",
			"()Ljava/time/Duration;"
		);
	}
	inline JObject UwbRangingCapabilities::getSupportedChannels() const
	{
		return callObjectMethod(
			"getSupportedChannels",
			"()Ljava/util/List;"
		);
	}
	inline JObject UwbRangingCapabilities::getSupportedConfigIds() const
	{
		return callObjectMethod(
			"getSupportedConfigIds",
			"()Ljava/util/List;"
		);
	}
	inline JObject UwbRangingCapabilities::getSupportedNotificationConfigurations() const
	{
		return callObjectMethod(
			"getSupportedNotificationConfigurations",
			"()Ljava/util/List;"
		);
	}
	inline JObject UwbRangingCapabilities::getSupportedPreambleIndexes() const
	{
		return callObjectMethod(
			"getSupportedPreambleIndexes",
			"()Ljava/util/List;"
		);
	}
	inline JObject UwbRangingCapabilities::getSupportedRangingUpdateRates() const
	{
		return callObjectMethod(
			"getSupportedRangingUpdateRates",
			"()Ljava/util/List;"
		);
	}
	inline JObject UwbRangingCapabilities::getSupportedSlotDurations() const
	{
		return callObjectMethod(
			"getSupportedSlotDurations",
			"()Ljava/util/List;"
		);
	}
	inline jboolean UwbRangingCapabilities::isAzimuthalAngleSupported() const
	{
		return callMethod<jboolean>(
			"isAzimuthalAngleSupported",
			"()Z"
		);
	}
	inline jboolean UwbRangingCapabilities::isBackgroundRangingSupported() const
	{
		return callMethod<jboolean>(
			"isBackgroundRangingSupported",
			"()Z"
		);
	}
	inline jboolean UwbRangingCapabilities::isDistanceMeasurementSupported() const
	{
		return callMethod<jboolean>(
			"isDistanceMeasurementSupported",
			"()Z"
		);
	}
	inline jboolean UwbRangingCapabilities::isElevationAngleSupported() const
	{
		return callMethod<jboolean>(
			"isElevationAngleSupported",
			"()Z"
		);
	}
	inline jboolean UwbRangingCapabilities::isRangingIntervalReconfigurationSupported() const
	{
		return callMethod<jboolean>(
			"isRangingIntervalReconfigurationSupported",
			"()Z"
		);
	}
	inline JString UwbRangingCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void UwbRangingCapabilities::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging::uwb

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::uwb;
#endif
