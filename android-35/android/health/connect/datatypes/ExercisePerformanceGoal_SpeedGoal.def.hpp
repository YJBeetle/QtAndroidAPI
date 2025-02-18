#pragma once

#include "./ExercisePerformanceGoal.def.hpp"

namespace android::health::connect::datatypes::units
{
	class Velocity;
}
class JObject;

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal_SpeedGoal : public android::health::connect::datatypes::ExercisePerformanceGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal_SpeedGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExercisePerformanceGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal_SpeedGoal(QJniObject obj) : android::health::connect::datatypes::ExercisePerformanceGoal(obj) {}
		
		// Constructors
		ExercisePerformanceGoal_SpeedGoal(android::health::connect::datatypes::units::Velocity arg0, android::health::connect::datatypes::units::Velocity arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Velocity getMaxSpeed() const;
		android::health::connect::datatypes::units::Velocity getMinSpeed() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

