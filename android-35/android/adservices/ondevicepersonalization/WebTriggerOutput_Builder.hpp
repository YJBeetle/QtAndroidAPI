#pragma once

#include "./EventLogRecord.def.hpp"
#include "./RequestLogRecord.def.hpp"
#include "./WebTriggerOutput.def.hpp"
#include "./WebTriggerOutput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline WebTriggerOutput_Builder::WebTriggerOutput_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.WebTriggerOutput$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::WebTriggerOutput_Builder WebTriggerOutput_Builder::addEventLogRecord(android::adservices::ondevicepersonalization::EventLogRecord arg0) const
	{
		return callObjectMethod(
			"addEventLogRecord",
			"(Landroid/adservices/ondevicepersonalization/EventLogRecord;)Landroid/adservices/ondevicepersonalization/WebTriggerOutput$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::WebTriggerOutput WebTriggerOutput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/WebTriggerOutput;"
		);
	}
	inline android::adservices::ondevicepersonalization::WebTriggerOutput_Builder WebTriggerOutput_Builder::setEventLogRecords(JObject arg0) const
	{
		return callObjectMethod(
			"setEventLogRecords",
			"(Ljava/util/List;)Landroid/adservices/ondevicepersonalization/WebTriggerOutput$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::WebTriggerOutput_Builder WebTriggerOutput_Builder::setRequestLogRecord(android::adservices::ondevicepersonalization::RequestLogRecord arg0) const
	{
		return callObjectMethod(
			"setRequestLogRecord",
			"(Landroid/adservices/ondevicepersonalization/RequestLogRecord;)Landroid/adservices/ondevicepersonalization/WebTriggerOutput$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
