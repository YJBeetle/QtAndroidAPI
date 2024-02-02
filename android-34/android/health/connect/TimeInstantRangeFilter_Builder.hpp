#pragma once

#include "./TimeInstantRangeFilter.def.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./TimeInstantRangeFilter_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline TimeInstantRangeFilter_Builder::TimeInstantRangeFilter_Builder()
		: JObject(
			"android.health.connect.TimeInstantRangeFilter$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::health::connect::TimeInstantRangeFilter TimeInstantRangeFilter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/TimeInstantRangeFilter;"
		);
	}
	inline android::health::connect::TimeInstantRangeFilter_Builder TimeInstantRangeFilter_Builder::setEndTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setEndTime",
			"(Ljava/time/Instant;)Landroid/health/connect/TimeInstantRangeFilter$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::TimeInstantRangeFilter_Builder TimeInstantRangeFilter_Builder::setStartTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setStartTime",
			"(Ljava/time/Instant;)Landroid/health/connect/TimeInstantRangeFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
