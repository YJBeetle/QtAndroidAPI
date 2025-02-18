#pragma once

#include "./ExerciseCompletionGoal.def.hpp"

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal_UnknownGoal : public android::health::connect::datatypes::ExerciseCompletionGoal
	{
	public:
		// Fields
		static android::health::connect::datatypes::ExerciseCompletionGoal_UnknownGoal INSTANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseCompletionGoal_UnknownGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExerciseCompletionGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseCompletionGoal_UnknownGoal(QJniObject obj) : android::health::connect::datatypes::ExerciseCompletionGoal(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

