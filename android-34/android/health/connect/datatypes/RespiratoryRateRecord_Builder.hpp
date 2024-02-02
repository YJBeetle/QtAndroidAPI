#pragma once

#include "./Metadata.def.hpp"
#include "./RespiratoryRateRecord.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./RespiratoryRateRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline RespiratoryRateRecord_Builder::RespiratoryRateRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jdouble arg2)
		: JObject(
			"android.health.connect.datatypes.RespiratoryRateRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;D)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline android::health::connect::datatypes::RespiratoryRateRecord RespiratoryRateRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/RespiratoryRateRecord;"
		);
	}
	inline android::health::connect::datatypes::RespiratoryRateRecord_Builder RespiratoryRateRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/RespiratoryRateRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::RespiratoryRateRecord_Builder RespiratoryRateRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/RespiratoryRateRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
