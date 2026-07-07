#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./RangingMeasurement.def.hpp"

namespace android::ranging
{
	// Fields
	inline jint RangingMeasurement::CONFIDENCE_HIGH()
	{
		return getStaticField<jint>(
			"android.ranging.RangingMeasurement",
			"CONFIDENCE_HIGH"
		);
	}
	inline jint RangingMeasurement::CONFIDENCE_LOW()
	{
		return getStaticField<jint>(
			"android.ranging.RangingMeasurement",
			"CONFIDENCE_LOW"
		);
	}
	inline jint RangingMeasurement::CONFIDENCE_MEDIUM()
	{
		return getStaticField<jint>(
			"android.ranging.RangingMeasurement",
			"CONFIDENCE_MEDIUM"
		);
	}
	inline JObject RangingMeasurement::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.RangingMeasurement",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint RangingMeasurement::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint RangingMeasurement::getConfidence() const
	{
		return callMethod<jint>(
			"getConfidence",
			"()I"
		);
	}
	inline jdouble RangingMeasurement::getMeasurement() const
	{
		return callMethod<jdouble>(
			"getMeasurement",
			"()D"
		);
	}
	inline JString RangingMeasurement::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RangingMeasurement::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
