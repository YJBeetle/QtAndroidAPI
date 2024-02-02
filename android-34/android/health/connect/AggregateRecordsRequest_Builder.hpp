#pragma once

#include "./AggregateRecordsRequest.def.hpp"
#include "./datatypes/AggregationType.def.hpp"
#include "./datatypes/DataOrigin.def.hpp"
#include "./AggregateRecordsRequest_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline AggregateRecordsRequest_Builder::AggregateRecordsRequest_Builder(JObject arg0)
		: JObject(
			"android.health.connect.AggregateRecordsRequest$Builder",
			"(Landroid/health/connect/TimeRangeFilter;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::health::connect::AggregateRecordsRequest_Builder AggregateRecordsRequest_Builder::addAggregationType(android::health::connect::datatypes::AggregationType arg0) const
	{
		return callObjectMethod(
			"addAggregationType",
			"(Landroid/health/connect/datatypes/AggregationType;)Landroid/health/connect/AggregateRecordsRequest$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::AggregateRecordsRequest_Builder AggregateRecordsRequest_Builder::addDataOriginsFilter(android::health::connect::datatypes::DataOrigin arg0) const
	{
		return callObjectMethod(
			"addDataOriginsFilter",
			"(Landroid/health/connect/datatypes/DataOrigin;)Landroid/health/connect/AggregateRecordsRequest$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::AggregateRecordsRequest AggregateRecordsRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/AggregateRecordsRequest;"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
