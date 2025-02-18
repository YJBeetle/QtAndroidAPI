#pragma once

#include "./ExercisePerformanceGoal_AmrapGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::ExercisePerformanceGoal_AmrapGoal ExercisePerformanceGoal_AmrapGoal::INSTANCE()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ExercisePerformanceGoal$AmrapGoal",
			"INSTANCE",
			"Landroid/health/connect/datatypes/ExercisePerformanceGoal$AmrapGoal;"
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
