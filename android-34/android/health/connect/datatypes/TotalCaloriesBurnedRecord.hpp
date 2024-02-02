#pragma once

#include "./AggregationType.def.hpp"
#include "./units/Energy.def.hpp"
#include "../../../../JObject.hpp"
#include "./TotalCaloriesBurnedRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType TotalCaloriesBurnedRecord::ENERGY_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.TotalCaloriesBurnedRecord",
			"ENERGY_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean TotalCaloriesBurnedRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Energy TotalCaloriesBurnedRecord::getEnergy() const
	{
		return callObjectMethod(
			"getEnergy",
			"()Landroid/health/connect/datatypes/units/Energy;"
		);
	}
	inline jint TotalCaloriesBurnedRecord::hashCode() const
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
