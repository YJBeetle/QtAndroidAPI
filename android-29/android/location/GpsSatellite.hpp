#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::location
{
	class GpsSatellite : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GpsSatellite(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GpsSatellite(QJniObject obj);
		
		// Constructors
		
		// Methods
		jfloat getAzimuth();
		jfloat getElevation();
		jint getPrn();
		jfloat getSnr();
		jboolean hasAlmanac();
		jboolean hasEphemeris();
		jboolean usedInFix();
	};
} // namespace android::location

