#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class RestingHeartRateRecord;
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
	class RestingHeartRateRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RestingHeartRateRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RestingHeartRateRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RestingHeartRateRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jlong arg2);
		
		// Methods
		android::health::connect::datatypes::RestingHeartRateRecord build() const;
		android::health::connect::datatypes::RestingHeartRateRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::RestingHeartRateRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

