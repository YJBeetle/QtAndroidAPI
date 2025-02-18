#pragma once

#include "./ExerciseCompletionGoal.def.hpp"

namespace android::health::connect::datatypes::units
{
	class Energy;
}
class JObject;

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal_TotalCaloriesBurnedGoal : public android::health::connect::datatypes::ExerciseCompletionGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseCompletionGoal_TotalCaloriesBurnedGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExerciseCompletionGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseCompletionGoal_TotalCaloriesBurnedGoal(QJniObject obj) : android::health::connect::datatypes::ExerciseCompletionGoal(obj) {}
		
		// Constructors
		ExerciseCompletionGoal_TotalCaloriesBurnedGoal(android::health::connect::datatypes::units::Energy arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Energy getTotalCalories() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

