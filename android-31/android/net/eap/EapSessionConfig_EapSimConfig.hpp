#pragma once

#include "../../../JObject.hpp"
#include "./EapSessionConfig_EapSimConfig.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig_EapSimConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint EapSessionConfig_EapSimConfig::getAppType() const
	{
		return callMethod<jint>(
			"getAppType",
			"()I"
		);
	}
	inline jint EapSessionConfig_EapSimConfig::getSubId() const
	{
		return callMethod<jint>(
			"getSubId",
			"()I"
		);
	}
	inline jint EapSessionConfig_EapSimConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

// Base class headers
#include "./EapSessionConfig_EapMethodConfig.hpp"

