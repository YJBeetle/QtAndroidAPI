#pragma once

#include "./Metadata.def.hpp"
#include "./Vo2MaxRecord.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./Vo2MaxRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline Vo2MaxRecord_Builder::Vo2MaxRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, jdouble arg3)
		: JObject(
			"android.health.connect.datatypes.Vo2MaxRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;ID)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		) {}
	
	// Methods
	inline android::health::connect::datatypes::Vo2MaxRecord Vo2MaxRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/Vo2MaxRecord;"
		);
	}
	inline android::health::connect::datatypes::Vo2MaxRecord_Builder Vo2MaxRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/Vo2MaxRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::Vo2MaxRecord_Builder Vo2MaxRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/Vo2MaxRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
