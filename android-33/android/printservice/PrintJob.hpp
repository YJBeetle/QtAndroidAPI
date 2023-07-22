#pragma once

#include "../print/PrintJobId.def.hpp"
#include "../print/PrintJobInfo.def.hpp"
#include "./PrintDocument.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintJob.def.hpp"

namespace android::printservice
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean PrintJob::block(JString arg0) const
	{
		return callMethod<jboolean>(
			"block",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PrintJob::cancel() const
	{
		return callMethod<jboolean>(
			"cancel",
			"()Z"
		);
	}
	inline jboolean PrintJob::complete() const
	{
		return callMethod<jboolean>(
			"complete",
			"()Z"
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
	inline jboolean PrintJob::fail(JString arg0) const
	{
		return callMethod<jboolean>(
			"fail",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jint PrintJob::getAdvancedIntOption(JString arg0) const
	{
		return callMethod<jint>(
			"getAdvancedIntOption",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString PrintJob::getAdvancedStringOption(JString arg0) const
	{
		return callObjectMethod(
			"getAdvancedStringOption",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::printservice::PrintDocument PrintJob::getDocument() const
	{
		return callObjectMethod(
			"getDocument",
			"()Landroid/printservice/PrintDocument;"
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
	inline JString PrintJob::getTag() const
	{
		return callObjectMethod(
			"getTag",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean PrintJob::hasAdvancedOption(JString arg0) const
	{
		return callMethod<jboolean>(
			"hasAdvancedOption",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
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
	inline void PrintJob::setProgress(jfloat arg0) const
	{
		callMethod<void>(
			"setProgress",
			"(F)V",
			arg0
		);
	}
	inline void PrintJob::setStatus(jint arg0) const
	{
		callMethod<void>(
			"setStatus",
			"(I)V",
			arg0
		);
	}
	inline void PrintJob::setStatus(JString arg0) const
	{
		callMethod<void>(
			"setStatus",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean PrintJob::setTag(JString arg0) const
	{
		return callMethod<jboolean>(
			"setTag",
			"(Ljava/lang/String;)Z",
			arg0.object<jstring>()
		);
	}
	inline jboolean PrintJob::start() const
	{
		return callMethod<jboolean>(
			"start",
			"()Z"
		);
	}
} // namespace android::printservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::printservice;
#endif
