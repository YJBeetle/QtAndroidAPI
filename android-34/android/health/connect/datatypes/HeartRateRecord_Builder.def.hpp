#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class HeartRateRecord;
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
	class HeartRateRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HeartRateRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HeartRateRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HeartRateRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, JObject arg3);
		
		// Methods
		android::health::connect::datatypes::HeartRateRecord build() const;
		android::health::connect::datatypes::HeartRateRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::HeartRateRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::HeartRateRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::HeartRateRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

