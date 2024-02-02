#pragma once

#include "./Metadata.def.hpp"
#include "./PowerRecord.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./PowerRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline PowerRecord_Builder::PowerRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, JObject arg3)
		: JObject(
			"android.health.connect.datatypes.PowerRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::PowerRecord PowerRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/PowerRecord;"
		);
	}
	inline android::health::connect::datatypes::PowerRecord_Builder PowerRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/PowerRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::PowerRecord_Builder PowerRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/PowerRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::PowerRecord_Builder PowerRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/PowerRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PowerRecord_Builder PowerRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/PowerRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
