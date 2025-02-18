#pragma once

#include "../../../JByteArray.hpp"
#include "./EventLogRecord.def.hpp"
#include "./ExecuteOutput.def.hpp"
#include "./RenderingConfig.def.hpp"
#include "./RequestLogRecord.def.hpp"
#include "./ExecuteOutput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline ExecuteOutput_Builder::ExecuteOutput_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.ExecuteOutput$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::ExecuteOutput_Builder ExecuteOutput_Builder::addEventLogRecord(android::adservices::ondevicepersonalization::EventLogRecord arg0) const
	{
		return callObjectMethod(
			"addEventLogRecord",
			"(Landroid/adservices/ondevicepersonalization/EventLogRecord;)Landroid/adservices/ondevicepersonalization/ExecuteOutput$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::ExecuteOutput ExecuteOutput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/ExecuteOutput;"
		);
	}
	inline android::adservices::ondevicepersonalization::ExecuteOutput_Builder ExecuteOutput_Builder::setEventLogRecords(JObject arg0) const
	{
		return callObjectMethod(
			"setEventLogRecords",
			"(Ljava/util/List;)Landroid/adservices/ondevicepersonalization/ExecuteOutput$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::ExecuteOutput_Builder ExecuteOutput_Builder::setOutputData(JByteArray arg0) const
	{
		return callObjectMethod(
			"setOutputData",
			"([B)Landroid/adservices/ondevicepersonalization/ExecuteOutput$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::adservices::ondevicepersonalization::ExecuteOutput_Builder ExecuteOutput_Builder::setRenderingConfig(android::adservices::ondevicepersonalization::RenderingConfig arg0) const
	{
		return callObjectMethod(
			"setRenderingConfig",
			"(Landroid/adservices/ondevicepersonalization/RenderingConfig;)Landroid/adservices/ondevicepersonalization/ExecuteOutput$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::ondevicepersonalization::ExecuteOutput_Builder ExecuteOutput_Builder::setRequestLogRecord(android::adservices::ondevicepersonalization::RequestLogRecord arg0) const
	{
		return callObjectMethod(
			"setRequestLogRecord",
			"(Landroid/adservices/ondevicepersonalization/RequestLogRecord;)Landroid/adservices/ondevicepersonalization/ExecuteOutput$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
