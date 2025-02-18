#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class SkinTemperatureRecord;
}
namespace android::health::connect::datatypes::units
{
	class Temperature;
}
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class ZoneOffset;
}

namespace android::health::connect::datatypes
{
	class SkinTemperatureRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SkinTemperatureRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SkinTemperatureRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SkinTemperatureRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2);
		
		// Methods
		android::health::connect::datatypes::SkinTemperatureRecord build() const;
		android::health::connect::datatypes::SkinTemperatureRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::SkinTemperatureRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::SkinTemperatureRecord_Builder setBaseline(android::health::connect::datatypes::units::Temperature arg0) const;
		android::health::connect::datatypes::SkinTemperatureRecord_Builder setDeltas(JObject arg0) const;
		android::health::connect::datatypes::SkinTemperatureRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::SkinTemperatureRecord_Builder setMeasurementLocation(jint arg0) const;
		android::health::connect::datatypes::SkinTemperatureRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

