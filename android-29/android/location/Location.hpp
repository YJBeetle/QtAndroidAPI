#pragma once

#ifndef ANDROID_LOCATION_LOCATION
#define ANDROID_LOCATION_LOCATION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		void __constructor(__jni_impl::android::location::Location arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		static jdouble convert(jstring arg0);
		static jdouble convert(const QString &arg0);
		static jstring convert(jdouble arg0, jint arg1);
		static void distanceBetween(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jfloatArray arg4);
		jfloat bearingTo(__jni_impl::android::location::Location arg0);
		jint describeContents();
		jfloat distanceTo(__jni_impl::android::location::Location arg0);
		void dump(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void dump(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		jfloat getAccuracy();
		jdouble getAltitude();
		jfloat getBearing();
		jfloat getBearingAccuracyDegrees();
		jlong getElapsedRealtimeNanos();
		jdouble getElapsedRealtimeUncertaintyNanos();
		QAndroidJniObject getExtras();
		jdouble getLatitude();
		jdouble getLongitude();
		jstring getProvider();
		jfloat getSpeed();
		jfloat getSpeedAccuracyMetersPerSecond();
		jlong getTime();
		jfloat getVerticalAccuracyMeters();
		jboolean hasAccuracy();
		jboolean hasAltitude();
		jboolean hasBearing();
		jboolean hasBearingAccuracy();
		jboolean hasElapsedRealtimeUncertaintyNanos();
		jboolean hasSpeed();
		jboolean hasSpeedAccuracy();
		jboolean hasVerticalAccuracy();
		jboolean isFromMockProvider();
		void removeAccuracy();
		void removeAltitude();
		void removeBearing();
		void removeSpeed();
		void reset();
		void set(__jni_impl::android::location::Location arg0);
		void setAccuracy(jfloat arg0);
		void setAltitude(jdouble arg0);
		void setBearing(jfloat arg0);
		void setBearingAccuracyDegrees(jfloat arg0);
		void setElapsedRealtimeNanos(jlong arg0);
		void setElapsedRealtimeUncertaintyNanos(jdouble arg0);
		void setExtras(__jni_impl::android::os::Bundle arg0);
		void setLatitude(jdouble arg0);
		void setLongitude(jdouble arg0);
		void setProvider(jstring arg0);
		void setProvider(const QString &arg0);
		void setSpeed(jfloat arg0);
		void setSpeedAccuracyMetersPerSecond(jfloat arg0);
		void setTime(jlong arg0);
		void setVerticalAccuracyMeters(jfloat arg0);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::location

#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"

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
	void Location::__constructor(__jni_impl::android::location::Location arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Location",
			"(Landroid/location/Location;)V",
			arg0.__jniObject().object()
		);
	}
	void Location::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Location",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Location::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.location.Location",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jdouble Location::convert(jstring arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"android.location.Location",
			"convert",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jdouble Location::convert(const QString &arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"android.location.Location",
			"convert",
			"(Ljava/lang/String;)D",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jfloat Location::bearingTo(__jni_impl::android::location::Location arg0)
	{
		return __thiz.callMethod<jfloat>(
			"bearingTo",
			"(Landroid/location/Location;)F",
			arg0.__jniObject().object()
		);
	}
	jint Location::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
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
	void Location::dump(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Location::dump(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jfloat Location::getAccuracy()
	{
		return __thiz.callMethod<jfloat>(
			"getAccuracy",
			"()F"
		);
	}
	jdouble Location::getAltitude()
	{
		return __thiz.callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	jfloat Location::getBearing()
	{
		return __thiz.callMethod<jfloat>(
			"getBearing",
			"()F"
		);
	}
	jfloat Location::getBearingAccuracyDegrees()
	{
		return __thiz.callMethod<jfloat>(
			"getBearingAccuracyDegrees",
			"()F"
		);
	}
	jlong Location::getElapsedRealtimeNanos()
	{
		return __thiz.callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	jdouble Location::getElapsedRealtimeUncertaintyNanos()
	{
		return __thiz.callMethod<jdouble>(
			"getElapsedRealtimeUncertaintyNanos",
			"()D"
		);
	}
	QAndroidJniObject Location::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jdouble Location::getLatitude()
	{
		return __thiz.callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	jdouble Location::getLongitude()
	{
		return __thiz.callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	jstring Location::getProvider()
	{
		return __thiz.callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat Location::getSpeed()
	{
		return __thiz.callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	jfloat Location::getSpeedAccuracyMetersPerSecond()
	{
		return __thiz.callMethod<jfloat>(
			"getSpeedAccuracyMetersPerSecond",
			"()F"
		);
	}
	jlong Location::getTime()
	{
		return __thiz.callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jfloat Location::getVerticalAccuracyMeters()
	{
		return __thiz.callMethod<jfloat>(
			"getVerticalAccuracyMeters",
			"()F"
		);
	}
	jboolean Location::hasAccuracy()
	{
		return __thiz.callMethod<jboolean>(
			"hasAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasAltitude()
	{
		return __thiz.callMethod<jboolean>(
			"hasAltitude",
			"()Z"
		);
	}
	jboolean Location::hasBearing()
	{
		return __thiz.callMethod<jboolean>(
			"hasBearing",
			"()Z"
		);
	}
	jboolean Location::hasBearingAccuracy()
	{
		return __thiz.callMethod<jboolean>(
			"hasBearingAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasElapsedRealtimeUncertaintyNanos()
	{
		return __thiz.callMethod<jboolean>(
			"hasElapsedRealtimeUncertaintyNanos",
			"()Z"
		);
	}
	jboolean Location::hasSpeed()
	{
		return __thiz.callMethod<jboolean>(
			"hasSpeed",
			"()Z"
		);
	}
	jboolean Location::hasSpeedAccuracy()
	{
		return __thiz.callMethod<jboolean>(
			"hasSpeedAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasVerticalAccuracy()
	{
		return __thiz.callMethod<jboolean>(
			"hasVerticalAccuracy",
			"()Z"
		);
	}
	jboolean Location::isFromMockProvider()
	{
		return __thiz.callMethod<jboolean>(
			"isFromMockProvider",
			"()Z"
		);
	}
	void Location::removeAccuracy()
	{
		__thiz.callMethod<void>(
			"removeAccuracy",
			"()V"
		);
	}
	void Location::removeAltitude()
	{
		__thiz.callMethod<void>(
			"removeAltitude",
			"()V"
		);
	}
	void Location::removeBearing()
	{
		__thiz.callMethod<void>(
			"removeBearing",
			"()V"
		);
	}
	void Location::removeSpeed()
	{
		__thiz.callMethod<void>(
			"removeSpeed",
			"()V"
		);
	}
	void Location::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Location::set(__jni_impl::android::location::Location arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/location/Location;)V",
			arg0.__jniObject().object()
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
	void Location::setAltitude(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setAltitude",
			"(D)V",
			arg0
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
	void Location::setBearingAccuracyDegrees(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setBearingAccuracyDegrees",
			"(F)V",
			arg0
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
	void Location::setElapsedRealtimeUncertaintyNanos(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setElapsedRealtimeUncertaintyNanos",
			"(D)V",
			arg0
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
	void Location::setLatitude(jdouble arg0)
	{
		__thiz.callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
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
	void Location::setProvider(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setProvider",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Location::setProvider(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setProvider",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void Location::setSpeedAccuracyMetersPerSecond(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setSpeedAccuracyMetersPerSecond",
			"(F)V",
			arg0
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
	void Location::setVerticalAccuracyMeters(jfloat arg0)
	{
		__thiz.callMethod<void>(
			"setVerticalAccuracyMeters",
			"(F)V",
			arg0
		);
	}
	jstring Location::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
} // namespace __jni_impl::android::location

namespace android::location
{
	class Location : public __jni_impl::android::location::Location
	{
	public:
		Location(QAndroidJniObject obj) { __thiz = obj; }
		Location(__jni_impl::android::location::Location arg0)
		{
			__constructor(
				arg0);
		}
		Location(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::location

#endif // ANDROID_LOCATION_LOCATION

