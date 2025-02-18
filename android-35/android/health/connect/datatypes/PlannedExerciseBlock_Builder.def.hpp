#pragma once

#include "../../../../JObject.hpp"

namespace android::health::connect::datatypes
{
	class PlannedExerciseBlock;
}
namespace android::health::connect::datatypes
{
	class PlannedExerciseStep;
}
class JString;

namespace android::health::connect::datatypes
{
	class PlannedExerciseBlock_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PlannedExerciseBlock_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PlannedExerciseBlock_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		PlannedExerciseBlock_Builder(jint arg0);
		
		// Methods
		android::health::connect::datatypes::PlannedExerciseBlock_Builder addStep(android::health::connect::datatypes::PlannedExerciseStep arg0) const;
		android::health::connect::datatypes::PlannedExerciseBlock build() const;
		android::health::connect::datatypes::PlannedExerciseBlock_Builder clearSteps() const;
		android::health::connect::datatypes::PlannedExerciseBlock_Builder setDescription(JString arg0) const;
		android::health::connect::datatypes::PlannedExerciseBlock_Builder setRepetitions(jint arg0) const;
		android::health::connect::datatypes::PlannedExerciseBlock_Builder setSteps(JObject arg0) const;
	};
} // namespace android::health::connect::datatypes

