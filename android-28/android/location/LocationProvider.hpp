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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocationProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocationProvider(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint getAccuracy() const;
		JString getName() const;
		jint getPowerRequirement() const;
		jboolean hasMonetaryCost() const;
		jboolean meetsCriteria(android::location::Criteria arg0) const;
		jboolean requiresCell() const;
		jboolean requiresNetwork() const;
		jboolean requiresSatellite() const;
		jboolean supportsAltitude() const;
		jboolean supportsBearing() const;
		jboolean supportsSpeed() const;
	};
} // namespace android::location

