#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BloodGlucoseRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class BloodGlucose;
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
	class BloodGlucoseRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BloodGlucoseRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BloodGlucoseRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BloodGlucoseRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, android::health::connect::datatypes::units::BloodGlucose arg3, jint arg4, jint arg5);
		
		// Methods
		android::health::connect::datatypes::BloodGlucoseRecord build() const;
		android::health::connect::datatypes::BloodGlucoseRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::BloodGlucoseRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

