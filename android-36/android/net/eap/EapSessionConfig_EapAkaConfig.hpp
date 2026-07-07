#pragma once

#include "./EapSessionConfig_EapAkaOption.def.hpp"
#include "../../../JObject.hpp"
#include "./EapSessionConfig_EapAkaConfig.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig_EapAkaConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint EapSessionConfig_EapAkaConfig::getAppType() const
	{
		return callMethod<jint>(
			"getAppType",
			"()I"
		);
	}
	inline android::net::eap::EapSessionConfig_EapAkaOption EapSessionConfig_EapAkaConfig::getEapAkaOption() const
	{
		return callObjectMethod(
			"getEapAkaOption",
			"()Landroid/net/eap/EapSessionConfig$EapAkaOption;"
		);
	}
	inline jint EapSessionConfig_EapAkaConfig::getSubId() const
	{
		return callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	inline jint EapSessionConfig_EapAkaConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

// Base class headers
#include "./EapSessionConfig_EapMethodConfig.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
