#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Length.def.hpp"
#include "../../../../JObject.hpp"
#include "./DistanceRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType DistanceRecord::DISTANCE_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.DistanceRecord",
			"DISTANCE_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean DistanceRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Length DistanceRecord::getDistance() const
	{
		return callObjectMethod(
			"getDistance",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline jint DistanceRecord::hashCode() const
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
