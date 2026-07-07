#pragma once

#include "../os/Parcel.def.hpp"
#include "./RangingMeasurement.def.hpp"
#include "./RangingData.def.hpp"

namespace android::ranging
{
	// Fields
	inline JObject RangingData::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.RangingData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RangingData::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::ranging::RangingMeasurement RangingData::getAzimuth() const
	{
		return callObjectMethod(
			"getAzimuth",
			"()Landroid/ranging/RangingMeasurement;"
		);
	}
	inline android::ranging::RangingMeasurement RangingData::getDistance() const
	{
		return callObjectMethod(
			"getDistance",
			"()Landroid/ranging/RangingMeasurement;"
		);
	}
	inline android::ranging::RangingMeasurement RangingData::getElevation() const
	{
		return callObjectMethod(
			"getElevation",
			"()Landroid/ranging/RangingMeasurement;"
		);
	}
	inline jint RangingData::getRangingTechnology() const
	{
		return callMethod<jint>(
			"getRangingTechnology",
			"()I"
		);
	}
	inline jint RangingData::getRssi() const
	{
		return callMethod<jint>(
			"getRssi",
			"()I"
		);
	}
	inline jlong RangingData::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	inline jboolean RangingData::hasRssi() const
	{
		return callMethod<jboolean>(
			"hasRssi",
			"()Z"
		);
	}
	inline void RangingData::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
