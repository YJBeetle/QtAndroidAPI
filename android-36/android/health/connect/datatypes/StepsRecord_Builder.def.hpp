#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class StepsRecord;
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
	class StepsRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit StepsRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StepsRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		StepsRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jlong arg3);
		
		// Methods
		android::health::connect::datatypes::StepsRecord build() const;
		android::health::connect::datatypes::StepsRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::StepsRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::StepsRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::StepsRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

