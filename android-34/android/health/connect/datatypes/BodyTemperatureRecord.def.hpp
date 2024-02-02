#pragma once

#include "./InstantRecord.def.hpp"

namespace android::health::connect::datatypes::units
{
	class Temperature;
}
class JObject;

namespace android::health::connect::datatypes
{
	class BodyTemperatureRecord : public android::health::connect::datatypes::InstantRecord
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BodyTemperatureRecord(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::InstantRecord(className, sig, std::forward<Ts>(agv)...) {}
		BodyTemperatureRecord(QJniObject obj) : android::health::connect::datatypes::InstantRecord(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getMeasurementLocation() const;
		android::health::connect::datatypes::units::Temperature getTemperature() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

