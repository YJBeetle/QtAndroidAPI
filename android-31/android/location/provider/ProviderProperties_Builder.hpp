#pragma once

#include "../../../JObject.hpp"

namespace android::location::provider
{
	class ProviderProperties;
}

namespace android::location::provider
{
	class ProviderProperties_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ProviderProperties_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ProviderProperties_Builder(QJniObject obj);
		
		// Constructors
		ProviderProperties_Builder();
		ProviderProperties_Builder(android::location::provider::ProviderProperties arg0);
		
		// Methods
		android::location::provider::ProviderProperties build();
		android::location::provider::ProviderProperties_Builder setAccuracy(jint arg0);
		android::location::provider::ProviderProperties_Builder setHasAltitudeSupport(jboolean arg0);
		android::location::provider::ProviderProperties_Builder setHasBearingSupport(jboolean arg0);
		android::location::provider::ProviderProperties_Builder setHasCellRequirement(jboolean arg0);
		android::location::provider::ProviderProperties_Builder setHasMonetaryCost(jboolean arg0);
		android::location::provider::ProviderProperties_Builder setHasNetworkRequirement(jboolean arg0);
		android::location::provider::ProviderProperties_Builder setHasSatelliteRequirement(jboolean arg0);
		android::location::provider::ProviderProperties_Builder setHasSpeedSupport(jboolean arg0);
		android::location::provider::ProviderProperties_Builder setPowerUsage(jint arg0);
	};
} // namespace android::location::provider

