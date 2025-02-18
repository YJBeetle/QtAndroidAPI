#pragma once

#include "./PlannedExerciseBlock.def.hpp"
#include "./PlannedExerciseStep.def.hpp"
#include "../../../../JString.hpp"
#include "./PlannedExerciseBlock_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline PlannedExerciseBlock_Builder::PlannedExerciseBlock_Builder(jint arg0)
		: JObject(
			"android.health.connect.datatypes.PlannedExerciseBlock$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::health::connect::datatypes::PlannedExerciseBlock_Builder PlannedExerciseBlock_Builder::addStep(android::health::connect::datatypes::PlannedExerciseStep arg0) const
	{
		return callObjectMethod(
			"addStep",
			"(Landroid/health/connect/datatypes/PlannedExerciseStep;)Landroid/health/connect/datatypes/PlannedExerciseBlock$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseBlock PlannedExerciseBlock_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/PlannedExerciseBlock;"
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseBlock_Builder PlannedExerciseBlock_Builder::clearSteps() const
	{
		return callObjectMethod(
			"clearSteps",
			"()Landroid/health/connect/datatypes/PlannedExerciseBlock$Builder;"
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseBlock_Builder PlannedExerciseBlock_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/PlannedExerciseBlock$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseBlock_Builder PlannedExerciseBlock_Builder::setRepetitions(jint arg0) const
	{
		return callObjectMethod(
			"setRepetitions",
			"(I)Landroid/health/connect/datatypes/PlannedExerciseBlock$Builder;",
			arg0
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseBlock_Builder PlannedExerciseBlock_Builder::setSteps(JObject arg0) const
	{
		return callObjectMethod(
			"setSteps",
			"(Ljava/util/List;)Landroid/health/connect/datatypes/PlannedExerciseBlock$Builder;",
			arg0.object()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
