#pragma once

#include "./RequestLogRecord.def.hpp"
#include "../../../JObject.hpp"
#include "./WebTriggerOutput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean WebTriggerOutput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject WebTriggerOutput::getEventLogRecords() const
	{
		return callObjectMethod(
			"getEventLogRecords",
			"()Ljava/util/List;"
		);
	}
	inline android::adservices::ondevicepersonalization::RequestLogRecord WebTriggerOutput::getRequestLogRecord() const
	{
		return callObjectMethod(
			"getRequestLogRecord",
			"()Landroid/adservices/ondevicepersonalization/RequestLogRecord;"
		);
	}
	inline jint WebTriggerOutput::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
