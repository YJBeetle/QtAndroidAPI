#pragma once

#include "./BloodPressureRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "./units/Pressure.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./BloodPressureRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline BloodPressureRecord_Builder::BloodPressureRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, android::health::connect::datatypes::units::Pressure arg3, android::health::connect::datatypes::units::Pressure arg4, jint arg5)
		: JObject(
			"android.health.connect.datatypes.BloodPressureRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;ILandroid/health/connect/datatypes/units/Pressure;Landroid/health/connect/datatypes/units/Pressure;I)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4.object(),
			arg5
		) {}
	
	// Methods
	inline android::health::connect::datatypes::BloodPressureRecord BloodPressureRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/BloodPressureRecord;"
		);
	}
	inline android::health::connect::datatypes::BloodPressureRecord_Builder BloodPressureRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/BloodPressureRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::BloodPressureRecord_Builder BloodPressureRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/BloodPressureRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
