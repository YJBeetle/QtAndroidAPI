#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::location
{
	class LocationRequest : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jlong PASSIVE_INTERVAL();
		static jint QUALITY_BALANCED_POWER_ACCURACY();
		static jint QUALITY_HIGH_ACCURACY();
		static jint QUALITY_LOW_POWER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocationRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocationRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jlong getDurationMillis();
		jlong getIntervalMillis();
		jlong getMaxUpdateDelayMillis();
		jint getMaxUpdates();
		jfloat getMinUpdateDistanceMeters();
		jlong getMinUpdateIntervalMillis();
		jint getQuality();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

