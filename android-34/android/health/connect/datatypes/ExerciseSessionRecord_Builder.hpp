#pragma once

#include "./ExerciseRoute.def.hpp"
#include "./ExerciseSessionRecord.def.hpp"
#include "./Metadata.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./ExerciseSessionRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline ExerciseSessionRecord_Builder::ExerciseSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jint arg3)
		: JObject(
			"android.health.connect.datatypes.ExerciseSessionRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline android::health::connect::datatypes::ExerciseSessionRecord ExerciseSessionRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/ExerciseSessionRecord;"
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::setLaps(JObject arg0) const
	{
		return callObjectMethod(
			"setLaps",
			"(Ljava/util/List;)Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::setNotes(JString arg0) const
	{
		return callObjectMethod(
			"setNotes",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::setRoute(android::health::connect::datatypes::ExerciseRoute arg0) const
	{
		return callObjectMethod(
			"setRoute",
			"(Landroid/health/connect/datatypes/ExerciseRoute;)Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::setSegments(JObject arg0) const
	{
		return callObjectMethod(
			"setSegments",
			"(Ljava/util/List;)Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::ExerciseSessionRecord_Builder ExerciseSessionRecord_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/ExerciseSessionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
