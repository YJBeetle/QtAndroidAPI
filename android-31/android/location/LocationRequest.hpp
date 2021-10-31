#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::location
{
	class LocationRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jlong PASSIVE_INTERVAL();
		static jint QUALITY_BALANCED_POWER_ACCURACY();
		static jint QUALITY_HIGH_ACCURACY();
		static jint QUALITY_LOW_POWER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocationRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocationRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jlong getDurationMillis();
		jlong getIntervalMillis();
		jlong getMaxUpdateDelayMillis();
		jint getMaxUpdates();
		jfloat getMinUpdateDistanceMeters();
		jlong getMinUpdateIntervalMillis();
		jint getQuality();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::location

