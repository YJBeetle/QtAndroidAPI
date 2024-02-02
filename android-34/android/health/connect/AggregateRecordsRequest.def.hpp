#pragma once

#include "../../../JObject.hpp"

namespace android::health::connect
{
	class AggregateRecordsRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AggregateRecordsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AggregateRecordsRequest(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAggregationTypes() const;
		JObject getDataOriginsFilters() const;
		JObject getTimeRangeFilter() const;
	};
} // namespace android::health::connect

