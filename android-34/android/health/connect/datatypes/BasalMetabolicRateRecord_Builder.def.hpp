#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BasalMetabolicRateRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class Power;
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
	class BasalMetabolicRateRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BasalMetabolicRateRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BasalMetabolicRateRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BasalMetabolicRateRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, android::health::connect::datatypes::units::Power arg2);
		
		// Methods
		android::health::connect::datatypes::BasalMetabolicRateRecord build() const;
		android::health::connect::datatypes::BasalMetabolicRateRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::BasalMetabolicRateRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

