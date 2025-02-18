#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal;
}
namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal;
}
namespace android::health::connect::datatypes
{
	class PlannedExerciseStep;
}
class JString;

namespace android::health::connect::datatypes
{
	class PlannedExerciseStep_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlannedExerciseStep_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlannedExerciseStep_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PlannedExerciseStep_Builder(jint arg0, jint arg1, android::health::connect::datatypes::ExerciseCompletionGoal arg2);
		
		// Methods
		android::health::connect::datatypes::PlannedExerciseStep_Builder addPerformanceGoal(android::health::connect::datatypes::ExercisePerformanceGoal arg0) const;
		android::health::connect::datatypes::PlannedExerciseStep build() const;
		android::health::connect::datatypes::PlannedExerciseStep_Builder clearPerformanceGoals() const;
		android::health::connect::datatypes::PlannedExerciseStep_Builder setCompletionGoal(android::health::connect::datatypes::ExerciseCompletionGoal arg0) const;
		android::health::connect::datatypes::PlannedExerciseStep_Builder setDescription(JString arg0) const;
		android::health::connect::datatypes::PlannedExerciseStep_Builder setExerciseCategory(jint arg0) const;
		android::health::connect::datatypes::PlannedExerciseStep_Builder setExerciseType(jint arg0) const;
		android::health::connect::datatypes::PlannedExerciseStep_Builder setPerformanceGoals(JObject arg0) const;
	};
} // namespace android::health::connect::datatypes

