#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BasalBodyTemperatureRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
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
	class BasalBodyTemperatureRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BasalBodyTemperatureRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BasalBodyTemperatureRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BasalBodyTemperatureRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, android::health::connect::datatypes::units::Temperature arg3);
		
		// Methods
		android::health::connect::datatypes::BasalBodyTemperatureRecord build() const;
		android::health::connect::datatypes::BasalBodyTemperatureRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::BasalBodyTemperatureRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

