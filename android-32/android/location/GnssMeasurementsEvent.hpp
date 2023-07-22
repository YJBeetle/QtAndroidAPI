#pragma once

#include "./GnssClock.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./GnssMeasurementsEvent.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssMeasurementsEvent::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssMeasurementsEvent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssMeasurementsEvent::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::location::GnssClock GnssMeasurementsEvent::getClock() const
	{
		return callObjectMethod(
			"getClock",
			"()Landroid/location/GnssClock;"
		);
	}
	inline JObject GnssMeasurementsEvent::getMeasurements() const
	{
		return callObjectMethod(
			"getMeasurements",
			"()Ljava/util/Collection;"
		);
	}
	inline JString GnssMeasurementsEvent::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssMeasurementsEvent::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
