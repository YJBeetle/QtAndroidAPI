#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ActivityIntensityRecord;
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
	class ActivityIntensityRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityIntensityRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityIntensityRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ActivityIntensityRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jint arg3);
		
		// Methods
		android::health::connect::datatypes::ActivityIntensityRecord build() const;
		android::health::connect::datatypes::ActivityIntensityRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::ActivityIntensityRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

