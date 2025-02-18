#pragma once

#include "../../../../JObject.hpp"
#include "./ExercisePerformanceGoal_HeartRateGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExercisePerformanceGoal_HeartRateGoal::ExercisePerformanceGoal_HeartRateGoal(jint arg0, jint arg1)
		: android::health::connect::datatypes::ExercisePerformanceGoal(
			"android.health.connect.datatypes.ExercisePerformanceGoal$HeartRateGoal",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean ExercisePerformanceGoal_HeartRateGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ExercisePerformanceGoal_HeartRateGoal::getMaxBpm() const
	{
		return callMethod<jint>(
			"getMaxBpm",
			"()I"
		);
	}
	inline jint ExercisePerformanceGoal_HeartRateGoal::getMinBpm() const
	{
		return callMethod<jint>(
			"getMinBpm",
			"()I"
		);
	}
	inline jint ExercisePerformanceGoal_HeartRateGoal::hashCode() const
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
