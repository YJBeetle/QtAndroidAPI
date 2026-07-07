#pragma once

#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Duration.def.hpp"
#include "../../../../java/time/LocalDate.def.hpp"
#include "./PlannedExerciseSessionRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean PlannedExerciseSessionRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject PlannedExerciseSessionRecord::getBlocks() const
	{
		return callObjectMethod(
			"getBlocks",
			"()Ljava/util/List;"
		);
	}
	inline JString PlannedExerciseSessionRecord::getCompletedExerciseSessionId() const
	{
		return callObjectMethod(
			"getCompletedExerciseSessionId",
			"()Ljava/lang/String;"
		);
	}
	inline java::time::Duration PlannedExerciseSessionRecord::getDuration() const
	{
		return callObjectMethod(
			"getDuration",
			"()Ljava/time/Duration;"
		);
	}
	inline jint PlannedExerciseSessionRecord::getExerciseType() const
	{
		return callMethod<jint>(
			"getExerciseType",
			"()I"
		);
	}
	inline JString PlannedExerciseSessionRecord::getNotes() const
	{
		return callObjectMethod(
			"getNotes",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline java::time::LocalDate PlannedExerciseSessionRecord::getStartDate() const
	{
		return callObjectMethod(
			"getStartDate",
			"()Ljava/time/LocalDate;"
		);
	}
	inline JString PlannedExerciseSessionRecord::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean PlannedExerciseSessionRecord::hasExplicitTime() const
	{
		return callMethod<jboolean>(
			"hasExplicitTime",
			"()Z"
		);
	}
	inline jint PlannedExerciseSessionRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"
#include "./IntervalRecord.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
