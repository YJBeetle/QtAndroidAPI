#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class HydrationRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class Volume;
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
	class HydrationRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HydrationRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HydrationRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HydrationRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, android::health::connect::datatypes::units::Volume arg3);
		
		// Methods
		android::health::connect::datatypes::HydrationRecord build() const;
		android::health::connect::datatypes::HydrationRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::HydrationRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::HydrationRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::HydrationRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

