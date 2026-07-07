#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::location
{
	class GnssCapabilities : public JObject
	{
	public:
		// Fields
		static jint CAPABILITY_SUPPORTED();
		static jint CAPABILITY_UNKNOWN();
		static jint CAPABILITY_UNSUPPORTED();
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JObject getGnssSignalTypes() const;
		jint hasAccumulatedDeltaRange() const;
		jboolean hasAntennaInfo() const;
		jboolean hasGeofencing() const;
		jboolean hasGnssAntennaInfo() const;
		jboolean hasLowPowerMode() const;
		jboolean hasMeasurementCorrections() const;
		jboolean hasMeasurementCorrectionsExcessPathLength() const;
		jboolean hasMeasurementCorrectionsForDriving() const;
		jboolean hasMeasurementCorrectionsLosSats() const;
		jboolean hasMeasurementCorrectionsReflectingPlane() const;
		jboolean hasMeasurementCorrelationVectors() const;
		jboolean hasMeasurements() const;
		jboolean hasMsa() const;
		jboolean hasMsb() const;
		jboolean hasNavigationMessages() const;
		jboolean hasOnDemandTime() const;
		jboolean hasPowerMultibandAcquisition() const;
		jboolean hasPowerMultibandTracking() const;
		jboolean hasPowerOtherModes() const;
		jboolean hasPowerSinglebandAcquisition() const;
		jboolean hasPowerSinglebandTracking() const;
		jboolean hasPowerTotal() const;
		jboolean hasSatelliteBlocklist() const;
		jboolean hasSatellitePvt() const;
		jboolean hasScheduling() const;
		jboolean hasSingleShotFix() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::location

