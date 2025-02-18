#pragma once

#include "./BloodGlucoseRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "./units/BloodGlucose.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./BloodGlucoseRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline BloodGlucoseRecord_Builder::BloodGlucoseRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, android::health::connect::datatypes::units::BloodGlucose arg3, jint arg4, jint arg5)
		: JObject(
			"android.health.connect.datatypes.BloodGlucoseRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;ILandroid/health/connect/datatypes/units/BloodGlucose;II)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4,
			arg5
		) {}
	
	// Methods
	inline android::health::connect::datatypes::BloodGlucoseRecord BloodGlucoseRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/BloodGlucoseRecord;"
		);
	}
	inline android::health::connect::datatypes::BloodGlucoseRecord_Builder BloodGlucoseRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/BloodGlucoseRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::BloodGlucoseRecord_Builder BloodGlucoseRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/BloodGlucoseRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
