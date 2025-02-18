#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Length.def.hpp"
#include "../../../../JObject.hpp"
#include "./ElevationGainedRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType ElevationGainedRecord::ELEVATION_GAINED_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ElevationGainedRecord",
			"ELEVATION_GAINED_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean ElevationGainedRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Length ElevationGainedRecord::getElevation() const
	{
		return callObjectMethod(
			"getElevation",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline jint ElevationGainedRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./IntervalRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
