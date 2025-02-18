#pragma once

#include "./units/Energy.def.hpp"
#include "../../../../JObject.hpp"
#include "./ExerciseCompletionGoal_ActiveCaloriesBurnedGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseCompletionGoal_ActiveCaloriesBurnedGoal::ExerciseCompletionGoal_ActiveCaloriesBurnedGoal(android::health::connect::datatypes::units::Energy arg0)
		: android::health::connect::datatypes::ExerciseCompletionGoal(
			"android.health.connect.datatypes.ExerciseCompletionGoal$ActiveCaloriesBurnedGoal",
			"(Landroid/health/connect/datatypes/units/Energy;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ExerciseCompletionGoal_ActiveCaloriesBurnedGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Energy ExerciseCompletionGoal_ActiveCaloriesBurnedGoal::getActiveCalories() const
	{
		return callObjectMethod(
			"getActiveCalories",
			"()Landroid/health/connect/datatypes/units/Energy;"
		);
	}
	inline jint ExerciseCompletionGoal_ActiveCaloriesBurnedGoal::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./ExerciseCompletionGoal.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
