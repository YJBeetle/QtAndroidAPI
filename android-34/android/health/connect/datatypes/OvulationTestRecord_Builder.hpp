#pragma once

#include "./Metadata.def.hpp"
#include "./OvulationTestRecord.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./OvulationTestRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline OvulationTestRecord_Builder::OvulationTestRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2)
		: JObject(
			"android.health.connect.datatypes.OvulationTestRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline android::health::connect::datatypes::OvulationTestRecord OvulationTestRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/OvulationTestRecord;"
		);
	}
	inline android::health::connect::datatypes::OvulationTestRecord_Builder OvulationTestRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/OvulationTestRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::OvulationTestRecord_Builder OvulationTestRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/OvulationTestRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
