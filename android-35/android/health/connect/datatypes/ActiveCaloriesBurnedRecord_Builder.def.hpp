#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ActiveCaloriesBurnedRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class Energy;
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
	class ActiveCaloriesBurnedRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActiveCaloriesBurnedRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActiveCaloriesBurnedRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActiveCaloriesBurnedRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, android::health::connect::datatypes::units::Energy arg3);
		
		// Methods
		android::health::connect::datatypes::ActiveCaloriesBurnedRecord build() const;
		android::health::connect::datatypes::ActiveCaloriesBurnedRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::ActiveCaloriesBurnedRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::ActiveCaloriesBurnedRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::ActiveCaloriesBurnedRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

