#pragma once

#include "./datatypes/AggregationType.def.hpp"
#include "../../../JObject.hpp"
#include "../../../java/time/ZoneOffset.def.hpp"
#include "./AggregateRecordsResponse.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AggregateRecordsResponse::get(android::health::connect::datatypes::AggregationType arg0) const
	{
		return callObjectMethod(
			"get",
			"(Landroid/health/connect/datatypes/AggregationType;)Ljava/lang/Object;",
			arg0.object()
		);
	}
	inline JObject AggregateRecordsResponse::getDataOrigins(android::health::connect::datatypes::AggregationType arg0) const
	{
		return callObjectMethod(
			"getDataOrigins",
			"(Landroid/health/connect/datatypes/AggregationType;)Ljava/util/Set;",
			arg0.object()
		);
	}
	inline java::time::ZoneOffset AggregateRecordsResponse::getZoneOffset(android::health::connect::datatypes::AggregationType arg0) const
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
