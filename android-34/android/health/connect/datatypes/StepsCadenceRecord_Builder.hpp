#pragma once

#include "./Metadata.def.hpp"
#include "./StepsCadenceRecord.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./StepsCadenceRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline StepsCadenceRecord_Builder::StepsCadenceRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, JObject arg3)
		: JObject(
			"android.health.connect.datatypes.StepsCadenceRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::StepsCadenceRecord StepsCadenceRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/StepsCadenceRecord;"
		);
	}
	inline android::health::connect::datatypes::StepsCadenceRecord_Builder StepsCadenceRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/StepsCadenceRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::StepsCadenceRecord_Builder StepsCadenceRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/StepsCadenceRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::StepsCadenceRecord_Builder StepsCadenceRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/StepsCadenceRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::StepsCadenceRecord_Builder StepsCadenceRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/StepsCadenceRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
