#pragma once

#include "./ExerciseSegment.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./ExerciseSegment_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseSegment_Builder::ExerciseSegment_Builder(java::time::Instant arg0, java::time::Instant arg1, jint arg2)
		: JObject(
			"android.health.connect.datatypes.ExerciseSegment$Builder",
			"(Ljava/time/Instant;Ljava/time/Instant;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline android::health::connect::datatypes::ExerciseSegment ExerciseSegment_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/ExerciseSegment;"
		);
	}
	inline android::health::connect::datatypes::ExerciseSegment_Builder ExerciseSegment_Builder::setRepetitionsCount(jint arg0) const
	{
		return callObjectMethod(
			"setRepetitionsCount",
			"(I)Landroid/health/connect/datatypes/ExerciseSegment$Builder;",
			arg0
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
