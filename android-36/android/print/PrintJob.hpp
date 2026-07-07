#pragma once

#include "./PrintJobId.def.hpp"
#include "./PrintJobInfo.def.hpp"
#include "../../JObject.hpp"
#include "./PrintJob.def.hpp"

namespace android::print
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void PrintJob::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline jboolean PrintJob::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::print::PrintJobId PrintJob::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Landroid/print/PrintJobId;"
		);
	}
	inline android::print::PrintJobInfo PrintJob::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/print/PrintJobInfo;"
		);
	}
	inline jint PrintJob::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean PrintJob::isBlocked() const
	{
		return callMethod<jboolean>(
			"isBlocked",
			"()Z"
		);
	}
	inline jboolean PrintJob::isCancelled() const
	{
		return callMethod<jboolean>(
			"isCancelled",
			"()Z"
		);
	}
	inline jboolean PrintJob::isCompleted() const
	{
		return callMethod<jboolean>(
			"isCompleted",
			"()Z"
		);
	}
	inline jboolean PrintJob::isFailed() const
	{
		return callMethod<jboolean>(
			"isFailed",
			"()Z"
		);
	}
	inline jboolean PrintJob::isQueued() const
	{
		return callMethod<jboolean>(
			"isQueued",
			"()Z"
		);
	}
	inline jboolean PrintJob::isStarted() const
	{
		return callMethod<jboolean>(
			"isStarted",
			"()Z"
		);
	}
	inline void PrintJob::restart() const
	{
		callMethod<void>(
			"restart",
			"()V"
		);
	}
} // namespace android::print

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::print;
#endif
