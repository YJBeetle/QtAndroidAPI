#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class TotalCaloriesBurnedRecord;
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
	class TotalCaloriesBurnedRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TotalCaloriesBurnedRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TotalCaloriesBurnedRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TotalCaloriesBurnedRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, android::health::connect::datatypes::units::Energy arg3);
		
		// Methods
		android::health::connect::datatypes::TotalCaloriesBurnedRecord build() const;
		android::health::connect::datatypes::TotalCaloriesBurnedRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::TotalCaloriesBurnedRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::TotalCaloriesBurnedRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::TotalCaloriesBurnedRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

