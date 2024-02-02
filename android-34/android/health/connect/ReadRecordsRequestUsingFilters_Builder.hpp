#pragma once

#include "./ReadRecordsRequestUsingFilters.def.hpp"
#include "./datatypes/DataOrigin.def.hpp"
#include "../../../JClass.hpp"
#include "./ReadRecordsRequestUsingFilters_Builder.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	inline ReadRecordsRequestUsingFilters_Builder::ReadRecordsRequestUsingFilters_Builder(JClass arg0)
		: JObject(
			"android.health.connect.ReadRecordsRequestUsingFilters$Builder",
			"(Ljava/lang/Class;)V",
			arg0.object<jclass>()
		) {}
	
	// Methods
	inline android::health::connect::ReadRecordsRequestUsingFilters_Builder ReadRecordsRequestUsingFilters_Builder::addDataOrigins(android::health::connect::datatypes::DataOrigin arg0) const
	{
		return callObjectMethod(
			"addDataOrigins",
			"(Landroid/health/connect/datatypes/DataOrigin;)Landroid/health/connect/ReadRecordsRequestUsingFilters$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::ReadRecordsRequestUsingFilters ReadRecordsRequestUsingFilters_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/ReadRecordsRequestUsingFilters;"
		);
	}
	inline android::health::connect::ReadRecordsRequestUsingFilters_Builder ReadRecordsRequestUsingFilters_Builder::setAscending(jboolean arg0) const
	{
		return callObjectMethod(
			"setAscending",
			"(Z)Landroid/health/connect/ReadRecordsRequestUsingFilters$Builder;",
			arg0
		);
	}
	inline android::health::connect::ReadRecordsRequestUsingFilters_Builder ReadRecordsRequestUsingFilters_Builder::setPageSize(jint arg0) const
	{
		return callObjectMethod(
			"setPageSize",
			"(I)Landroid/health/connect/ReadRecordsRequestUsingFilters$Builder;",
			arg0
		);
	}
	inline android::health::connect::ReadRecordsRequestUsingFilters_Builder ReadRecordsRequestUsingFilters_Builder::setPageToken(jlong arg0) const
	{
		return callObjectMethod(
			"setPageToken",
			"(J)Landroid/health/connect/ReadRecordsRequestUsingFilters$Builder;",
			arg0
		);
	}
	inline android::health::connect::ReadRecordsRequestUsingFilters_Builder ReadRecordsRequestUsingFilters_Builder::setTimeRangeFilter(JObject arg0) const
	{
		return callObjectMethod(
			"setTimeRangeFilter",
			"(Landroid/health/connect/TimeRangeFilter;)Landroid/health/connect/ReadRecordsRequestUsingFilters$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
