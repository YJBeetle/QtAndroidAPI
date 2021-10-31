#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class LocationRequest;
}

namespace android::location
{
	class LocationRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocationRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocationRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		LocationRequest_Builder(android::location::LocationRequest arg0);
		LocationRequest_Builder(jlong arg0);
		
		// Methods
		android::location::LocationRequest build();
		android::location::LocationRequest_Builder clearMinUpdateIntervalMillis();
		android::location::LocationRequest_Builder setDurationMillis(jlong arg0);
		android::location::LocationRequest_Builder setIntervalMillis(jlong arg0);
		android::location::LocationRequest_Builder setMaxUpdateDelayMillis(jlong arg0);
		android::location::LocationRequest_Builder setMaxUpdates(jint arg0);
		android::location::LocationRequest_Builder setMinUpdateDistanceMeters(jfloat arg0);
		android::location::LocationRequest_Builder setMinUpdateIntervalMillis(jlong arg0);
		android::location::LocationRequest_Builder setQuality(jint arg0);
	};
} // namespace android::location
