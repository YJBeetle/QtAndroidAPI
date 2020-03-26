#pragma once

#ifndef ANDROID_LOCATION_LOCATION
#define ANDROID_LOCATION_LOCATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::location
{
	class Location : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FORMAT_DEGREES();
		static jint FORMAT_MINUTES();
		static jint FORMAT_SECONDS();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::android::location::Location arg0);
		
		// Methods
		jstring toString();
		void set(__jni_impl::android::location::Location arg0);
		void reset();
		jstring getProvider();
		static jdouble convert(jstring arg0);
		static jstring convert(jdouble arg0, jint arg1);
		jlong getTime();
		void setTime(jlong arg0);
		jfloat distanceTo(__jni_impl::android::location::Location arg0);
		jfloat bearingTo(__jni_impl::android::location::Location arg0);
		void setProvider(jstring arg0);
		jlong getElapsedRealtimeNanos();
		void setElapsedRealtimeNanos(jlong arg0);
		jdouble getElapsedRealtimeUncertaintyNanos();
		void setElapsedRealtimeUncertaintyNanos(jdouble arg0);
		jboolean hasElapsedRealtimeUncertaintyNanos();
		jdouble getLatitude();
		void setLatitude(jdouble arg0);
		jdouble getLongitude();
		void setLongitude(jdouble arg0);
		jboolean hasAltitude();
		void setAltitude(jdouble arg0);
		void removeAltitude();
		jboolean hasSpeed();
		jfloat getSpeed();
		void setSpeed(jfloat arg0);
		void removeSpeed();
		jboolean hasBearing();
		jfloat getBearing();
		void setBearing(jfloat arg0);
		void removeBearing();
		jboolean hasAccuracy();
		jfloat getAccuracy();
		void setAccuracy(jfloat arg0);
		void removeAccuracy();
		jboolean hasVerticalAccuracy();
		jfloat getVerticalAccuracyMeters();
		void setVerticalAccuracyMeters(jfloat arg0);
		jboolean hasSpeedAccuracy();
		jfloat getSpeedAccuracyMetersPerSecond();
		void setSpeedAccuracyMetersPerSecond(jfloat arg0);
		jboolean hasBearingAccuracy();
		jfloat getBearingAccuracyDegrees();
		void setBearingAccuracyDegrees(jfloat arg0);
		jboolean isFromMockProvider();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		QAndroidJniObject getExtras();
		void setExtras(__jni_impl::android::os::Bundle arg0);
		jdouble getAltitude();
		static void distanceBetween(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jfloatArray arg4);
	};
} // namespace __jni_impl::android::location

#include "../os/Parcel.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::location
{
	// Fields
	QAndroidJniObject Location::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.location.Location",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Location::FORMAT_DEGREES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Location",
			"FORMAT_DEGREES"
		);
	}
	jint Location::FORMAT_MINUTES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Location",
			"FORMAT_MINUTES"
		);
	}
	jint Location::FORMAT_SECONDS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.location.Location",
			"FORMAT_SECONDS"
		);
	}
	
	// Constructors
	void Location::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Location",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void Location::__constructor(__jni_impl::android::location::Location arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Location",
			"(Landroid/location/Location;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring Location::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Location::set(__jni_impl::android::location::Location arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/location/Location;)V",
			arg0.__jniObject().object()
		);
	}
	void Location::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	jstring Location::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble Location::convert(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"android.location.Location",
			"convert",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jstring Location::convert(jdouble arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.location.Location",
			"convert",
			"(DI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jlong Location::getTime()
	{
		return __thiz.callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	void Location::setTime(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	jfloat Location::distanceTo(__jni_impl::android::location::Location arg0)
	{
		return __thiz.callMethod<jfloat>(
			"distanceTo",
			"(Landroid/location/Location;)F",
			arg0.__jniObject().object()
		);
	}
	jfloat Location::bearingTo(__jni_impl::android::location::Location arg0)
	{
		return __thiz.callMethod<jfloat>(
			"bearingTo",
			"(Landroid/location/Location;)F",
			arg0.__jniObject().object()
		);
	}
	void Location::setProvider(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setProvider",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jlong Location::getElapsedRealtimeNanos()
	{
		return __thiz.callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	void Location::setElapsedRealtimeNanos(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setElapsedRealtimeNanos",
			"(J)V",
			arg0
		);
	}
	jdouble Location::getElapsedRealtimeUncertaintyNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getElapsedRealtimeUncertaintyNanos",
			"()D"
		);
	}
	void Location::setElapsedRealtimeUncertaintyNanos(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setElapsedRealtimeUncertaintyNanos",
			"(D)V",
			arg0
		);
	}
	jboolean Location::hasElapsedRealtimeUncertaintyNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasElapsedRealtimeUncertaintyNanos",
			"()Z"
		);
	}
	jdouble Location::getLatitude()
	{
		return __thiz.callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	void Location::setLatitude(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
		);
	}
	jdouble Location::getLongitude()
	{
		return __thiz.callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	void Location::setLongitude(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setLongitude",
			"(D)V",
			arg0
		);
	}
	jboolean Location::hasAltitude()
	{
		return __thiz.callMethod<jboolean>(
			"hasAltitude",
			"()Z"
		);
	}
	void Location::setAltitude(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setAltitude",
			"(D)V",
			arg0
		);
	}
	void Location::removeAltitude()
	{
		__thiz.callMethod<void>(
			"removeAltitude",
			"()V"
		);
	}
	jboolean Location::hasSpeed()
	{
		return __thiz.callMethod<jboolean>(
			"hasSpeed",
			"()Z"
		);
	}
	jfloat Location::getSpeed()
	{
		return __thiz.callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	void Location::setSpeed(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setSpeed",
			"(F)V",
			arg0
		);
	}
	void Location::removeSpeed()
	{
		__thiz.callMethod<void>(
			"removeSpeed",
			"()V"
		);
	}
	jboolean Location::hasBearing()
	{
		return __thiz.callMethod<jboolean>(
			"hasBearing",
			"()Z"
		);
	}
	jfloat Location::getBearing()
	{
		return __thiz.callMethod<jfloat>(
			"getBearing",
			"()F"
		);
	}
	void Location::setBearing(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setBearing",
			"(F)V",
			arg0
		);
	}
	void Location::removeBearing()
	{
		__thiz.callMethod<void>(
			"removeBearing",
			"()V"
		);
	}
	jboolean Location::hasAccuracy()
	{
		return __thiz.callMethod<jboolean>(
			"hasAccuracy",
			"()Z"
		);
	}
	jfloat Location::getAccuracy()
	{
		return __thiz.callMethod<jfloat>(
			"getAccuracy",
			"()F"
		);
	}
	void Location::setAccuracy(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setAccuracy",
			"(F)V",
			arg0
		);
	}
	void Location::removeAccuracy()
	{
		__thiz.callMethod<void>(
			"removeAccuracy",
			"()V"
		);
	}
	jboolean Location::hasVerticalAccuracy()
	{
		return __thiz.callMethod<jboolean>(
			"hasVerticalAccuracy",
			"()Z"
		);
	}
	jfloat Location::getVerticalAccuracyMeters()
	{
		return __thiz.callMethod<jfloat>(
			"getVerticalAccuracyMeters",
			"()F"
		);
	}
	void Location::setVerticalAccuracyMeters(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalAccuracyMeters",
			"(F)V",
			arg0
		);
	}
	jboolean Location::hasSpeedAccuracy()
	{
		return __thiz.callMethod<jboolean>(
			"hasSpeedAccuracy",
			"()Z"
		);
	}
	jfloat Location::getSpeedAccuracyMetersPerSecond()
	{
		return __thiz.callMethod<jfloat>(
			"getSpeedAccuracyMetersPerSecond",
			"()F"
		);
	}
	void Location::setSpeedAccuracyMetersPerSecond(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setSpeedAccuracyMetersPerSecond",
			"(F)V",
			arg0
		);
	}
	jboolean Location::hasBearingAccuracy()
	{
		return __thiz.callMethod<jboolean>(
			"hasBearingAccuracy",
			"()Z"
		);
	}
	jfloat Location::getBearingAccuracyDegrees()
	{
		return __thiz.callMethod<jfloat>(
			"getBearingAccuracyDegrees",
			"()F"
		);
	}
	void Location::setBearingAccuracyDegrees(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setBearingAccuracyDegrees",
			"(F)V",
			arg0
		);
	}
	jboolean Location::isFromMockProvider()
	{
		return __thiz.callMethod<jboolean>(
			"isFromMockProvider",
			"()Z"
		);
	}
	jint Location::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Location::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Location::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Location::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	void Location::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		__thiz.callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.__jniObject().object()
		);
	}
	jdouble Location::getAltitude()
	{
		return __thiz.callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	void Location::distanceBetween(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jfloatArray arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.location.Location",
			"distanceBetween",
			"(DDDD[F)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
} // namespace __jni_impl::android::location

namespace android::location
{
	class Location : public __jni_impl::android::location::Location
	{
	public:
		Location(QAndroidJniObject obj) { __thiz = obj; }
		Location(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Location(__jni_impl::android::location::Location arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_LOCATION

