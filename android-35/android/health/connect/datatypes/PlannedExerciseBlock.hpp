#pragma once

#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "./PlannedExerciseBlock.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean PlannedExerciseBlock::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString PlannedExerciseBlock::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint PlannedExerciseBlock::getRepetitions() const
	{
		return callMethod<jint>(
			"getRepetitions",
			"()I"
		);
	}
	inline JObject PlannedExerciseBlock::getSteps() const
	{
		return callObjectMethod(
			"getSteps",
			"()Ljava/util/List;"
		);
	}
	inline jint PlannedExerciseBlock::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
