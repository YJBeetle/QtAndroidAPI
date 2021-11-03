#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::location
{
	class Location : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FORMAT_DEGREES();
		static jint FORMAT_MINUTES();
		static jint FORMAT_SECONDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Location(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Location(QAndroidJniObject obj);
		
		// Constructors
		Location(android::location::Location &arg0);
		Location(JString arg0);
		
		// Methods
		static jdouble convert(JString arg0);
		static JString convert(jdouble arg0, jint arg1);
		static void distanceBetween(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, JFloatArray arg4);
		jfloat bearingTo(android::location::Location arg0) const;
		jint describeContents() const;
		jfloat distanceTo(android::location::Location arg0) const;
		void dump(JObject arg0, JString arg1) const;
		jfloat getAccuracy() const;
		jdouble getAltitude() const;
		jfloat getBearing() const;
		jfloat getBearingAccuracyDegrees() const;
		jlong getElapsedRealtimeNanos() const;
		android::os::Bundle getExtras() const;
		jdouble getLatitude() const;
		jdouble getLongitude() const;
		JString getProvider() const;
		jfloat getSpeed() const;
		jfloat getSpeedAccuracyMetersPerSecond() const;
		jlong getTime() const;
		jfloat getVerticalAccuracyMeters() const;
		jboolean hasAccuracy() const;
		jboolean hasAltitude() const;
		jboolean hasBearing() const;
		jboolean hasBearingAccuracy() const;
		jboolean hasSpeed() const;
		jboolean hasSpeedAccuracy() const;
		jboolean hasVerticalAccuracy() const;
		jboolean isFromMockProvider() const;
		void removeAccuracy() const;
		void removeAltitude() const;
		void removeBearing() const;
		void removeSpeed() const;
		void reset() const;
		void set(android::location::Location arg0) const;
		void setAccuracy(jfloat arg0) const;
		void setAltitude(jdouble arg0) const;
		void setBearing(jfloat arg0) const;
		void setBearingAccuracyDegrees(jfloat arg0) const;
		void setElapsedRealtimeNanos(jlong arg0) const;
		void setExtras(android::os::Bundle arg0) const;
		void setLatitude(jdouble arg0) const;
		void setLongitude(jdouble arg0) const;
		void setProvider(JString arg0) const;
		void setSpeed(jfloat arg0) const;
		void setSpeedAccuracyMetersPerSecond(jfloat arg0) const;
		void setTime(jlong arg0) const;
		void setVerticalAccuracyMeters(jfloat arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

