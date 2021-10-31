#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./Location.hpp"

namespace android::location
{
	// Fields
	__JniBaseClass Location::CREATOR()
	{
		return getStaticObjectField(
			"android.location.Location",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Location::FORMAT_DEGREES()
	{
		return getStaticField<jint>(
			"android.location.Location",
			"FORMAT_DEGREES"
		);
	}
	jint Location::FORMAT_MINUTES()
	{
		return getStaticField<jint>(
			"android.location.Location",
			"FORMAT_MINUTES"
		);
	}
	jint Location::FORMAT_SECONDS()
	{
		return getStaticField<jint>(
			"android.location.Location",
			"FORMAT_SECONDS"
		);
	}
	
	// QAndroidJniObject forward
	Location::Location(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Location::Location(android::location::Location &arg0)
		: __JniBaseClass(
			"android.location.Location",
			"(Landroid/location/Location;)V",
			arg0.object()
		) {}
	Location::Location(jstring arg0)
		: __JniBaseClass(
			"android.location.Location",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jdouble Location::convert(jstring arg0)
	{
		return callStaticMethod<jdouble>(
			"android.location.Location",
			"convert",
			"(Ljava/lang/String;)D",
			arg0
		);
	}
	jstring Location::convert(jdouble arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.location.Location",
			"convert",
			"(DI)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	void Location::distanceBetween(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, jfloatArray arg4)
	{
		callStaticMethod<void>(
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
	jfloat Location::bearingTo(android::location::Location arg0)
	{
		return callMethod<jfloat>(
			"bearingTo",
			"(Landroid/location/Location;)F",
			arg0.object()
		);
	}
	jint Location::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat Location::distanceTo(android::location::Location arg0)
	{
		return callMethod<jfloat>(
			"distanceTo",
			"(Landroid/location/Location;)F",
			arg0.object()
		);
	}
	void Location::dump(__JniBaseClass arg0, jstring arg1)
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		);
	}
	jfloat Location::getAccuracy()
	{
		return callMethod<jfloat>(
			"getAccuracy",
			"()F"
		);
	}
	jdouble Location::getAltitude()
	{
		return callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	jfloat Location::getBearing()
	{
		return callMethod<jfloat>(
			"getBearing",
			"()F"
		);
	}
	jfloat Location::getBearingAccuracyDegrees()
	{
		return callMethod<jfloat>(
			"getBearingAccuracyDegrees",
			"()F"
		);
	}
	jlong Location::getElapsedRealtimeNanos()
	{
		return callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	android::os::Bundle Location::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jdouble Location::getLatitude()
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	jdouble Location::getLongitude()
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	jstring Location::getProvider()
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jfloat Location::getSpeed()
	{
		return callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	jfloat Location::getSpeedAccuracyMetersPerSecond()
	{
		return callMethod<jfloat>(
			"getSpeedAccuracyMetersPerSecond",
			"()F"
		);
	}
	jlong Location::getTime()
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jfloat Location::getVerticalAccuracyMeters()
	{
		return callMethod<jfloat>(
			"getVerticalAccuracyMeters",
			"()F"
		);
	}
	jboolean Location::hasAccuracy()
	{
		return callMethod<jboolean>(
			"hasAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasAltitude()
	{
		return callMethod<jboolean>(
			"hasAltitude",
			"()Z"
		);
	}
	jboolean Location::hasBearing()
	{
		return callMethod<jboolean>(
			"hasBearing",
			"()Z"
		);
	}
	jboolean Location::hasBearingAccuracy()
	{
		return callMethod<jboolean>(
			"hasBearingAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasSpeed()
	{
		return callMethod<jboolean>(
			"hasSpeed",
			"()Z"
		);
	}
	jboolean Location::hasSpeedAccuracy()
	{
		return callMethod<jboolean>(
			"hasSpeedAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasVerticalAccuracy()
	{
		return callMethod<jboolean>(
			"hasVerticalAccuracy",
			"()Z"
		);
	}
	jboolean Location::isFromMockProvider()
	{
		return callMethod<jboolean>(
			"isFromMockProvider",
			"()Z"
		);
	}
	void Location::removeAccuracy()
	{
		callMethod<void>(
			"removeAccuracy",
			"()V"
		);
	}
	void Location::removeAltitude()
	{
		callMethod<void>(
			"removeAltitude",
			"()V"
		);
	}
	void Location::removeBearing()
	{
		callMethod<void>(
			"removeBearing",
			"()V"
		);
	}
	void Location::removeSpeed()
	{
		callMethod<void>(
			"removeSpeed",
			"()V"
		);
	}
	void Location::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Location::set(android::location::Location arg0)
	{
		callMethod<void>(
			"set",
			"(Landroid/location/Location;)V",
			arg0.object()
		);
	}
	void Location::setAccuracy(jfloat arg0)
	{
		callMethod<void>(
			"setAccuracy",
			"(F)V",
			arg0
		);
	}
	void Location::setAltitude(jdouble arg0)
	{
		callMethod<void>(
			"setAltitude",
			"(D)V",
			arg0
		);
	}
	void Location::setBearing(jfloat arg0)
	{
		callMethod<void>(
			"setBearing",
			"(F)V",
			arg0
		);
	}
	void Location::setBearingAccuracyDegrees(jfloat arg0)
	{
		callMethod<void>(
			"setBearingAccuracyDegrees",
			"(F)V",
			arg0
		);
	}
	void Location::setElapsedRealtimeNanos(jlong arg0)
	{
		callMethod<void>(
			"setElapsedRealtimeNanos",
			"(J)V",
			arg0
		);
	}
	void Location::setExtras(android::os::Bundle arg0)
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Location::setLatitude(jdouble arg0)
	{
		callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
		);
	}
	void Location::setLongitude(jdouble arg0)
	{
		callMethod<void>(
			"setLongitude",
			"(D)V",
			arg0
		);
	}
	void Location::setProvider(jstring arg0)
	{
		callMethod<void>(
			"setProvider",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Location::setSpeed(jfloat arg0)
	{
		callMethod<void>(
			"setSpeed",
			"(F)V",
			arg0
		);
	}
	void Location::setSpeedAccuracyMetersPerSecond(jfloat arg0)
	{
		callMethod<void>(
			"setSpeedAccuracyMetersPerSecond",
			"(F)V",
			arg0
		);
	}
	void Location::setTime(jlong arg0)
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void Location::setVerticalAccuracyMeters(jfloat arg0)
	{
		callMethod<void>(
			"setVerticalAccuracyMeters",
			"(F)V",
			arg0
		);
	}
	jstring Location::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void Location::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

