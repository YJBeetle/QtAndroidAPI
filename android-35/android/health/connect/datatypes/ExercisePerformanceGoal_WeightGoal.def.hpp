#pragma once

#include "./ExercisePerformanceGoal.def.hpp"

namespace android::health::connect::datatypes::units
{
	class Mass;
}
class JObject;

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal_WeightGoal : public android::health::connect::datatypes::ExercisePerformanceGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal_WeightGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExercisePerformanceGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal_WeightGoal(QJniObject obj) : android::health::connect::datatypes::ExercisePerformanceGoal(obj) {}
		
		// Constructors
		ExercisePerformanceGoal_WeightGoal(android::health::connect::datatypes::units::Mass arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Mass getMass() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

