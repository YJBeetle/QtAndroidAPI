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
		
		// QJniObject forward
		template<typename ...Ts> explicit Location(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Location(QJniObject obj);
		
		// Constructors
		Location(android::location::Location &arg0);
		Location(JString arg0);
		
		// Methods
		static jdouble convert(JString arg0);
		static JString convert(jdouble arg0, jint arg1);
		static void distanceBetween(jdouble arg0, jdouble arg1, jdouble arg2, jdouble arg3, JFloatArray arg4);
		jfloat bearingTo(android::location::Location arg0);
		jint describeContents();
		jfloat distanceTo(android::location::Location arg0);
		void dump(JObject arg0, JString arg1);
		jfloat getAccuracy();
		jdouble getAltitude();
		jfloat getBearing();
		jfloat getBearingAccuracyDegrees();
		jlong getElapsedRealtimeNanos();
		android::os::Bundle getExtras();
		jdouble getLatitude();
		jdouble getLongitude();
		JString getProvider();
		jfloat getSpeed();
		jfloat getSpeedAccuracyMetersPerSecond();
		jlong getTime();
		jfloat getVerticalAccuracyMeters();
		jboolean hasAccuracy();
		jboolean hasAltitude();
		jboolean hasBearing();
		jboolean hasBearingAccuracy();
		jboolean hasSpeed();
		jboolean hasSpeedAccuracy();
		jboolean hasVerticalAccuracy();
		jboolean isFromMockProvider();
		void removeAccuracy();
		void removeAltitude();
		void removeBearing();
		void removeSpeed();
		void reset();
		void set(android::location::Location arg0);
		void setAccuracy(jfloat arg0);
		void setAltitude(jdouble arg0);
		void setBearing(jfloat arg0);
		void setBearingAccuracyDegrees(jfloat arg0);
		void setElapsedRealtimeNanos(jlong arg0);
		void setExtras(android::os::Bundle arg0);
		void setLatitude(jdouble arg0);
		void setLongitude(jdouble arg0);
		void setProvider(JString arg0);
		void setSpeed(jfloat arg0);
		void setSpeedAccuracyMetersPerSecond(jfloat arg0);
		void setTime(jlong arg0);
		void setVerticalAccuracyMeters(jfloat arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

