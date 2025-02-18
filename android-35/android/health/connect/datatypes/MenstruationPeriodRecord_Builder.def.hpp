#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class MenstruationPeriodRecord;
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
	class MenstruationPeriodRecord_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MenstruationPeriodRecord_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MenstruationPeriodRecord_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MenstruationPeriodRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2);
		
		// Methods
		android::health::connect::datatypes::MenstruationPeriodRecord build() const;
		android::health::connect::datatypes::MenstruationPeriodRecord_Builder clearEndZoneOffset() const;
		android::health::connect::datatypes::MenstruationPeriodRecord_Builder clearStartZoneOffset() const;
		android::health::connect::datatypes::MenstruationPeriodRecord_Builder setEndZoneOffset(java::time::ZoneOffset arg0) const;
		android::health::connect::datatypes::MenstruationPeriodRecord_Builder setStartZoneOffset(java::time::ZoneOffset arg0) const;
	};
} // namespace android::health::connect::datatypes

