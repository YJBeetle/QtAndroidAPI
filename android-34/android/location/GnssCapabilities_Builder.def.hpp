#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssCapabilities;
}

namespace android::location
{
	class GnssCapabilities_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssCapabilities_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssCapabilities_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GnssCapabilities_Builder();
		GnssCapabilities_Builder(android::location::GnssCapabilities arg0);
		
		// Methods
		android::location::GnssCapabilities build() const;
		android::location::GnssCapabilities_Builder setGnssSignalTypes(JObject arg0) const;
		android::location::GnssCapabilities_Builder setHasAccumulatedDeltaRange(jint arg0) const;
		android::location::GnssCapabilities_Builder setHasAntennaInfo(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasGeofencing(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasLowPowerMode(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMeasurementCorrections(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMeasurementCorrectionsExcessPathLength(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMeasurementCorrectionsForDriving(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMeasurementCorrectionsLosSats(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMeasurementCorrectionsReflectingPlane(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMeasurementCorrelationVectors(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMeasurements(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMsa(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasMsb(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasNavigationMessages(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasOnDemandTime(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasPowerMultibandAcquisition(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasPowerMultibandTracking(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasPowerOtherModes(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasPowerSinglebandAcquisition(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasPowerSinglebandTracking(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasPowerTotal(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasSatelliteBlocklist(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasSatellitePvt(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasScheduling(jboolean arg0) const;
		android::location::GnssCapabilities_Builder setHasSingleShotFix(jboolean arg0) const;
	};
} // namespace android::location

