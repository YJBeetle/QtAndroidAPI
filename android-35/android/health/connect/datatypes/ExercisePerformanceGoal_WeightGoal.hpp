#pragma once

#include "./units/Mass.def.hpp"
#include "../../../../JObject.hpp"
#include "./ExercisePerformanceGoal_WeightGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExercisePerformanceGoal_WeightGoal::ExercisePerformanceGoal_WeightGoal(android::health::connect::datatypes::units::Mass arg0)
		: android::health::connect::datatypes::ExercisePerformanceGoal(
			"android.health.connect.datatypes.ExercisePerformanceGoal$WeightGoal",
			"(Landroid/health/connect/datatypes/units/Mass;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ExercisePerformanceGoal_WeightGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Mass ExercisePerformanceGoal_WeightGoal::getMass() const
	{
		return callObjectMethod(
			"getMass",
			"()Landroid/health/connect/datatypes/units/Mass;"
		);
	}
	inline jint ExercisePerformanceGoal_WeightGoal::hashCode() const
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
