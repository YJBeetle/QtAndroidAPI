#pragma once

#include "./Metadata.def.hpp"
#include "./RestingHeartRateRecord.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./RestingHeartRateRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline RestingHeartRateRecord_Builder::RestingHeartRateRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jlong arg2)
		: JObject(
			"android.health.connect.datatypes.RestingHeartRateRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline android::health::connect::datatypes::RestingHeartRateRecord RestingHeartRateRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/RestingHeartRateRecord;"
		);
	}
	inline android::health::connect::datatypes::RestingHeartRateRecord_Builder RestingHeartRateRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/RestingHeartRateRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::RestingHeartRateRecord_Builder RestingHeartRateRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/RestingHeartRateRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
