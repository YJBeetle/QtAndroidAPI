#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Energy.def.hpp"
#include "../../../../JObject.hpp"
#include "./ActiveCaloriesBurnedRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType ActiveCaloriesBurnedRecord::ACTIVE_CALORIES_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ActiveCaloriesBurnedRecord",
			"ACTIVE_CALORIES_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean ActiveCaloriesBurnedRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Energy ActiveCaloriesBurnedRecord::getEnergy() const
	{
		return callObjectMethod(
			"getEnergy",
			"()Landroid/health/connect/datatypes/units/Energy;"
		);
	}
	inline jint ActiveCaloriesBurnedRecord::hashCode() const
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
