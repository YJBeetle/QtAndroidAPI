#pragma once

#include "./EventLogRecord.def.hpp"
#include "../../../JObject.hpp"
#include "./EventOutput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EventOutput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::adservices::ondevicepersonalization::EventLogRecord EventOutput::getEventLogRecord() const
	{
		return callObjectMethod(
			"getEventLogRecord",
			"()Landroid/adservices/ondevicepersonalization/EventLogRecord;"
		);
	}
	inline jint EventOutput::hashCode() const
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
