#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class IntermenstrualBleedingRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
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
	class IntermenstrualBleedingRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntermenstrualBleedingRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IntermenstrualBleedingRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		IntermenstrualBleedingRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1);
		
		// Methods
		android::health::connect::datatypes::IntermenstrualBleedingRecord build() const;
		android::health::connect::datatypes::IntermenstrualBleedingRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::IntermenstrualBleedingRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

