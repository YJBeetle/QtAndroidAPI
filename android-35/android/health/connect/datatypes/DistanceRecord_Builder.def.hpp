#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class DistanceRecord;
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
	class DistanceRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DistanceRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DistanceRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DistanceRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, android::health::connect::datatypes::units::Length arg3);
		
		// Methods
		android::health::connect::datatypes::DistanceRecord build() const;
		android::health::connect::datatypes::DistanceRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::DistanceRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::DistanceRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::DistanceRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

