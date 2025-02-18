#pragma once

#include "./EventLogRecord.def.hpp"
#include "./EventOutput.def.hpp"
#include "./EventOutput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline EventOutput_Builder::EventOutput_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.EventOutput$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::EventOutput EventOutput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/EventOutput;"
		);
	}
	inline android::adservices::ondevicepersonalization::EventOutput_Builder EventOutput_Builder::setEventLogRecord(android::adservices::ondevicepersonalization::EventLogRecord arg0) const
	{
		return callObjectMethod(
			"setEventLogRecord",
			"(Landroid/adservices/ondevicepersonalization/EventLogRecord;)Landroid/adservices/ondevicepersonalization/EventOutput$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
