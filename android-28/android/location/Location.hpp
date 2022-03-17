#pragma once

#include "../../JFloatArray.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./Location.def.hpp"

namespace android::location
{
	// Fields
	inline JObject Location::CREATOR()
	{
		return getStaticObjectField(
			"android.location.Location",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Location::FORMAT_DEGREES()
	{
		return getStaticField<jint>(
			"android.location.Location",
			"FORMAT_DEGREES"
		);
	}
	inline jint Location::FORMAT_MINUTES()
	{
		return getStaticField<jint>(
			"android.location.Location",
			"FORMAT_MINUTES"
		);
	}
	inline jint Location::FORMAT_SECONDS()
	{
		return getStaticField<jint>(
			"android.location.Location",
			"FORMAT_SECONDS"
		);
	}
	
	// Constructors
	inline Location::Location(android::location::Location &arg0)
		: JObject(
			"android.location.Location",
			"(Landroid/location/Location;)V",
			arg0.object()
		) {}
	inline Location::Location(JString arg0)
		: JObject(
			"android.location.Location",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jdouble Location::convert(JString arg0)
	{
		return callStaticMethod<jdouble>(
			"android.location.Location",
			"convert",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	inline JString Location::convert(jdouble arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.location.Location",
			"convert",
			"(DI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	inline void Location::distanceBetween(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, JFloatArray arg4)
	{
		callStaticMethod<void>(
			"android.location.Location",
			"distanceBetween",
			"(DDDD[F)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object<jfloatArray>()
		);
	}
	inline jfloat Location::bearingTo(android::location::Location arg0) const
	{
		return callMethod<jfloat>(
			"bearingTo",
			"(Landroid/location/Location;)F",
			arg0.object()
		);
	}
	inline jint Location::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jfloat Location::distanceTo(android::location::Location arg0) const
	{
		return callMethod<jfloat>(
			"distanceTo",
			"(Landroid/location/Location;)F",
			arg0.object()
		);
	}
	inline void Location::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline jfloat Location::getAccuracy() const
	{
		return callMethod<jfloat>(
			"getAccuracy",
			"()F"
		);
	}
	inline jdouble Location::getAltitude() const
	{
		return callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	inline jfloat Location::getBearing() const
	{
		return callMethod<jfloat>(
			"getBearing",
			"()F"
		);
	}
	inline jfloat Location::getBearingAccuracyDegrees() const
	{
		return callMethod<jfloat>(
			"getBearingAccuracyDegrees",
			"()F"
		);
	}
	inline jlong Location::getElapsedRealtimeNanos() const
	{
		return callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	inline android::os::Bundle Location::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	inline jdouble Location::getLatitude() const
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	inline jdouble Location::getLongitude() const
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	inline JString Location::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		);
	}
	inline jfloat Location::getSpeed() const
	{
		return callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	inline jfloat Location::getSpeedAccuracyMetersPerSecond() const
	{
		return callMethod<jfloat>(
			"getSpeedAccuracyMetersPerSecond",
			"()F"
		);
	}
	inline jlong Location::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	inline jfloat Location::getVerticalAccuracyMeters() const
	{
		return callMethod<jfloat>(
			"getVerticalAccuracyMeters",
			"()F"
		);
	}
	inline jboolean Location::hasAccuracy() const
	{
		return callMethod<jboolean>(
			"hasAccuracy",
			"()Z"
		);
	}
	inline jboolean Location::hasAltitude() const
	{
		return callMethod<jboolean>(
			"hasAltitude",
			"()Z"
		);
	}
	inline jboolean Location::hasBearing() const
	{
		return callMethod<jboolean>(
			"hasBearing",
			"()Z"
		);
	}
	inline jboolean Location::hasBearingAccuracy() const
	{
		return callMethod<jboolean>(
			"hasBearingAccuracy",
			"()Z"
		);
	}
	inline jboolean Location::hasSpeed() const
	{
		return callMethod<jboolean>(
			"hasSpeed",
			"()Z"
		);
	}
	inline jboolean Location::hasSpeedAccuracy() const
	{
		return callMethod<jboolean>(
			"hasSpeedAccuracy",
			"()Z"
		);
	}
	inline jboolean Location::hasVerticalAccuracy() const
	{
		return callMethod<jboolean>(
			"hasVerticalAccuracy",
			"()Z"
		);
	}
	inline jboolean Location::isFromMockProvider() const
	{
		return callMethod<jboolean>(
			"isFromMockProvider",
			"()Z"
		);
	}
	inline void Location::removeAccuracy() const
	{
		callMethod<void>(
			"removeAccuracy",
			"()V"
		);
	}
	inline void Location::removeAltitude() const
	{
		callMethod<void>(
			"removeAltitude",
			"()V"
		);
	}
	inline void Location::removeBearing() const
	{
		callMethod<void>(
			"removeBearing",
			"()V"
		);
	}
	inline void Location::removeSpeed() const
	{
		callMethod<void>(
			"removeSpeed",
			"()V"
		);
	}
	inline void Location::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void Location::set(android::location::Location arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/location/Location;)V",
			arg0.object()
		);
	}
	inline void Location::setAccuracy(jfloat arg0) const
	{
		callMethod<void>(
			"setAccuracy",
			"(F)V",
			arg0
		);
	}
	inline void Location::setAltitude(jdouble arg0) const
	{
		callMethod<void>(
			"setAltitude",
			"(D)V",
			arg0
		);
	}
	inline void Location::setBearing(jfloat arg0) const
	{
		callMethod<void>(
			"setBearing",
			"(F)V",
			arg0
		);
	}
	inline void Location::setBearingAccuracyDegrees(jfloat arg0) const
	{
		callMethod<void>(
			"setBearingAccuracyDegrees",
			"(F)V",
			arg0
		);
	}
	inline void Location::setElapsedRealtimeNanos(jlong arg0) const
	{
		callMethod<void>(
			"setElapsedRealtimeNanos",
			"(J)V",
			arg0
		);
	}
	inline void Location::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	inline void Location::setLatitude(jdouble arg0) const
	{
		callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
		);
	}
	inline void Location::setLongitude(jdouble arg0) const
	{
		callMethod<void>(
			"setLongitude",
			"(D)V",
			arg0
		);
	}
	inline void Location::setProvider(JString arg0) const
	{
		callMethod<void>(
			"setProvider",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Location::setSpeed(jfloat arg0) const
	{
		callMethod<void>(
			"setSpeed",
			"(F)V",
			arg0
		);
	}
	inline void Location::setSpeedAccuracyMetersPerSecond(jfloat arg0) const
	{
		callMethod<void>(
			"setSpeedAccuracyMetersPerSecond",
			"(F)V",
			arg0
		);
	}
	inline void Location::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	inline void Location::setVerticalAccuracyMeters(jfloat arg0) const
	{
		callMethod<void>(
			"setVerticalAccuracyMeters",
			"(F)V",
			arg0
		);
	}
	inline JString Location::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Location::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
