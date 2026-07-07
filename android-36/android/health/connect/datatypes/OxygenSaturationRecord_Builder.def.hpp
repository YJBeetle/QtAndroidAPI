#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class OxygenSaturationRecord;
}
namespace android::health::connect::datatypes::units
{
	class Percentage;
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
	class OxygenSaturationRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OxygenSaturationRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OxygenSaturationRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		OxygenSaturationRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, android::health::connect::datatypes::units::Percentage arg2);
		
		// Methods
		android::health::connect::datatypes::OxygenSaturationRecord build() const;
		android::health::connect::datatypes::OxygenSaturationRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::OxygenSaturationRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

