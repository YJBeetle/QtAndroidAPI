#pragma once

#include "./ExercisePerformanceGoal.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class ExercisePerformanceGoal_CadenceGoal : public android::health::connect::datatypes::ExercisePerformanceGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExercisePerformanceGoal_CadenceGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExercisePerformanceGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExercisePerformanceGoal_CadenceGoal(QJniObject obj) : android::health::connect::datatypes::ExercisePerformanceGoal(obj) {}
		
		// Constructors
		ExercisePerformanceGoal_CadenceGoal(jdouble arg0, jdouble arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jdouble getMaxRpm() const;
		jdouble getMinRpm() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

