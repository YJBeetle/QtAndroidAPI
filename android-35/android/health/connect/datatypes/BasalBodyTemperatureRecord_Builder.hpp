#pragma once

#include "./BasalBodyTemperatureRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "./units/Temperature.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./BasalBodyTemperatureRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline BasalBodyTemperatureRecord_Builder::BasalBodyTemperatureRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, jint arg2, android::health::connect::datatypes::units::Temperature arg3)
		: JObject(
			"android.health.connect.datatypes.BasalBodyTemperatureRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;ILandroid/health/connect/datatypes/units/Temperature;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::BasalBodyTemperatureRecord BasalBodyTemperatureRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/BasalBodyTemperatureRecord;"
		);
	}
	inline android::health::connect::datatypes::BasalBodyTemperatureRecord_Builder BasalBodyTemperatureRecord_Builder::clearZoneOffset() const
	{
		return callObjectMethod(
			"clearZoneOffset",
			"()Landroid/health/connect/datatypes/BasalBodyTemperatureRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::BasalBodyTemperatureRecord_Builder BasalBodyTemperatureRecord_Builder::setZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/BasalBodyTemperatureRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
