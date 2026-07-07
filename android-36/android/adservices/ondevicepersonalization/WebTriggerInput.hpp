#pragma once

#include "../../../JByteArray.hpp"
#include "../../net/Uri.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WebTriggerInput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline WebTriggerInput::WebTriggerInput(android::net::Uri arg0, JString arg1, JByteArray arg2)
		: JObject(
			"android.adservices.ondevicepersonalization.WebTriggerInput",
			"(Landroid/net/Uri;Ljava/lang/String;[B)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jbyteArray>()
		) {}
	
	// Methods
	inline jboolean WebTriggerInput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString WebTriggerInput::getAppPackageName() const
	{
		return callObjectMethod(
			"getAppPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline JByteArray WebTriggerInput::getData() const
	{
		return callObjectMethod(
			"getData",
			"()[B"
		);
	}
	inline android::net::Uri WebTriggerInput::getDestinationUrl() const
	{
		return callObjectMethod(
			"getDestinationUrl",
			"()Landroid/net/Uri;"
		);
	}
	inline jint WebTriggerInput::hashCode() const
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
