#pragma once

#include "../../../../JObject.hpp"
#include "./ExercisePerformanceGoal_CadenceGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExercisePerformanceGoal_CadenceGoal::ExercisePerformanceGoal_CadenceGoal(jdouble arg0, jdouble arg1)
		: android::health::connect::datatypes::ExercisePerformanceGoal(
			"android.health.connect.datatypes.ExercisePerformanceGoal$CadenceGoal",
			"(DD)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean ExercisePerformanceGoal_CadenceGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jdouble ExercisePerformanceGoal_CadenceGoal::getMaxRpm() const
	{
		return callMethod<jdouble>(
			"getMaxRpm",
			"()D"
		);
	}
	inline jdouble ExercisePerformanceGoal_CadenceGoal::getMinRpm() const
	{
		return callMethod<jdouble>(
			"getMinRpm",
			"()D"
		);
	}
	inline jint ExercisePerformanceGoal_CadenceGoal::hashCode() const
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
