#pragma once

#include "./ExerciseCompletionGoal.def.hpp"

class JObject;
namespace java::time
{
	class Duration;
}

namespace android::health::connect::datatypes
{
	class ExerciseCompletionGoal_DurationGoal : public android::health::connect::datatypes::ExerciseCompletionGoal
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ExerciseCompletionGoal_DurationGoal(const char *className, const char *sig, Ts...agv) : android::health::connect::datatypes::ExerciseCompletionGoal(className, sig, std::forward<Ts>(agv)...) {}
		ExerciseCompletionGoal_DurationGoal(QJniObject obj) : android::health::connect::datatypes::ExerciseCompletionGoal(obj) {}
		
		// Constructors
		ExerciseCompletionGoal_DurationGoal(java::time::Duration arg0);
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::time::Duration getDuration() const;
		jint hashCode() const;
	};
} // namespace android::health::connect::datatypes

