#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;
namespace java::time
{
	class Instant;
}
namespace java::time
{
	class ZoneOffset;
}

namespace android::health::connect
{
	class AggregateRecordsGroupedByDurationResponse : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AggregateRecordsGroupedByDurationResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AggregateRecordsGroupedByDurationResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject get(android::health::connect::datatypes::AggregationType arg0) const;
		java::time::Instant getEndTime() const;
		java::time::Instant getStartTime() const;
		java::time::ZoneOffset getZoneOffset(android::health::connect::datatypes::AggregationType arg0) const;
	};
} // namespace android::health::connect

