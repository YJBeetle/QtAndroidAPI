#pragma once

#include "./CyclingPedalingCadenceRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./CyclingPedalingCadenceRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline CyclingPedalingCadenceRecord_Builder::CyclingPedalingCadenceRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, JObject arg3)
		: JObject(
			"android.health.connect.datatypes.CyclingPedalingCadenceRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;Ljava/util/List;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::CyclingPedalingCadenceRecord CyclingPedalingCadenceRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/CyclingPedalingCadenceRecord;"
		);
	}
	inline android::health::connect::datatypes::CyclingPedalingCadenceRecord_Builder CyclingPedalingCadenceRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/CyclingPedalingCadenceRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::CyclingPedalingCadenceRecord_Builder CyclingPedalingCadenceRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/CyclingPedalingCadenceRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::CyclingPedalingCadenceRecord_Builder CyclingPedalingCadenceRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/CyclingPedalingCadenceRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::CyclingPedalingCadenceRecord_Builder CyclingPedalingCadenceRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/CyclingPedalingCadenceRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
