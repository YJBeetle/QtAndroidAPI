#pragma once

#include "./ExercisePerformanceGoal.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal_RateOfPerceivedExertionGoal : public android::health::connect::datatypes::ExercisePerformanceGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal_RateOfPerceivedExertionGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExercisePerformanceGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal_RateOfPerceivedExertionGoal(QJniObject obj) : android::health::connect::datatypes::ExercisePerformanceGoal(obj) {}
		
		// Constructors
		ExercisePerformanceGoal_RateOfPerceivedExertionGoal(jint arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getRpe() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

