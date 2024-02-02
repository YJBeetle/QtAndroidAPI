#pragma once

#include "./LeanBodyMassRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "./units/Mass.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./LeanBodyMassRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline LeanBodyMassRecord_Builder::LeanBodyMassRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, android::health::connect::datatypes::units::Mass arg2)
		: JObject(
			"android.health.connect.datatypes.LeanBodyMassRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Landroid/health/connect/datatypes/units/Mass;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::LeanBodyMassRecord LeanBodyMassRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/LeanBodyMassRecord;"
		);
	}
	inline android::health::connect::datatypes::LeanBodyMassRecord_Builder LeanBodyMassRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/LeanBodyMassRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::LeanBodyMassRecord_Builder LeanBodyMassRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/LeanBodyMassRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
