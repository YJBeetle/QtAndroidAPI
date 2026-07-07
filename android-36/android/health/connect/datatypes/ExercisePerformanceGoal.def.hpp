#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

