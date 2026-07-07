#pragma once

#include "./units/Length.def.hpp"
#include "../../../../JObject.hpp"
#include "../../../../java/time/Duration.def.hpp"
#include "./ExerciseCompletionGoal_DistanceWithVariableRestGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseCompletionGoal_DistanceWithVariableRestGoal::ExerciseCompletionGoal_DistanceWithVariableRestGoal(android::health::connect::datatypes::units::Length arg0, java::time::Duration arg1)
		: android::health::connect::datatypes::ExerciseCompletionGoal(
			"android.health.connect.datatypes.ExerciseCompletionGoal$DistanceWithVariableRestGoal",
			"(Landroid/health/connect/datatypes/units/Length;Ljava/time/Duration;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jboolean ExerciseCompletionGoal_DistanceWithVariableRestGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::health::connect::datatypes::units::Length ExerciseCompletionGoal_DistanceWithVariableRestGoal::getDistance() const
	{
		return callObjectMethod(
			"getDistance",
			"()Landroid/health/connect/datatypes/units/Length;"
		);
	}
	inline java::time::Duration ExerciseCompletionGoal_DistanceWithVariableRestGoal::getDuration() const
	{
		return callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	inline jint ExerciseCompletionGoal_DistanceWithVariableRestGoal::hashCode() const
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
