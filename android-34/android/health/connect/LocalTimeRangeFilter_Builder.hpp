#pragma once

#include "./LocalTimeRangeFilter.def.hpp"
#include "../../../java/time/LocalDateTime.def.hpp"
#include "./LocalTimeRangeFilter_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline LocalTimeRangeFilter_Builder::LocalTimeRangeFilter_Builder()
		: JObject(
			"android.health.connect.LocalTimeRangeFilter$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::health::connect::LocalTimeRangeFilter LocalTimeRangeFilter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/LocalTimeRangeFilter;"
		);
	}
	inline android::health::connect::LocalTimeRangeFilter_Builder LocalTimeRangeFilter_Builder::setEndTime(java::time::LocalDateTime arg0) const
	{
		return callObjectMethod(
			"setEndTime",
			"(Ljava/time/LocalDateTime;)Landroid/health/connect/LocalTimeRangeFilter$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::LocalTimeRangeFilter_Builder LocalTimeRangeFilter_Builder::setStartTime(java::time::LocalDateTime arg0) const
	{
		return callObjectMethod(
			"setStartTime",
			"(Ljava/time/LocalDateTime;)Landroid/health/connect/LocalTimeRangeFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
