#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal;
}
class JString;
class JObject;

namespace android::health::connect::datatypes
{
	class PlannedExerciseStep : public JObject
	{
	public:
		// Fields
		static jint EXERCISE_CATEGORY_ACTIVE();
		static jint EXERCISE_CATEGORY_COOLDOWN();
		static jint EXERCISE_CATEGORY_RECOVERY();
		static jint EXERCISE_CATEGORY_REST();
		static jint EXERCISE_CATEGORY_UNKNOWN();
		static jint EXERCISE_CATEGORY_WARMUP();
		
		// QJniObject forward
		template<typename ...Ts> explicit PlannedExerciseStep(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlannedExerciseStep(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::ExerciseCompletionGoal getCompletionGoal() const;
		JString getDescription() const;
		jint getExerciseCategory() const;
		jint getExerciseType() const;
		JObject getPerformanceGoals() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

