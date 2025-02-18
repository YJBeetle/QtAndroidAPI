#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/time/Instant.def.hpp"
#include "../../../../java/time/ZoneOffset.def.hpp"
#include "./IntervalRecord.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean IntervalRecord::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant IntervalRecord::getEndTime() const
	{
		return callObjectMethod(
			"getEndTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::ZoneOffset IntervalRecord::getEndZoneOffset() const
	{
		return callObjectMethod(
			"getEndZoneOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline java::time::Instant IntervalRecord::getStartTime() const
	{
		return callObjectMethod(
			"getStartTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::ZoneOffset IntervalRecord::getStartZoneOffset() const
	{
		return callObjectMethod(
			"getStartZoneOffset",
			"()Ljava/time/ZoneOffset;"
		);
	}
	inline jint IntervalRecord::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers
#include "./Record.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
