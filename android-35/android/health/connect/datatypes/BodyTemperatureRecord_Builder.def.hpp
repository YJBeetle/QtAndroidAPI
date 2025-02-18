#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BodyTemperatureRecord;
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
	class BodyTemperatureRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BodyTemperatureRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BodyTemperatureRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BodyTemperatureRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, android::health::connect::datatypes::units::Temperature arg3);
		
		// Methods
		android::health::connect::datatypes::BodyTemperatureRecord build() const;
		android::health::connect::datatypes::BodyTemperatureRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::BodyTemperatureRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

