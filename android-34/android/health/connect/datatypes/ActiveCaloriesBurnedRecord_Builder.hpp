#pragma once

#include "./ActiveCaloriesBurnedRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "./units/Energy.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./ActiveCaloriesBurnedRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ActiveCaloriesBurnedRecord_Builder::ActiveCaloriesBurnedRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, android::health::connect::datatypes::units::Energy arg3)
		: JObject(
			"android.health.connect.datatypes.ActiveCaloriesBurnedRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;Landroid/health/connect/datatypes/units/Energy;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::ActiveCaloriesBurnedRecord ActiveCaloriesBurnedRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/ActiveCaloriesBurnedRecord;"
		);
	}
	inline android::health::connect::datatypes::ActiveCaloriesBurnedRecord_Builder ActiveCaloriesBurnedRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/ActiveCaloriesBurnedRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::ActiveCaloriesBurnedRecord_Builder ActiveCaloriesBurnedRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/ActiveCaloriesBurnedRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::ActiveCaloriesBurnedRecord_Builder ActiveCaloriesBurnedRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/ActiveCaloriesBurnedRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::ActiveCaloriesBurnedRecord_Builder ActiveCaloriesBurnedRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/ActiveCaloriesBurnedRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
