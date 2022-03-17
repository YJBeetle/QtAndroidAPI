#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./EapSessionConfig_EapAkaPrimeConfig.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig_EapAkaPrimeConfig::allowsMismatchedNetworkNames() const
	{
		return callMethod<jboolean>(
			"allowsMismatchedNetworkNames",
			"()Z"
		);
	}
	inline jboolean EapSessionConfig_EapAkaPrimeConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString EapSessionConfig_EapAkaPrimeConfig::getNetworkName() const
	{
		return callObjectMethod(
			"getNetworkName",
			"()Ljava/lang/String;"
		);
	}
	inline jint EapSessionConfig_EapAkaPrimeConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

// Base class headers
#include "./EapSessionConfig_EapMethodConfig.hpp"
#include "./EapSessionConfig_EapAkaConfig.hpp"

