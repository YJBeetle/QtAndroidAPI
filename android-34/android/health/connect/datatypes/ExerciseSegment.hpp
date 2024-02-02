#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./ExerciseSegment.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ExerciseSegment::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant ExerciseSegment::getEndTime() const
	{
		return callObjectMethod(
			"getEndTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint ExerciseSegment::getRepetitionsCount() const
	{
		return callMethod<jint>(
			"getRepetitionsCount",
			"()I"
		);
	}
	inline jint ExerciseSegment::getSegmentType() const
	{
		return callMethod<jint>(
			"getSegmentType",
			"()I"
		);
	}
	inline java::time::Instant ExerciseSegment::getStartTime() const
	{
		return callObjectMethod(
			"getStartTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint ExerciseSegment::hashCode() const
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
