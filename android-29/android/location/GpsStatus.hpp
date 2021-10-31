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
		
		// QJniObject forward
		template<typename ...Ts> explicit GpsStatus(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GpsStatus(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getMaxSatellites();
		__JniBaseClass getSatellites();
		jint getTimeToFirstFix();
	};
} // namespace android::location

