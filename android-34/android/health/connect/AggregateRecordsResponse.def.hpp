#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class AggregationType;
}
class JObject;
namespace java::time
{
	class ZoneOffset;
}

namespace android::health::connect
{
	class AggregateRecordsResponse : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AggregateRecordsResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AggregateRecordsResponse(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject get(android::health::connect::datatypes::AggregationType arg0) const;
		JObject getDataOrigins(android::health::connect::datatypes::AggregationType arg0) const;
		java::time::ZoneOffset getZoneOffset(android::health::connect::datatypes::AggregationType arg0) const;
	};
} // namespace android::health::connect

