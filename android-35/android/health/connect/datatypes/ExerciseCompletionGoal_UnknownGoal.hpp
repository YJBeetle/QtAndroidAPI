#pragma once

#include "./ExerciseCompletionGoal_UnknownGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::ExerciseCompletionGoal_UnknownGoal ExerciseCompletionGoal_UnknownGoal::INSTANCE()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ExerciseCompletionGoal$UnknownGoal",
			"INSTANCE",
			"Landroid/health/connect/datatypes/ExerciseCompletionGoal$UnknownGoal;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::health::connect::datatypes

// Base class headers
#include "./ExerciseCompletionGoal.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
