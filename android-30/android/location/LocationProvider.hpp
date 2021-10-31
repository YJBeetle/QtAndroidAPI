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
		
		// QJniObject forward
		template<typename ...Ts> explicit LocationProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocationProvider(QJniObject obj);
		
		// Constructors
		
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

