#pragma once

#include "./Metadata.def.hpp"
#include "./SkinTemperatureRecord.def.hpp"
#include "./units/Temperature.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./SkinTemperatureRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline SkinTemperatureRecord_Builder::SkinTemperatureRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2)
		: JObject(
			"android.health.connect.datatypes.SkinTemperatureRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::SkinTemperatureRecord SkinTemperatureRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/SkinTemperatureRecord;"
		);
	}
	inline android::health::connect::datatypes::SkinTemperatureRecord_Builder SkinTemperatureRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/SkinTemperatureRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::SkinTemperatureRecord_Builder SkinTemperatureRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/SkinTemperatureRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::SkinTemperatureRecord_Builder SkinTemperatureRecord_Builder::setBaseline(android::health::connect::datatypes::units::Temperature arg0) const
	{
		return callObjectMethod(
			"setBaseline",
			"(Landroid/health/connect/datatypes/units/Temperature;)Landroid/health/connect/datatypes/SkinTemperatureRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::SkinTemperatureRecord_Builder SkinTemperatureRecord_Builder::setDeltas(JObject arg0) const
	{
		return callObjectMethod(
			"setDeltas",
			"(Ljava/util/List;)Landroid/health/connect/datatypes/SkinTemperatureRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::SkinTemperatureRecord_Builder SkinTemperatureRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/SkinTemperatureRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::SkinTemperatureRecord_Builder SkinTemperatureRecord_Builder::setMeasurementLocation(jint arg0) const
	{
		return callObjectMethod(
			"setMeasurementLocation",
			"(I)Landroid/health/connect/datatypes/SkinTemperatureRecord$Builder;",
			arg0
		);
	}
	inline android::health::connect::datatypes::SkinTemperatureRecord_Builder SkinTemperatureRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/SkinTemperatureRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
