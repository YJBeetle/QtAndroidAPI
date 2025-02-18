#pragma once

#include "./units/Power.def.hpp"
#include "../../../../JObject.hpp"
#include "./ExercisePerformanceGoal_PowerGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExercisePerformanceGoal_PowerGoal::ExercisePerformanceGoal_PowerGoal(android::health::connect::datatypes::units::Power arg0, android::health::connect::datatypes::units::Power arg1)
		: android::health::connect::datatypes::ExercisePerformanceGoal(
			"android.health.connect.datatypes.ExercisePerformanceGoal$PowerGoal",
			"(Landroid/health/connect/datatypes/units/Power;Landroid/health/connect/datatypes/units/Power;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean ExercisePerformanceGoal_PowerGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Power ExercisePerformanceGoal_PowerGoal::getMaxPower() const
	{
		return callObjectMethod(
			"getMaxPower",
			"()Landroid/health/connect/datatypes/units/Power;"
		);
	}
	inline android::health::connect::datatypes::units::Power ExercisePerformanceGoal_PowerGoal::getMinPower() const
	{
		return callObjectMethod(
			"getMinPower",
			"()Landroid/health/connect/datatypes/units/Power;"
		);
	}
	inline jint ExercisePerformanceGoal_PowerGoal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./ExercisePerformanceGoal.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
