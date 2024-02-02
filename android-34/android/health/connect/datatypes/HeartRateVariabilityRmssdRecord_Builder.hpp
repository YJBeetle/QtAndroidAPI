#pragma once

#include "./HeartRateVariabilityRmssdRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./HeartRateVariabilityRmssdRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline HeartRateVariabilityRmssdRecord_Builder::HeartRateVariabilityRmssdRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jdouble arg2)
		: JObject(
			"android.health.connect.datatypes.HeartRateVariabilityRmssdRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;D)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline android::health::connect::datatypes::HeartRateVariabilityRmssdRecord HeartRateVariabilityRmssdRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/HeartRateVariabilityRmssdRecord;"
		);
	}
	inline android::health::connect::datatypes::HeartRateVariabilityRmssdRecord_Builder HeartRateVariabilityRmssdRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/HeartRateVariabilityRmssdRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::HeartRateVariabilityRmssdRecord_Builder HeartRateVariabilityRmssdRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/HeartRateVariabilityRmssdRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
