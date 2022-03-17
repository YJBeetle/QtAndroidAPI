#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./GnssClock.def.hpp"

namespace android::location
{
	// Fields
	inline JObject GnssClock::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssClock",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint GnssClock::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jdouble GnssClock::getBiasNanos() const
	{
		return callMethod<jdouble>(
			"getBiasNanos",
			"()D"
		);
	}
	inline jdouble GnssClock::getBiasUncertaintyNanos() const
	{
		return callMethod<jdouble>(
			"getBiasUncertaintyNanos",
			"()D"
		);
	}
	inline jdouble GnssClock::getDriftNanosPerSecond() const
	{
		return callMethod<jdouble>(
			"getDriftNanosPerSecond",
			"()D"
		);
	}
	inline jdouble GnssClock::getDriftUncertaintyNanosPerSecond() const
	{
		return callMethod<jdouble>(
			"getDriftUncertaintyNanosPerSecond",
			"()D"
		);
	}
	inline jlong GnssClock::getFullBiasNanos() const
	{
		return callMethod<jlong>(
			"getFullBiasNanos",
			"()J"
		);
	}
	inline jint GnssClock::getHardwareClockDiscontinuityCount() const
	{
		return callMethod<jint>(
			"getHardwareClockDiscontinuityCount",
			"()I"
		);
	}
	inline jint GnssClock::getLeapSecond() const
	{
		return callMethod<jint>(
			"getLeapSecond",
			"()I"
		);
	}
	inline jlong GnssClock::getTimeNanos() const
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	inline jdouble GnssClock::getTimeUncertaintyNanos() const
	{
		return callMethod<jdouble>(
			"getTimeUncertaintyNanos",
			"()D"
		);
	}
	inline jboolean GnssClock::hasBiasNanos() const
	{
		return callMethod<jboolean>(
			"hasBiasNanos",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasBiasUncertaintyNanos() const
	{
		return callMethod<jboolean>(
			"hasBiasUncertaintyNanos",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasDriftNanosPerSecond() const
	{
		return callMethod<jboolean>(
			"hasDriftNanosPerSecond",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasDriftUncertaintyNanosPerSecond() const
	{
		return callMethod<jboolean>(
			"hasDriftUncertaintyNanosPerSecond",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasFullBiasNanos() const
	{
		return callMethod<jboolean>(
			"hasFullBiasNanos",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasLeapSecond() const
	{
		return callMethod<jboolean>(
			"hasLeapSecond",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasTimeUncertaintyNanos() const
	{
		return callMethod<jboolean>(
			"hasTimeUncertaintyNanos",
			"()Z"
		);
	}
	inline JString GnssClock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void GnssClock::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
