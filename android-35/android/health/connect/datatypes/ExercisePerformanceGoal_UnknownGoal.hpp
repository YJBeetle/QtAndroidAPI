#pragma once

#include "./ExercisePerformanceGoal_UnknownGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::ExercisePerformanceGoal_UnknownGoal ExercisePerformanceGoal_UnknownGoal::INSTANCE()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ExercisePerformanceGoal$UnknownGoal",
			"INSTANCE",
			"Landroid/health/connect/datatypes/ExercisePerformanceGoal$UnknownGoal;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers
#include "./ExercisePerformanceGoal.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
