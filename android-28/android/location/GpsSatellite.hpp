#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GpsSatellite : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GpsSatellite(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GpsSatellite(QAndroidJniObject obj);
		
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

