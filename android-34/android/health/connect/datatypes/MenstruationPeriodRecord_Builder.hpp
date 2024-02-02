#pragma once

#include "./MenstruationPeriodRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./MenstruationPeriodRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline MenstruationPeriodRecord_Builder::MenstruationPeriodRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2)
		: JObject(
			"android.health.connect.datatypes.MenstruationPeriodRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::MenstruationPeriodRecord MenstruationPeriodRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/MenstruationPeriodRecord;"
		);
	}
	inline android::health::connect::datatypes::MenstruationPeriodRecord_Builder MenstruationPeriodRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/MenstruationPeriodRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::MenstruationPeriodRecord_Builder MenstruationPeriodRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/MenstruationPeriodRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::MenstruationPeriodRecord_Builder MenstruationPeriodRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/MenstruationPeriodRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::MenstruationPeriodRecord_Builder MenstruationPeriodRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/MenstruationPeriodRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
