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
		
		GpsStatus(QAndroidJniObject obj);
		// Constructors
		GpsStatus() = default;
		
		// Methods
		jint getMaxSatellites();
		QAndroidJniObject getSatellites();
		jint getTimeToFirstFix();
	};
} // namespace android::location

