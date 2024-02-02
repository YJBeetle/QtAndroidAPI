#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class FloorsClimbedRecord;
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
	class FloorsClimbedRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FloorsClimbedRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FloorsClimbedRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FloorsClimbedRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jdouble arg3);
		
		// Methods
		android::health::connect::datatypes::FloorsClimbedRecord build() const;
		android::health::connect::datatypes::FloorsClimbedRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::FloorsClimbedRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::FloorsClimbedRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::FloorsClimbedRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

