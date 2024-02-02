#pragma once

#include "./GnssCapabilities.def.hpp"
#include "./GnssCapabilities_Builder.def.hpp"

namespace android::location
{
	// Fields
	
	// Constructors
	inline GnssCapabilities_Builder::GnssCapabilities_Builder()
		: JObject(
			"android.location.GnssCapabilities$Builder",
			"()V"
		) {}
	inline GnssCapabilities_Builder::GnssCapabilities_Builder(android::location::GnssCapabilities arg0)
		: JObject(
			"android.location.GnssCapabilities$Builder",
			"(Landroid/location/GnssCapabilities;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::location::GnssCapabilities GnssCapabilities_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/location/GnssCapabilities;"
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setGnssSignalTypes(JObject arg0) const
	{
		return callObjectMethod(
			"setGnssSignalTypes",
			"(Ljava/util/List;)Landroid/location/GnssCapabilities$Builder;",
			arg0.object()
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasAccumulatedDeltaRange(jint arg0) const
	{
		return callObjectMethod(
			"setHasAccumulatedDeltaRange",
			"(I)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasAntennaInfo(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasAntennaInfo",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasGeofencing(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasGeofencing",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasLowPowerMode(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasLowPowerMode",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurementCorrections(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMeasurementCorrections",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurementCorrectionsExcessPathLength(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMeasurementCorrectionsExcessPathLength",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurementCorrectionsForDriving(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMeasurementCorrectionsForDriving",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurementCorrectionsLosSats(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMeasurementCorrectionsLosSats",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurementCorrectionsReflectingPlane(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMeasurementCorrectionsReflectingPlane",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurementCorrelationVectors(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMeasurementCorrelationVectors",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMeasurements(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMeasurements",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMsa(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMsa",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasMsb(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasMsb",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasNavigationMessages(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasNavigationMessages",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasOnDemandTime(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasOnDemandTime",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasPowerMultibandAcquisition(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasPowerMultibandAcquisition",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasPowerMultibandTracking(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasPowerMultibandTracking",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasPowerOtherModes(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasPowerOtherModes",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasPowerSinglebandAcquisition(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasPowerSinglebandAcquisition",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasPowerSinglebandTracking(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasPowerSinglebandTracking",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasPowerTotal(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasPowerTotal",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasSatelliteBlocklist(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasSatelliteBlocklist",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasSatellitePvt(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasSatellitePvt",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasScheduling(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasScheduling",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
	inline android::location::GnssCapabilities_Builder GnssCapabilities_Builder::setHasSingleShotFix(jboolean arg0) const
	{
		return callObjectMethod(
			"setHasSingleShotFix",
			"(Z)Landroid/location/GnssCapabilities$Builder;",
			arg0
		);
	}
} // namespace android::location

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::location;
#endif
