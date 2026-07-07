#pragma once

#include "./ExercisePerformanceGoal.def.hpp"

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal_UnknownGoal : public android::health::connect::datatypes::ExercisePerformanceGoal
	{
	public:
		// Fields
		static android::health::connect::datatypes::ExercisePerformanceGoal_UnknownGoal INSTANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal_UnknownGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExercisePerformanceGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal_UnknownGoal(QJniObject obj) : android::health::connect::datatypes::ExercisePerformanceGoal(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

