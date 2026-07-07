#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class AggregateRecordsRequest;
}
namespace android::health::connect::datatypes
{
	class AggregationType;
}
namespace android::health::connect::datatypes
{
	class DataOrigin;
}

namespace android::health::connect
{
	class AggregateRecordsRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AggregateRecordsRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AggregateRecordsRequest_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AggregateRecordsRequest_Builder(JObject arg0);
		
		// Methods
		android::health::connect::AggregateRecordsRequest_Builder addAggregationType(android::health::connect::datatypes::AggregationType arg0) const;
		android::health::connect::AggregateRecordsRequest_Builder addDataOriginsFilter(android::health::connect::datatypes::DataOrigin arg0) const;
		android::health::connect::AggregateRecordsRequest build() const;
	};
} // namespace android::health::connect

