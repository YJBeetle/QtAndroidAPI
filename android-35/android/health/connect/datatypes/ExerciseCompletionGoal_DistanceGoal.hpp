#pragma once

#include "./units/Length.def.hpp"
#include "../../../../JObject.hpp"
#include "./ExerciseCompletionGoal_DistanceGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseCompletionGoal_DistanceGoal::ExerciseCompletionGoal_DistanceGoal(android::health::connect::datatypes::units::Length arg0)
		: android::health::connect::datatypes::ExerciseCompletionGoal(
			"android.health.connect.datatypes.ExerciseCompletionGoal$DistanceGoal",
			"(Landroid/health/connect/datatypes/units/Length;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ExerciseCompletionGoal_DistanceGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Length ExerciseCompletionGoal_DistanceGoal::getDistance() const
	{
		return callObjectMethod(
			"getDistance",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline jint ExerciseCompletionGoal_DistanceGoal::hashCode() const
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
