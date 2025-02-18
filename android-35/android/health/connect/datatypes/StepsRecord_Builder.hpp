#pragma once

#include "./Metadata.def.hpp"
#include "./StepsRecord.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./StepsRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline StepsRecord_Builder::StepsRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jlong arg3)
		: JObject(
			"android.health.connect.datatypes.StepsRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;J)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline android::health::connect::datatypes::StepsRecord StepsRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/StepsRecord;"
		);
	}
	inline android::health::connect::datatypes::StepsRecord_Builder StepsRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/StepsRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::StepsRecord_Builder StepsRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/StepsRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::StepsRecord_Builder StepsRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/StepsRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::StepsRecord_Builder StepsRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/StepsRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
