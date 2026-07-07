#pragma once

#include "./EventLogRecord.def.hpp"
#include "./RequestLogRecord.def.hpp"
#include "../../content/ContentValues.def.hpp"
#include "./EventLogRecord_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline EventLogRecord_Builder::EventLogRecord_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.EventLogRecord$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::EventLogRecord EventLogRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/EventLogRecord;"
		);
	}
	inline android::adservices::ondevicepersonalization::EventLogRecord_Builder EventLogRecord_Builder::setData(android::content::ContentValues arg0) const
	{
		return callObjectMethod(
			"setData",
			"(Landroid/content/ContentValues;)Landroid/adservices/ondevicepersonalization/EventLogRecord$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::EventLogRecord_Builder EventLogRecord_Builder::setRequestLogRecord(android::adservices::ondevicepersonalization::RequestLogRecord arg0) const
	{
		return callObjectMethod(
			"setRequestLogRecord",
			"(Landroid/adservices/ondevicepersonalization/RequestLogRecord;)Landroid/adservices/ondevicepersonalization/EventLogRecord$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::EventLogRecord_Builder EventLogRecord_Builder::setRowIndex(jint arg0) const
	{
		return callObjectMethod(
			"setRowIndex",
			"(I)Landroid/adservices/ondevicepersonalization/EventLogRecord$Builder;",
			arg0
		);
	}
	inline android::adservices::ondevicepersonalization::EventLogRecord_Builder EventLogRecord_Builder::setType(jint arg0) const
	{
		return callObjectMethod(
			"setType",
			"(I)Landroid/adservices/ondevicepersonalization/EventLogRecord$Builder;",
			arg0
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
