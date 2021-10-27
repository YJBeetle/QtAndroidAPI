#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::location
{
	class Criteria;
}

namespace android::location
{
	class LocationProvider : public __JniBaseClass
	{
	public:
		// Fields
		static jint AVAILABLE();
		static jint OUT_OF_SERVICE();
		static jint TEMPORARILY_UNAVAILABLE();
		
		LocationProvider(QAndroidJniObject obj);
		// Constructors
		LocationProvider() = default;
		
		// Methods
		jint getAccuracy();
		jstring getName();
		jint getPowerRequirement();
		jboolean hasMonetaryCost();
		jboolean meetsCriteria(android::location::Criteria arg0);
		jboolean requiresCell();
		jboolean requiresNetwork();
		jboolean requiresSatellite();
		jboolean supportsAltitude();
		jboolean supportsBearing();
		jboolean supportsSpeed();
	};
} // namespace android::location

