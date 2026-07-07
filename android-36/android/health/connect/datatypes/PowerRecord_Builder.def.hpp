#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class PowerRecord;
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
	class PowerRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PowerRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PowerRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PowerRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, JObject arg3);
		
		// Methods
		android::health::connect::datatypes::PowerRecord build() const;
		android::health::connect::datatypes::PowerRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::PowerRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::PowerRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::PowerRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

