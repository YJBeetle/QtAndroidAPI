#pragma once

#include "./ExerciseCompletionGoal.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal_StepsGoal : public android::health::connect::datatypes::ExerciseCompletionGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseCompletionGoal_StepsGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExerciseCompletionGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseCompletionGoal_StepsGoal(QJniObject obj) : android::health::connect::datatypes::ExerciseCompletionGoal(obj) {}
		
		// Constructors
		ExerciseCompletionGoal_StepsGoal(jint arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getSteps() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

