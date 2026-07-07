#pragma once

#include "./Metadata.def.hpp"
#include "./PlannedExerciseBlock.def.hpp"
#include "./PlannedExerciseSessionRecord.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Duration.def.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/LocalDate.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./PlannedExerciseSessionRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline PlannedExerciseSessionRecord_Builder::PlannedExerciseSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, jint arg1, java::time::Instant arg2, java::time::Instant arg3)
		: JObject(
			"android.health.connect.datatypes.PlannedExerciseSessionRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;ILjava/time/Instant;Ljava/time/Instant;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	inline PlannedExerciseSessionRecord_Builder::PlannedExerciseSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, jint arg1, java::time::LocalDate arg2, java::time::Duration arg3)
		: JObject(
			"android.health.connect.datatypes.PlannedExerciseSessionRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;ILjava/time/LocalDate;Ljava/time/Duration;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::addBlock(android::health::connect::datatypes::PlannedExerciseBlock arg0) const
	{
		return callObjectMethod(
			"addBlock",
			"(Landroid/health/connect/datatypes/PlannedExerciseBlock;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord PlannedExerciseSessionRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/PlannedExerciseSessionRecord;"
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::clearBlocks() const
	{
		return callObjectMethod(
			"clearBlocks",
			"()Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setBlocks(JObject arg0) const
	{
		return callObjectMethod(
			"setBlocks",
			"(Ljava/util/List;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setEndTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setEndTime",
			"(Ljava/time/Instant;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setExerciseType(jint arg0) const
	{
		return callObjectMethod(
			"setExerciseType",
			"(I)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setMetadata(android::health::connect::datatypes::Metadata arg0) const
	{
		return callObjectMethod(
			"setMetadata",
			"(Landroid/health/connect/datatypes/Metadata;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setNotes(JString arg0) const
	{
		return callObjectMethod(
			"setNotes",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setStartTime(java::time::Instant arg0) const
	{
		return callObjectMethod(
			"setStartTime",
			"(Ljava/time/Instant;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::PlannedExerciseSessionRecord_Builder PlannedExerciseSessionRecord_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/PlannedExerciseSessionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
