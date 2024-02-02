#pragma once

#include "./datatypes/AggregationType.def.hpp"
#include "../../../JObject.hpp"
#include "../../../java/time/LocalDateTime.def.hpp"
#include "../../../java/time/ZoneOffset.def.hpp"
#include "./AggregateRecordsGroupedByPeriodResponse.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AggregateRecordsGroupedByPeriodResponse::get(android::health::connect::datatypes::AggregationType arg0) const
	{
		return callObjectMethod(
			"get",
			"(Landroid/health/connect/datatypes/AggregationType;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::LocalDateTime AggregateRecordsGroupedByPeriodResponse::getEndTime() const
	{
		return callObjectMethod(
			"getEndTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline java::time::LocalDateTime AggregateRecordsGroupedByPeriodResponse::getStartTime() const
	{
		return callObjectMethod(
			"getStartTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline java::time::ZoneOffset AggregateRecordsGroupedByPeriodResponse::getZoneOffset(android::health::connect::datatypes::AggregationType arg0) const
	{
		return callObjectMethod(
			"getZoneOffset",
			"(Landroid/health/connect/datatypes/AggregationType;)Ljava/time/ZoneOffset;",
			arg0.object()
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
