#pragma once

#include "./ExerciseCompletionGoal_UnspecifiedGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::ExerciseCompletionGoal_UnspecifiedGoal ExerciseCompletionGoal_UnspecifiedGoal::INSTANCE()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ExerciseCompletionGoal$UnspecifiedGoal",
			"INSTANCE",
			"Landroid/health/connect/datatypes/ExerciseCompletionGoal$UnspecifiedGoal;"
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
