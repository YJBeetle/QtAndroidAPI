#pragma once

#ifndef ANDROID_LOCATION_GNSSCLOCK
#define ANDROID_LOCATION_GNSSCLOCK

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::location
{
	class GnssClock : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jlong getElapsedRealtimeNanos();
		jdouble getElapsedRealtimeUncertaintyNanos();
		jboolean hasElapsedRealtimeUncertaintyNanos();
		jboolean hasLeapSecond();
		jint getLeapSecond();
		jboolean hasTimeUncertaintyNanos();
		jdouble getTimeUncertaintyNanos();
		jboolean hasFullBiasNanos();
		jlong getFullBiasNanos();
		jboolean hasBiasNanos();
		jdouble getBiasNanos();
		jboolean hasBiasUncertaintyNanos();
		jdouble getBiasUncertaintyNanos();
		jboolean hasDriftNanosPerSecond();
		jdouble getDriftNanosPerSecond();
		jboolean hasDriftUncertaintyNanosPerSecond();
		jdouble getDriftUncertaintyNanosPerSecond();
		jboolean hasElapsedRealtimeNanos();
		jint getHardwareClockDiscontinuityCount();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jlong getTimeNanos();
	};
} // namespace __jni_impl::android::location

#include "../os/Parcel.hpp"

namespace __jni_impl::android::location
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
	
	// Constructors
	void GnssClock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.location.GnssClock",
			"(V)V");
	}
	
	// Methods
	jstring GnssClock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jboolean GnssClock::hasElapsedRealtimeUncertaintyNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasElapsedRealtimeUncertaintyNanos",
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
	jint GnssClock::getLeapSecond()
	{
		return __thiz.callMethod<jint>(
			"getLeapSecond",
			"()I"
		);
	}
	jboolean GnssClock::hasTimeUncertaintyNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasTimeUncertaintyNanos",
			"()Z"
		);
	}
	jdouble GnssClock::getTimeUncertaintyNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getTimeUncertaintyNanos",
			"()D"
		);
	}
	jboolean GnssClock::hasFullBiasNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasFullBiasNanos",
			"()Z"
		);
	}
	jlong GnssClock::getFullBiasNanos()
	{
		return __thiz.callMethod<jlong>(
			"getFullBiasNanos",
			"()J"
		);
	}
	jboolean GnssClock::hasBiasNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasBiasNanos",
			"()Z"
		);
	}
	jdouble GnssClock::getBiasNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getBiasNanos",
			"()D"
		);
	}
	jboolean GnssClock::hasBiasUncertaintyNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasBiasUncertaintyNanos",
			"()Z"
		);
	}
	jdouble GnssClock::getBiasUncertaintyNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getBiasUncertaintyNanos",
			"()D"
		);
	}
	jboolean GnssClock::hasDriftNanosPerSecond()
	{
		return __thiz.callMethod<jboolean>(
			"hasDriftNanosPerSecond",
			"()Z"
		);
	}
	jdouble GnssClock::getDriftNanosPerSecond()
	{
		return __thiz.callMethod<jdouble>(
			"getDriftNanosPerSecond",
			"()D"
		);
	}
	jboolean GnssClock::hasDriftUncertaintyNanosPerSecond()
	{
		return __thiz.callMethod<jboolean>(
			"hasDriftUncertaintyNanosPerSecond",
			"()Z"
		);
	}
	jdouble GnssClock::getDriftUncertaintyNanosPerSecond()
	{
		return __thiz.callMethod<jdouble>(
			"getDriftUncertaintyNanosPerSecond",
			"()D"
		);
	}
	jboolean GnssClock::hasElapsedRealtimeNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasElapsedRealtimeNanos",
			"()Z"
		);
	}
	jint GnssClock::getHardwareClockDiscontinuityCount()
	{
		return __thiz.callMethod<jint>(
			"getHardwareClockDiscontinuityCount",
			"()I"
		);
	}
	jint GnssClock::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void GnssClock::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong GnssClock::getTimeNanos()
	{
		return __thiz.callMethod<jlong>(
			"getTimeNanos",
			"()J"
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class GnssClock : public __jni_impl::android::location::GnssClock
	{
	public:
		GnssClock(QAndroidJniObject obj) { __thiz = obj; }
		GnssClock()
		{
			__constructor();
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_GNSSCLOCK

