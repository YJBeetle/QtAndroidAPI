#pragma once

#include "../../../JObject.hpp"
#include "../../../java/time/LocalDateTime.def.hpp"
#include "./LocalTimeRangeFilter.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean LocalTimeRangeFilter::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::time::LocalDateTime LocalTimeRangeFilter::getEndTime() const
	{
		return callObjectMethod(
			"getEndTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline java::time::LocalDateTime LocalTimeRangeFilter::getStartTime() const
	{
		return callObjectMethod(
			"getStartTime",
			"()Ljava/time/LocalDateTime;"
		);
	}
	inline jint LocalTimeRangeFilter::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean LocalTimeRangeFilter::isBounded() const
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
