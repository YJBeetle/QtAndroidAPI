#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class WheelchairPushesRecord;
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
	class WheelchairPushesRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit WheelchairPushesRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WheelchairPushesRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		WheelchairPushesRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jlong arg3);
		
		// Methods
		android::health::connect::datatypes::WheelchairPushesRecord build() const;
		android::health::connect::datatypes::WheelchairPushesRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::WheelchairPushesRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::WheelchairPushesRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::WheelchairPushesRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

