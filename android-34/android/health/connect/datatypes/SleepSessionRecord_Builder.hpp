#pragma once

#include "./Metadata.def.hpp"
#include "./SleepSessionRecord.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./SleepSessionRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline SleepSessionRecord_Builder::SleepSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2)
		: JObject(
			"android.health.connect.datatypes.SleepSessionRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::health::connect::datatypes::SleepSessionRecord SleepSessionRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/SleepSessionRecord;"
		);
	}
	inline android::health::connect::datatypes::SleepSessionRecord_Builder SleepSessionRecord_Builder::clearEndZoneOffset() const
	{
		return callObjectMethod(
			"clearEndZoneOffset",
			"()Landroid/health/connect/datatypes/SleepSessionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::SleepSessionRecord_Builder SleepSessionRecord_Builder::clearStartZoneOffset() const
	{
		return callObjectMethod(
			"clearStartZoneOffset",
			"()Landroid/health/connect/datatypes/SleepSessionRecord$Builder;"
		);
	}
	inline android::health::connect::datatypes::SleepSessionRecord_Builder SleepSessionRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/SleepSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::SleepSessionRecord_Builder SleepSessionRecord_Builder::setNotes(JString arg0) const
	{
		return callObjectMethod(
			"setNotes",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/SleepSessionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::SleepSessionRecord_Builder SleepSessionRecord_Builder::setStages(JObject arg0) const
	{
		return callObjectMethod(
			"setStages",
			"(Ljava/util/List;)Landroid/health/connect/datatypes/SleepSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::SleepSessionRecord_Builder SleepSessionRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/SleepSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::SleepSessionRecord_Builder SleepSessionRecord_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/SleepSessionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
