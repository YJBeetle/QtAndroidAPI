#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ElevationGainedRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class Length;
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
	class ElevationGainedRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ElevationGainedRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ElevationGainedRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ElevationGainedRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, android::health::connect::datatypes::units::Length arg3);
		
		// Methods
		android::health::connect::datatypes::ElevationGainedRecord build() const;
		android::health::connect::datatypes::ElevationGainedRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::ElevationGainedRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::ElevationGainedRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::ElevationGainedRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

