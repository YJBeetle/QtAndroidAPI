#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EapSessionConfig_EapMsChapV2Config.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig_EapMsChapV2Config::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString EapSessionConfig_EapMsChapV2Config::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	inline JString EapSessionConfig_EapMsChapV2Config::getUsername() const
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		);
	}
	inline jint EapSessionConfig_EapMsChapV2Config::hashCode() const
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
