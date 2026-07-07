#pragma once

#include "./Metadata.def.hpp"
#include "./MindfulnessSessionRecord.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./MindfulnessSessionRecord_Builder.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline MindfulnessSessionRecord_Builder::MindfulnessSessionRecord_Builder(android::health::connect::datatypes::Metadata arg0, java::time::Instant arg1, java::time::Instant arg2, jint arg3)
		: JObject(
			"android.health.connect.datatypes.MindfulnessSessionRecord$Builder",
			"(Landroid/health/connect/datatypes/Metadata;Ljava/time/Instant;Ljava/time/Instant;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	inline android::health::connect::datatypes::MindfulnessSessionRecord MindfulnessSessionRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/health/connect/datatypes/MindfulnessSessionRecord;"
		);
	}
	inline android::health::connect::datatypes::MindfulnessSessionRecord_Builder MindfulnessSessionRecord_Builder::setEndZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setEndZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/MindfulnessSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::MindfulnessSessionRecord_Builder MindfulnessSessionRecord_Builder::setNotes(JString arg0) const
	{
		return callObjectMethod(
			"setNotes",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/MindfulnessSessionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::health::connect::datatypes::MindfulnessSessionRecord_Builder MindfulnessSessionRecord_Builder::setStartZoneOffset(java::time::ZoneOffset arg0) const
	{
		return callObjectMethod(
			"setStartZoneOffset",
			"(Ljava/time/ZoneOffset;)Landroid/health/connect/datatypes/MindfulnessSessionRecord$Builder;",
			arg0.object()
		);
	}
	inline android::health::connect::datatypes::MindfulnessSessionRecord_Builder MindfulnessSessionRecord_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/health/connect/datatypes/MindfulnessSessionRecord$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
