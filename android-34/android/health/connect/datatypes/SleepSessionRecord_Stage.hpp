#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "./SleepSessionRecord_Stage.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	inline SleepSessionRecord_Stage::SleepSessionRecord_Stage(java::time::Instant arg0, java::time::Instant arg1, jint arg2)
		: JObject(
			"android.health.connect.datatypes.SleepSessionRecord$Stage",
			"(Ljava/time/Instant;Ljava/time/Instant;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	
	// Methods
	inline jboolean SleepSessionRecord_Stage::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant SleepSessionRecord_Stage::getEndTime() const
	{
		return callObjectMethod(
			"getEndTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::Instant SleepSessionRecord_Stage::getStartTime() const
	{
		return callObjectMethod(
			"getStartTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint SleepSessionRecord_Stage::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint SleepSessionRecord_Stage::hashCode() const
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
