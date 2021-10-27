#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::location
{
	class GpsSatellite : public __JniBaseClass
	{
	public:
		// Fields
		
		GpsSatellite(QAndroidJniObject obj);
		// Constructors
		GpsSatellite() = default;
		
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

