#pragma once

#include "./ExerciseCompletionGoal.def.hpp"

namespace android::health::connect::datatypes::units
{
	class Length;
}
class JObject;
namespace java::time
{
	class Duration;
}

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal_DistanceWithVariableRestGoal : public android::health::connect::datatypes::ExerciseCompletionGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseCompletionGoal_DistanceWithVariableRestGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExerciseCompletionGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseCompletionGoal_DistanceWithVariableRestGoal(QJniObject obj) : android::health::connect::datatypes::ExerciseCompletionGoal(obj) {}
		
		// Constructors
		ExerciseCompletionGoal_DistanceWithVariableRestGoal(android::health::connect::datatypes::units::Length arg0, java::time::Duration arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Length getDistance() const;
		java::time::Duration getDuration() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

