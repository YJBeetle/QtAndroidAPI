#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class BodyWaterMassRecord;
}
namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes::units
{
	class Mass;
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
	class BodyWaterMassRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BodyWaterMassRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		BodyWaterMassRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		BodyWaterMassRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, android::health::connect::datatypes::units::Mass arg2);
		
		// Methods
		android::health::connect::datatypes::BodyWaterMassRecord build() const;
		android::health::connect::datatypes::BodyWaterMassRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::BodyWaterMassRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

