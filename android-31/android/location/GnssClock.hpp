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
	inline jlong GnssClock::getElapsedRealtimeNanos() const
	{
		return callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	inline jdouble GnssClock::getElapsedRealtimeUncertaintyNanos() const
	{
		return callMethod<jdouble>(
			"getElapsedRealtimeUncertaintyNanos",
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
	inline jdouble GnssClock::getReferenceCarrierFrequencyHzForIsb() const
	{
		return callMethod<jdouble>(
			"getReferenceCarrierFrequencyHzForIsb",
			"()D"
		);
	}
	inline JString GnssClock::getReferenceCodeTypeForIsb() const
	{
		return callObjectMethod(
			"getReferenceCodeTypeForIsb",
			"()Ljava/lang/String;"
		);
	}
	inline jint GnssClock::getReferenceConstellationTypeForIsb() const
	{
		return callMethod<jint>(
			"getReferenceConstellationTypeForIsb",
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
	inline jboolean GnssClock::hasElapsedRealtimeNanos() const
	{
		return callMethod<jboolean>(
			"hasElapsedRealtimeNanos",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasElapsedRealtimeUncertaintyNanos() const
	{
		return callMethod<jboolean>(
			"hasElapsedRealtimeUncertaintyNanos",
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
	inline jboolean GnssClock::hasReferenceCarrierFrequencyHzForIsb() const
	{
		return callMethod<jboolean>(
			"hasReferenceCarrierFrequencyHzForIsb",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasReferenceCodeTypeForIsb() const
	{
		return callMethod<jboolean>(
			"hasReferenceCodeTypeForIsb",
			"()Z"
		);
	}
	inline jboolean GnssClock::hasReferenceConstellationTypeForIsb() const
	{
		return callMethod<jboolean>(
			"hasReferenceConstellationTypeForIsb",
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

