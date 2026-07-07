#pragma once

#include "../../../JObject.hpp"
#include "../../../java/time/Instant.def.hpp"
#include "./TimeInstantRangeFilter.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean TimeInstantRangeFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::Instant TimeInstantRangeFilter::getEndTime() const
	{
		return callObjectMethod(
			"getEndTime",
			"()Ljava/time/Instant;"
		);
	}
	inline java::time::Instant TimeInstantRangeFilter::getStartTime() const
	{
		return callObjectMethod(
			"getStartTime",
			"()Ljava/time/Instant;"
		);
	}
	inline jint TimeInstantRangeFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean TimeInstantRangeFilter::isBounded() const
	{
		return callMethod<jboolean>(
			"isBounded",
			"()Z"
		);
	}
} // namespace android::health::connect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
