#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/time/Duration.def.hpp"
#include "./ExerciseCompletionGoal_DurationGoal.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseCompletionGoal_DurationGoal::ExerciseCompletionGoal_DurationGoal(java::time::Duration arg0)
		: android::health::connect::datatypes::ExerciseCompletionGoal(
			"android.health.connect.datatypes.ExerciseCompletionGoal$DurationGoal",
			"(Ljava/time/Duration;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean ExerciseCompletionGoal_DurationGoal::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Duration ExerciseCompletionGoal_DurationGoal::getDuration() const
	{
		return callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	inline jint ExerciseCompletionGoal_DurationGoal::hashCode() const
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
