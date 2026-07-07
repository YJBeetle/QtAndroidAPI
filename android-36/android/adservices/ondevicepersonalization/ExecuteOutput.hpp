#pragma once

#include "../../../JByteArray.hpp"
#include "./RenderingConfig.def.hpp"
#include "./RequestLogRecord.def.hpp"
#include "../../../JObject.hpp"
#include "./ExecuteOutput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ExecuteOutput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ExecuteOutput::getBestValue() const
	{
		return callMethod<jint>(
			"getBestValue",
			"()I"
		);
	}
	inline JObject ExecuteOutput::getEventLogRecords() const
	{
		return callObjectMethod(
			"getEventLogRecords",
			"()Ljava/util/List;"
		);
	}
	inline JByteArray ExecuteOutput::getOutputData() const
	{
		return callObjectMethod(
			"getOutputData",
			"()[B"
		);
	}
	inline android::adservices::ondevicepersonalization::RenderingConfig ExecuteOutput::getRenderingConfig() const
	{
		return callObjectMethod(
			"getRenderingConfig",
			"()Landroid/adservices/ondevicepersonalization/RenderingConfig;"
		);
	}
	inline android::adservices::ondevicepersonalization::RequestLogRecord ExecuteOutput::getRequestLogRecord() const
	{
		return callObjectMethod(
			"getRequestLogRecord",
			"()Landroid/adservices/ondevicepersonalization/RequestLogRecord;"
		);
	}
	inline jint ExecuteOutput::hashCode() const
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
