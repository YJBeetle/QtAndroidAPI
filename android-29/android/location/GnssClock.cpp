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
	jint GnssClock::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jdouble GnssClock::getBiasNanos()
	{
		return callMethod<jdouble>(
			"getBiasNanos",
			"()D"
		);
	}
	jdouble GnssClock::getBiasUncertaintyNanos()
	{
		return callMethod<jdouble>(
			"getBiasUncertaintyNanos",
			"()D"
		);
	}
	jdouble GnssClock::getDriftNanosPerSecond()
	{
		return callMethod<jdouble>(
			"getDriftNanosPerSecond",
			"()D"
		);
	}
	jdouble GnssClock::getDriftUncertaintyNanosPerSecond()
	{
		return callMethod<jdouble>(
			"getDriftUncertaintyNanosPerSecond",
			"()D"
		);
	}
	jlong GnssClock::getElapsedRealtimeNanos()
	{
		return callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	jdouble GnssClock::getElapsedRealtimeUncertaintyNanos()
	{
		return callMethod<jdouble>(
			"getElapsedRealtimeUncertaintyNanos",
			"()D"
		);
	}
	jlong GnssClock::getFullBiasNanos()
	{
		return callMethod<jlong>(
			"getFullBiasNanos",
			"()J"
		);
	}
	jint GnssClock::getHardwareClockDiscontinuityCount()
	{
		return callMethod<jint>(
			"getHardwareClockDiscontinuityCount",
			"()I"
		);
	}
	jint GnssClock::getLeapSecond()
	{
		return callMethod<jint>(
			"getLeapSecond",
			"()I"
		);
	}
	jlong GnssClock::getTimeNanos()
	{
		return callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jdouble GnssClock::getTimeUncertaintyNanos()
	{
		return callMethod<jdouble>(
			"getTimeUncertaintyNanos",
			"()D"
		);
	}
	jboolean GnssClock::hasBiasNanos()
	{
		return callMethod<jboolean>(
			"hasBiasNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasBiasUncertaintyNanos()
	{
		return callMethod<jboolean>(
			"hasBiasUncertaintyNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasDriftNanosPerSecond()
	{
		return callMethod<jboolean>(
			"hasDriftNanosPerSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasDriftUncertaintyNanosPerSecond()
	{
		return callMethod<jboolean>(
			"hasDriftUncertaintyNanosPerSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasElapsedRealtimeNanos()
	{
		return callMethod<jboolean>(
			"hasElapsedRealtimeNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasElapsedRealtimeUncertaintyNanos()
	{
		return callMethod<jboolean>(
			"hasElapsedRealtimeUncertaintyNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasFullBiasNanos()
	{
		return callMethod<jboolean>(
			"hasFullBiasNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasLeapSecond()
	{
		return callMethod<jboolean>(
			"hasLeapSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasTimeUncertaintyNanos()
	{
		return callMethod<jboolean>(
			"hasTimeUncertaintyNanos",
			"()Z"
		);
	}
	JString GnssClock::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void GnssClock::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

