#pragma once

#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes::units
{
	class Temperature;
}
class JObject;

namespace android::health::connect::datatypes
{
	class SkinTemperatureRecord : public android::health::connect::datatypes::IntervalRecord
	{
	public:
		// Fields
		static jint MEASUREMENT_LOCATION_FINGER();
		static jint MEASUREMENT_LOCATION_TOE();
		static jint MEASUREMENT_LOCATION_UNKNOWN();
		static jint MEASUREMENT_LOCATION_WRIST();
		static android::health::connect::datatypes::AggregationType SKIN_TEMPERATURE_DELTA_AVG();
		static android::health::connect::datatypes::AggregationType SKIN_TEMPERATURE_DELTA_MAX();
		static android::health::connect::datatypes::AggregationType SKIN_TEMPERATURE_DELTA_MIN();
		
		// QJniObject forward
		template<typename ...Ts> explicit SkinTemperatureRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::IntervalRecord(className, sig, std::forward<Ts>(agv)...) {}
		SkinTemperatureRecord(QJniObject obj) : android::health::connect::datatypes::IntervalRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Temperature getBaseline() const;
		JObject getDeltas() const;
		jint getMeasurementLocation() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

