#pragma once

#include "./ExerciseCompletionGoal.def.hpp"

class JObject;

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal_RepetitionsGoal : public android::health::connect::datatypes::ExerciseCompletionGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseCompletionGoal_RepetitionsGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExerciseCompletionGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseCompletionGoal_RepetitionsGoal(QJniObject obj) : android::health::connect::datatypes::ExerciseCompletionGoal(obj) {}
		
		// Constructors
		ExerciseCompletionGoal_RepetitionsGoal(jint arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getRepetitions() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

