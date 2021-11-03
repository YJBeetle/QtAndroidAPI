#include "../../JFloatArray.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Location.hpp"

namespace android::location
{
	// Fields
	JObject Location::CREATOR()
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
	
	// QJniObject forward
	Location::Location(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Location::Location(android::location::Location &arg0)
		: JObject(
			"android.location.Location",
			"(Landroid/location/Location;)V",
			arg0.object()
		) {}
	Location::Location(JString arg0)
		: JObject(
			"android.location.Location",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jdouble Location::convert(JString arg0)
	{
		return callStaticMethod<jdouble>(
			"android.location.Location",
			"convert",
			"(Ljava/lang/String;)D",
			arg0.object<jstring>()
		);
	}
	JString Location::convert(jdouble arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.location.Location",
			"convert",
			"(DI)Ljava/lang/String;",
			arg0,
			arg1
		);
	}
	void Location::distanceBetween(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, JFloatArray arg4)
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
	jfloat Location::bearingTo(android::location::Location arg0) const
	{
		return callMethod<jfloat>(
			"bearingTo",
			"(Landroid/location/Location;)F",
			arg0.object()
		);
	}
	jint Location::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jfloat Location::distanceTo(android::location::Location arg0) const
	{
		return callMethod<jfloat>(
			"distanceTo",
			"(Landroid/location/Location;)F",
			arg0.object()
		);
	}
	void Location::dump(JObject arg0, JString arg1) const
	{
		callMethod<void>(
			"dump",
			"(Landroid/util/Printer;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	jboolean Location::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jfloat Location::getAccuracy() const
	{
		return callMethod<jfloat>(
			"getAccuracy",
			"()F"
		);
	}
	jdouble Location::getAltitude() const
	{
		return callMethod<jdouble>(
			"getAltitude",
			"()D"
		);
	}
	jfloat Location::getBearing() const
	{
		return callMethod<jfloat>(
			"getBearing",
			"()F"
		);
	}
	jfloat Location::getBearingAccuracyDegrees() const
	{
		return callMethod<jfloat>(
			"getBearingAccuracyDegrees",
			"()F"
		);
	}
	jlong Location::getElapsedRealtimeNanos() const
	{
		return callMethod<jlong>(
			"getElapsedRealtimeNanos",
			"()J"
		);
	}
	jdouble Location::getElapsedRealtimeUncertaintyNanos() const
	{
		return callMethod<jdouble>(
			"getElapsedRealtimeUncertaintyNanos",
			"()D"
		);
	}
	android::os::Bundle Location::getExtras() const
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jdouble Location::getLatitude() const
	{
		return callMethod<jdouble>(
			"getLatitude",
			"()D"
		);
	}
	jdouble Location::getLongitude() const
	{
		return callMethod<jdouble>(
			"getLongitude",
			"()D"
		);
	}
	JString Location::getProvider() const
	{
		return callObjectMethod(
			"getProvider",
			"()Ljava/lang/String;"
		);
	}
	jfloat Location::getSpeed() const
	{
		return callMethod<jfloat>(
			"getSpeed",
			"()F"
		);
	}
	jfloat Location::getSpeedAccuracyMetersPerSecond() const
	{
		return callMethod<jfloat>(
			"getSpeedAccuracyMetersPerSecond",
			"()F"
		);
	}
	jlong Location::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	jfloat Location::getVerticalAccuracyMeters() const
	{
		return callMethod<jfloat>(
			"getVerticalAccuracyMeters",
			"()F"
		);
	}
	jboolean Location::hasAccuracy() const
	{
		return callMethod<jboolean>(
			"hasAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasAltitude() const
	{
		return callMethod<jboolean>(
			"hasAltitude",
			"()Z"
		);
	}
	jboolean Location::hasBearing() const
	{
		return callMethod<jboolean>(
			"hasBearing",
			"()Z"
		);
	}
	jboolean Location::hasBearingAccuracy() const
	{
		return callMethod<jboolean>(
			"hasBearingAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasElapsedRealtimeUncertaintyNanos() const
	{
		return callMethod<jboolean>(
			"hasElapsedRealtimeUncertaintyNanos",
			"()Z"
		);
	}
	jboolean Location::hasSpeed() const
	{
		return callMethod<jboolean>(
			"hasSpeed",
			"()Z"
		);
	}
	jboolean Location::hasSpeedAccuracy() const
	{
		return callMethod<jboolean>(
			"hasSpeedAccuracy",
			"()Z"
		);
	}
	jboolean Location::hasVerticalAccuracy() const
	{
		return callMethod<jboolean>(
			"hasVerticalAccuracy",
			"()Z"
		);
	}
	jint Location::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean Location::isFromMockProvider() const
	{
		return callMethod<jboolean>(
			"isFromMockProvider",
			"()Z"
		);
	}
	jboolean Location::isMock() const
	{
		return callMethod<jboolean>(
			"isMock",
			"()Z"
		);
	}
	void Location::removeAccuracy() const
	{
		callMethod<void>(
			"removeAccuracy",
			"()V"
		);
	}
	void Location::removeAltitude() const
	{
		callMethod<void>(
			"removeAltitude",
			"()V"
		);
	}
	void Location::removeBearing() const
	{
		callMethod<void>(
			"removeBearing",
			"()V"
		);
	}
	void Location::removeSpeed() const
	{
		callMethod<void>(
			"removeSpeed",
			"()V"
		);
	}
	void Location::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Location::set(android::location::Location arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/location/Location;)V",
			arg0.object()
		);
	}
	void Location::setAccuracy(jfloat arg0) const
	{
		callMethod<void>(
			"setAccuracy",
			"(F)V",
			arg0
		);
	}
	void Location::setAltitude(jdouble arg0) const
	{
		callMethod<void>(
			"setAltitude",
			"(D)V",
			arg0
		);
	}
	void Location::setBearing(jfloat arg0) const
	{
		callMethod<void>(
			"setBearing",
			"(F)V",
			arg0
		);
	}
	void Location::setBearingAccuracyDegrees(jfloat arg0) const
	{
		callMethod<void>(
			"setBearingAccuracyDegrees",
			"(F)V",
			arg0
		);
	}
	void Location::setElapsedRealtimeNanos(jlong arg0) const
	{
		callMethod<void>(
			"setElapsedRealtimeNanos",
			"(J)V",
			arg0
		);
	}
	void Location::setElapsedRealtimeUncertaintyNanos(jdouble arg0) const
	{
		callMethod<void>(
			"setElapsedRealtimeUncertaintyNanos",
			"(D)V",
			arg0
		);
	}
	void Location::setExtras(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"setExtras",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void Location::setLatitude(jdouble arg0) const
	{
		callMethod<void>(
			"setLatitude",
			"(D)V",
			arg0
		);
	}
	void Location::setLongitude(jdouble arg0) const
	{
		callMethod<void>(
			"setLongitude",
			"(D)V",
			arg0
		);
	}
	void Location::setMock(jboolean arg0) const
	{
		callMethod<void>(
			"setMock",
			"(Z)V",
			arg0
		);
	}
	void Location::setProvider(JString arg0) const
	{
		callMethod<void>(
			"setProvider",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Location::setSpeed(jfloat arg0) const
	{
		callMethod<void>(
			"setSpeed",
			"(F)V",
			arg0
		);
	}
	void Location::setSpeedAccuracyMetersPerSecond(jfloat arg0) const
	{
		callMethod<void>(
			"setSpeedAccuracyMetersPerSecond",
			"(F)V",
			arg0
		);
	}
	void Location::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	void Location::setVerticalAccuracyMeters(jfloat arg0) const
	{
		callMethod<void>(
			"setVerticalAccuracyMeters",
			"(F)V",
			arg0
		);
	}
	JString Location::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Location::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::location

