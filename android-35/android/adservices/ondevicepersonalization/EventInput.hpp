#pragma once

#include "./RequestLogRecord.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JObject.hpp"
#include "./EventInput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EventInput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::os::PersistableBundle EventInput::getParameters() const
	{
		return callObjectMethod(
			"getParameters",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline android::adservices::ondevicepersonalization::RequestLogRecord EventInput::getRequestLogRecord() const
	{
		return callObjectMethod(
			"getRequestLogRecord",
			"()Landroid/adservices/ondevicepersonalization/RequestLogRecord;"
		);
	}
	inline jint EventInput::hashCode() const
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
