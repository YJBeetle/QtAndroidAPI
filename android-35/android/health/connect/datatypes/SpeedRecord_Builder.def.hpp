#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class SpeedRecord;
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
	class SpeedRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SpeedRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SpeedRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SpeedRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, JObject arg3);
		
		// Methods
		android::health::connect::datatypes::SpeedRecord build() const;
		android::health::connect::datatypes::SpeedRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::SpeedRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::SpeedRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::SpeedRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

