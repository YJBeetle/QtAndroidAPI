#pragma once

#include "./ExercisePerformanceGoal.def.hpp"

namespace android::health::connect::datatypes::units
{
	class Power;
}
class JObject;

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal_PowerGoal : public android::health::connect::datatypes::ExercisePerformanceGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal_PowerGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExercisePerformanceGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal_PowerGoal(QJniObject obj) : android::health::connect::datatypes::ExercisePerformanceGoal(obj) {}
		
		// Constructors
		ExercisePerformanceGoal_PowerGoal(android::health::connect::datatypes::units::Power arg0, android::health::connect::datatypes::units::Power arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		android::health::connect::datatypes::units::Power getMaxPower() const;
		android::health::connect::datatypes::units::Power getMinPower() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

