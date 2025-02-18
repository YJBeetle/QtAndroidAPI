#pragma once

#include "../../JObject.hpp"
#include "./WorkDuration.def.hpp"

namespace android::os
{
	// Fields
	
	// Constructors
	inline WorkDuration::WorkDuration()
		: JObject(
			"android.os.WorkDuration",
			"()V"
		) {}
	
	// Methods
	inline jboolean WorkDuration::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong WorkDuration::getActualCpuDurationNanos() const
	{
		return callMethod<jlong>(
			"getActualCpuDurationNanos",
			"()J"
		);
	}
	inline jlong WorkDuration::getActualGpuDurationNanos() const
	{
		return callMethod<jlong>(
			"getActualGpuDurationNanos",
			"()J"
		);
	}
	inline jlong WorkDuration::getActualTotalDurationNanos() const
	{
		return callMethod<jlong>(
			"getActualTotalDurationNanos",
			"()J"
		);
	}
	inline jlong WorkDuration::getWorkPeriodStartTimestampNanos() const
	{
		return callMethod<jlong>(
			"getWorkPeriodStartTimestampNanos",
			"()J"
		);
	}
	inline jint WorkDuration::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void WorkDuration::setActualCpuDurationNanos(jlong arg0) const
	{
		callMethod<void>(
			"setActualCpuDurationNanos",
			"(J)V",
			arg0
		);
	}
	inline void WorkDuration::setActualGpuDurationNanos(jlong arg0) const
	{
		callMethod<void>(
			"setActualGpuDurationNanos",
			"(J)V",
			arg0
		);
	}
	inline void WorkDuration::setActualTotalDurationNanos(jlong arg0) const
	{
		callMethod<void>(
			"setActualTotalDurationNanos",
			"(J)V",
			arg0
		);
	}
	inline void WorkDuration::setWorkPeriodStartTimestampNanos(jlong arg0) const
	{
		callMethod<void>(
			"setWorkPeriodStartTimestampNanos",
			"(J)V",
			arg0
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
