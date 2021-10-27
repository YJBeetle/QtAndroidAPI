#include "../os/Parcel.hpp"
#include "./GnssClock.hpp"

namespace android::location
{
	// Fields
	QAndroidJniObject GnssClock::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.GnssClock",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	GnssClock::GnssClock(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint GnssClock::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jdouble GnssClock::getBiasNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getBiasNanos",
			"()D"
		);
	}
	jdouble GnssClock::getBiasUncertaintyNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getBiasUncertaintyNanos",
			"()D"
		);
	}
	jdouble GnssClock::getDriftNanosPerSecond()
	{
		return __thiz.callMethod<jdouble>(
			"getDriftNanosPerSecond",
			"()D"
		);
	}
	jdouble GnssClock::getDriftUncertaintyNanosPerSecond()
	{
		return __thiz.callMethod<jdouble>(
			"getDriftUncertaintyNanosPerSecond",
			"()D"
		);
	}
	jlong GnssClock::getElapsedRealtimeNanos()
	{
		return __thiz.callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	jdouble GnssClock::getElapsedRealtimeUncertaintyNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getElapsedRealtimeUncertaintyNanos",
			"()D"
		);
	}
	jlong GnssClock::getFullBiasNanos()
	{
		return __thiz.callMethod<jlong>(
			"getFullBiasNanos",
			"()J"
		);
	}
	jint GnssClock::getHardwareClockDiscontinuityCount()
	{
		return __thiz.callMethod<jint>(
			"getHardwareClockDiscontinuityCount",
			"()I"
		);
	}
	jint GnssClock::getLeapSecond()
	{
		return __thiz.callMethod<jint>(
			"getLeapSecond",
			"()I"
		);
	}
	jlong GnssClock::getTimeNanos()
	{
		return __thiz.callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
	jdouble GnssClock::getTimeUncertaintyNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getTimeUncertaintyNanos",
			"()D"
		);
	}
	jboolean GnssClock::hasBiasNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasBiasNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasBiasUncertaintyNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasBiasUncertaintyNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasDriftNanosPerSecond()
	{
		return __thiz.callMethod<jboolean>(
			"hasDriftNanosPerSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasDriftUncertaintyNanosPerSecond()
	{
		return __thiz.callMethod<jboolean>(
			"hasDriftUncertaintyNanosPerSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasElapsedRealtimeNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasElapsedRealtimeNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasElapsedRealtimeUncertaintyNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasElapsedRealtimeUncertaintyNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasFullBiasNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasFullBiasNanos",
			"()Z"
		);
	}
	jboolean GnssClock::hasLeapSecond()
	{
		return __thiz.callMethod<jboolean>(
			"hasLeapSecond",
			"()Z"
		);
	}
	jboolean GnssClock::hasTimeUncertaintyNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasTimeUncertaintyNanos",
			"()Z"
		);
	}
	jstring GnssClock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GnssClock::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::location

