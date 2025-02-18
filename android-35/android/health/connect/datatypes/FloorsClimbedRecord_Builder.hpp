#pragma once

#include "./FloorsClimbedRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./FloorsClimbedRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline FloorsClimbedRecord_Builder::FloorsClimbedRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jdouble arg3)
		: JObject(
			"android.health.connect.datatypes.FloorsClimbedRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;D)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline android::health::connect::datatypes::FloorsClimbedRecord FloorsClimbedRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/FloorsClimbedRecord;"
		);
	}
	inline android::health::connect::datatypes::FloorsClimbedRecord_Builder FloorsClimbedRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/FloorsClimbedRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::FloorsClimbedRecord_Builder FloorsClimbedRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/FloorsClimbedRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::FloorsClimbedRecord_Builder FloorsClimbedRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/FloorsClimbedRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::FloorsClimbedRecord_Builder FloorsClimbedRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/FloorsClimbedRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
