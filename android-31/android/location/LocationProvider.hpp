#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class Criteria;
}
class JString;

namespace android::location
{
	class LocationProvider : public JObject
	{
	public:
		// Fields
		static jint AVAILABLE();
		static jint OUT_OF_SERVICE();
		static jint TEMPORARILY_UNAVAILABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit LocationProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocationProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint getAccuracy();
		JString getName();
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

