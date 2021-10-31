#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::location
{
	class GpsStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint GPS_EVENT_FIRST_FIX();
		static jint GPS_EVENT_SATELLITE_STATUS();
		static jint GPS_EVENT_STARTED();
		static jint GPS_EVENT_STOPPED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GpsStatus(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GpsStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint getMaxSatellites();
		QAndroidJniObject getSatellites();
		jint getTimeToFirstFix();
	};
} // namespace android::location

