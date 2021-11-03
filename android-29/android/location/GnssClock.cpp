#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./GnssClock.hpp"

namespace android::location
{
	// Fields
	JObject GnssClock::CREATOR()
	{
		return getStaticObjectField(
			"android.location.GnssClock",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GnssClock::GnssClock(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint GnssClock::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jdouble GnssClock::getBiasNanos() const
	{
		return callMethod<jdouble>(
			"getBiasNanos",
			"()D"
		);
	}
	jdouble GnssClock::getBiasUncertaintyNanos() const
	{
		return callMethod<jdouble>(
			"getBiasUncertaintyNanos",
			"()D"
		);
	}
	jdouble GnssClock::getDriftNanosPerSecond() const
	{
		return callMethod<jdouble>(
			"getDriftNanosPerSecond",
			"()D"
		);
	}
	jdouble GnssClock::getDriftUncertaintyNanosPerSecond() const
	{
		return callMethod<jdouble>(
			"getDriftUncertaintyNanosPerSecond",
			"()D"
		);
	}
	jlong GnssClock::getElapsedRealtimeNanos() const
	{
		return callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	jdouble GnssClock::getElapsedRealtimeUncertaintyNanos() const
	{
		return callMethod<jdouble>(
			"getElapsedRealtimeUncertaintyNanos",
			"()D"
		);
	}
	jlong GnssClock::getFullBiasNanos() const
	{
		return callMethod<jlong>(
			"getFullBiasNanos",
			"()J"
		);
	}
	jint GnssClock::getHardwareClockDiscontinuityCount() const
	{
		return callMethod<jint>(
			"getHardwareClockDiscontinuityCount",
			"()I"
		);
	}
	jint GnssClock::getLeapSecond() const
	{
		return callMethod<jint>(
			"getLeapSecond",
			"()I"
		);
	}
	jlong GnssClock::getTimeNanos() const
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jdouble GnssClock::getTimeUncertaintyNanos() const
	{
		return callMethod<jdouble>(
			"getTimeUncertaintyNanos",
			"()D"
		);
	}
	jboolean GnssClock::hasBiasNanos() const
	{
		return callMethod<jboolean>(
			"hasBiasNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasBiasUncertaintyNanos() const
	{
		return callMethod<jboolean>(
			"hasBiasUncertaintyNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasDriftNanosPerSecond() const
	{
		return callMethod<jboolean>(
			"hasDriftNanosPerSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasDriftUncertaintyNanosPerSecond() const
	{
		return callMethod<jboolean>(
			"hasDriftUncertaintyNanosPerSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasElapsedRealtimeNanos() const
	{
		return callMethod<jboolean>(
			"hasElapsedRealtimeNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasElapsedRealtimeUncertaintyNanos() const
	{
		return callMethod<jboolean>(
			"hasElapsedRealtimeUncertaintyNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasFullBiasNanos() const
	{
		return callMethod<jboolean>(
			"hasFullBiasNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasLeapSecond() const
	{
		return callMethod<jboolean>(
			"hasLeapSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasTimeUncertaintyNanos() const
	{
		return callMethod<jboolean>(
			"hasTimeUncertaintyNanos",
			"()Z"
		);
	}
	JString GnssClock::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void GnssClock::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

