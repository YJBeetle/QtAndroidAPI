#pragma once

#include "./ExercisePerformanceGoal.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal_HeartRateGoal : public android::health::connect::datatypes::ExercisePerformanceGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal_HeartRateGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExercisePerformanceGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal_HeartRateGoal(QJniObject obj) : android::health::connect::datatypes::ExercisePerformanceGoal(obj) {}
		
		// Constructors
		ExercisePerformanceGoal_HeartRateGoal(jint arg0, jint arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getMaxBpm() const;
		jint getMinBpm() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

