#pragma once

#include "./datatypes/AggregationType.def.hpp"
#include "../../../JObject.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "../../../java/time/ZoneOffset.def.hpp"
#include "./AggregateRecordsGroupedByDurationResponse.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AggregateRecordsGroupedByDurationResponse::get(android::health::connect::datatypes::AggregationType arg0) const
	{
		return callObjectMethod(
			"get",
			"(Landroid/health/connect/datatypes/AggregationType;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline java::time::Instant AggregateRecordsGroupedByDurationResponse::getEndTime() const
	{
		return callObjectMethod(
			"getEndTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::Instant AggregateRecordsGroupedByDurationResponse::getStartTime() const
	{
		return callObjectMethod(
			"getStartTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::ZoneOffset AggregateRecordsGroupedByDurationResponse::getZoneOffset(android::health::connect::datatypes::AggregationType arg0) const
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
