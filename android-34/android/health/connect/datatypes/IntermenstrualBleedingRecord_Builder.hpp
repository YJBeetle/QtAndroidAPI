#pragma once

#include "./IntermenstrualBleedingRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./IntermenstrualBleedingRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline IntermenstrualBleedingRecord_Builder::IntermenstrualBleedingRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1)
		: JObject(
			"android.health.connect.datatypes.IntermenstrualBleedingRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::IntermenstrualBleedingRecord IntermenstrualBleedingRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/IntermenstrualBleedingRecord;"
		);
	}
	inline android::health::connect::datatypes::IntermenstrualBleedingRecord_Builder IntermenstrualBleedingRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/IntermenstrualBleedingRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::IntermenstrualBleedingRecord_Builder IntermenstrualBleedingRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/IntermenstrualBleedingRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
