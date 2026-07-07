#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class HeartRateVariabilityRmssdRecord;
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
	class HeartRateVariabilityRmssdRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit HeartRateVariabilityRmssdRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		HeartRateVariabilityRmssdRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		HeartRateVariabilityRmssdRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jdouble arg2);
		
		// Methods
		android::health::connect::datatypes::HeartRateVariabilityRmssdRecord build() const;
		android::health::connect::datatypes::HeartRateVariabilityRmssdRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::HeartRateVariabilityRmssdRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

