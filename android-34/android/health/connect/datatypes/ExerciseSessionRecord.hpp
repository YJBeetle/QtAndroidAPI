#pragma once

#include "./AggregationType.def.hpp"
#include "./ExerciseRoute.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../JObject.hpp"
#include "./ExerciseSessionRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	inline android::health::connect::datatypes::AggregationType ExerciseSessionRecord::EXERCISE_DURATION_TOTAL()
	{
		return getStaticObjectField(
			"android.health.connect.datatypes.ExerciseSessionRecord",
			"EXERCISE_DURATION_TOTAL",
			"Landroid/health/connect/datatypes/AggregationType;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean ExerciseSessionRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ExerciseSessionRecord::getExerciseType() const
	{
		return callMethod<jint>(
			"getExerciseType",
			"()I"
		);
	}
	inline JObject ExerciseSessionRecord::getLaps() const
	{
		return callObjectMethod(
			"getLaps",
			"()Ljava/util/List;"
		);
	}
	inline JString ExerciseSessionRecord::getNotes() const
	{
		return callObjectMethod(
			"getNotes",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::health::connect::datatypes::ExerciseRoute ExerciseSessionRecord::getRoute() const
	{
		return callObjectMethod(
			"getRoute",
			"()Landroid/health/connect/datatypes/ExerciseRoute;"
		);
	}
	inline JObject ExerciseSessionRecord::getSegments() const
	{
		return callObjectMethod(
			"getSegments",
			"()Ljava/util/List;"
		);
	}
	inline JString ExerciseSessionRecord::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean ExerciseSessionRecord::hasRoute() const
	{
		return callMethod<jboolean>(
			"hasRoute",
			"()Z"
		);
	}
	inline jint ExerciseSessionRecord::hashCode() const
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
