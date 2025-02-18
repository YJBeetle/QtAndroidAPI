#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class Metadata;
}
namespace android::health::connect::datatypes
{
	class RespiratoryRateRecord;
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
	class RespiratoryRateRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RespiratoryRateRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RespiratoryRateRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RespiratoryRateRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jdouble arg2);
		
		// Methods
		android::health::connect::datatypes::RespiratoryRateRecord build() const;
		android::health::connect::datatypes::RespiratoryRateRecord_Builder clearZoneOffset() const;
		android::health::connect::datatypes::RespiratoryRateRecord_Builder setZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

