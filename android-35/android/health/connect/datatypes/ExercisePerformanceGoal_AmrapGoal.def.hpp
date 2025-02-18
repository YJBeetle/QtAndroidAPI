#pragma once

#include "./ExercisePerformanceGoal.def.hpp"

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal_AmrapGoal : public android::health::connect::datatypes::ExercisePerformanceGoal
	{
	public:
		// Fields
		static android::health::connect::datatypes::ExercisePerformanceGoal_AmrapGoal INSTANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal_AmrapGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExercisePerformanceGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal_AmrapGoal(QJniObject obj) : android::health::connect::datatypes::ExercisePerformanceGoal(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

