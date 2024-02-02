#pragma once

#include "./Metadata.def.hpp"
#include "./OxygenSaturationRecord.def.hpp"
#include "./units/Percentage.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./OxygenSaturationRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline OxygenSaturationRecord_Builder::OxygenSaturationRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, android::health::connect::datatypes::units::Percentage arg2)
		: JObject(
			"android.health.connect.datatypes.OxygenSaturationRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Landroid/health/connect/datatypes/units/Percentage;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::OxygenSaturationRecord OxygenSaturationRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/OxygenSaturationRecord;"
		);
	}
	inline android::health::connect::datatypes::OxygenSaturationRecord_Builder OxygenSaturationRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/OxygenSaturationRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::OxygenSaturationRecord_Builder OxygenSaturationRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/OxygenSaturationRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
