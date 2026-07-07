#pragma once

#include "../../../../JObject.hpp"
#include "./ExercisePerformanceGoal_RateOfPerceivedExertionGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExercisePerformanceGoal_RateOfPerceivedExertionGoal::ExercisePerformanceGoal_RateOfPerceivedExertionGoal(jint arg0)
		: android::health::connect::datatypes::ExercisePerformanceGoal(
			"android.health.connect.datatypes.ExercisePerformanceGoal$RateOfPerceivedExertionGoal",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline jboolean ExercisePerformanceGoal_RateOfPerceivedExertionGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ExercisePerformanceGoal_RateOfPerceivedExertionGoal::getRpe() const
	{
		return callMethod<jint>(
			"getRpe",
			"()I"
		);
	}
	inline jint ExercisePerformanceGoal_RateOfPerceivedExertionGoal::hashCode() const
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
