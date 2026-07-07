#pragma once

#include "./ExerciseCompletionGoal.def.hpp"

namespace android::health::connect::datatypes::units
{
	class Length;
}
class JObject;

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal_DistanceGoal : public android::health::connect::datatypes::ExerciseCompletionGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseCompletionGoal_DistanceGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExerciseCompletionGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseCompletionGoal_DistanceGoal(QJniObject obj) : android::health::connect::datatypes::ExerciseCompletionGoal(obj) {}
		
		// Constructors
		ExerciseCompletionGoal_DistanceGoal(android::health::connect::datatypes::units::Length arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Length getDistance() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

