#pragma once

#include "./HydrationRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "./units/Volume.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./HydrationRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline HydrationRecord_Builder::HydrationRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, android::health::connect::datatypes::units::Volume arg3)
		: JObject(
			"android.health.connect.datatypes.HydrationRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;Landroid/health/connect/datatypes/units/Volume;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::HydrationRecord HydrationRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/HydrationRecord;"
		);
	}
	inline android::health::connect::datatypes::HydrationRecord_Builder HydrationRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/HydrationRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::HydrationRecord_Builder HydrationRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/HydrationRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::HydrationRecord_Builder HydrationRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/HydrationRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::HydrationRecord_Builder HydrationRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/HydrationRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
