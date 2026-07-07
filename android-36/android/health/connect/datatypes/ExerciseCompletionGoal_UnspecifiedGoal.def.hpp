#pragma once

#include "./ExerciseCompletionGoal.def.hpp"

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal_UnspecifiedGoal : public android::health::connect::datatypes::ExerciseCompletionGoal
	{
	public:
		// Fields
		static android::health::connect::datatypes::ExerciseCompletionGoal_UnspecifiedGoal INSTANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseCompletionGoal_UnspecifiedGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExerciseCompletionGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseCompletionGoal_UnspecifiedGoal(QJniObject obj) : android::health::connect::datatypes::ExerciseCompletionGoal(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::health::connect::datatypes

