#include "./ProviderProperties.hpp"
#include "./ProviderProperties_Builder.hpp"

namespace android::location::provider
{
	// Fields
	
	// QJniObject forward
	ProviderProperties_Builder::ProviderProperties_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ProviderProperties_Builder::ProviderProperties_Builder()
		: JObject(
			"android.location.provider.ProviderProperties$Builder",
			"()V"
		) {}
	ProviderProperties_Builder::ProviderProperties_Builder(android::location::provider::ProviderProperties arg0)
		: JObject(
			"android.location.provider.ProviderProperties$Builder",
			"(Landroid/location/provider/ProviderProperties;)V",
			arg0.object()
		) {}
	
	// Methods
	android::location::provider::ProviderProperties ProviderProperties_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/provider/ProviderProperties;"
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setAccuracy(jint arg0) const
	{
		return callObjectMethod(
			"setAccuracy",
			"(I)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setHasAltitudeSupport(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasAltitudeSupport",
			"(Z)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setHasBearingSupport(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasBearingSupport",
			"(Z)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setHasCellRequirement(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasCellRequirement",
			"(Z)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setHasMonetaryCost(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMonetaryCost",
			"(Z)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setHasNetworkRequirement(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasNetworkRequirement",
			"(Z)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setHasSatelliteRequirement(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasSatelliteRequirement",
			"(Z)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setHasSpeedSupport(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasSpeedSupport",
			"(Z)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
	android::location::provider::ProviderProperties_Builder ProviderProperties_Builder::setPowerUsage(jint arg0) const
	{
		return callObjectMethod(
			"setPowerUsage",
			"(I)Landroid/location/provider/ProviderProperties$Builder;",
			arg0
		);
	}
} // namespace android::location::provider

