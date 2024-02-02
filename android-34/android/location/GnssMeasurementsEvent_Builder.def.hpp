#pragma once

#include "../../JObject.hpp"

namespace android::location
{
	class GnssClock;
}
namespace android::location
{
	class GnssMeasurementsEvent;
}

namespace android::location
{
	class GnssMeasurementsEvent_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GnssMeasurementsEvent_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GnssMeasurementsEvent_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		GnssMeasurementsEvent_Builder();
		GnssMeasurementsEvent_Builder(android::location::GnssMeasurementsEvent arg0);
		
		// Methods
		android::location::GnssMeasurementsEvent build() const;
		android::location::GnssMeasurementsEvent_Builder clearIsFullTracking() const;
		android::location::GnssMeasurementsEvent_Builder setClock(android::location::GnssClock arg0) const;
		android::location::GnssMeasurementsEvent_Builder setGnssAutomaticGainControls(JObject arg0) const;
		android::location::GnssMeasurementsEvent_Builder setIsFullTracking(jboolean arg0) const;
		android::location::GnssMeasurementsEvent_Builder setMeasurements(JObject arg0) const;
	};
} // namespace android::location

