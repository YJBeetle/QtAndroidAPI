#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BloodPressureRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class Pressure;
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
	class BloodPressureRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BloodPressureRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BloodPressureRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BloodPressureRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, android::health::connect::datatypes::units::Pressure arg3, android::health::connect::datatypes::units::Pressure arg4, jint arg5);
		
		// Methods
		android::health::connect::datatypes::BloodPressureRecord build() const;
		android::health::connect::datatypes::BloodPressureRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::BloodPressureRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

