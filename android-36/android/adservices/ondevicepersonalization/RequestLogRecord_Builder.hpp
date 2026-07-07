#pragma once

#include "./RequestLogRecord.def.hpp"
#include "../../content/ContentValues.def.hpp"
#include "./RequestLogRecord_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline RequestLogRecord_Builder::RequestLogRecord_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.RequestLogRecord$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::RequestLogRecord_Builder RequestLogRecord_Builder::addRow(android::content::ContentValues arg0) const
	{
		return callObjectMethod(
			"addRow",
			"(Landroid/content/ContentValues;)Landroid/adservices/ondevicepersonalization/RequestLogRecord$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::RequestLogRecord RequestLogRecord_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/RequestLogRecord;"
		);
	}
	inline android::adservices::ondevicepersonalization::RequestLogRecord_Builder RequestLogRecord_Builder::setRows(JObject arg0) const
	{
		return callObjectMethod(
			"setRows",
			"(Ljava/util/List;)Landroid/adservices/ondevicepersonalization/RequestLogRecord$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
