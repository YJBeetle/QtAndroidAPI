#pragma once

#include "../../../JByteArray.hpp"
#include "./EapSessionConfig_EapAkaConfig.def.hpp"
#include "./EapSessionConfig_EapAkaPrimeConfig.def.hpp"
#include "./EapSessionConfig_EapMsChapV2Config.def.hpp"
#include "./EapSessionConfig_EapSimConfig.def.hpp"
#include "./EapSessionConfig_EapTtlsConfig.def.hpp"
#include "../../../JObject.hpp"
#include "./EapSessionConfig.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::eap::EapSessionConfig_EapAkaConfig EapSessionConfig::getEapAkaConfig() const
	{
		return callObjectMethod(
			"getEapAkaConfig",
			"()Landroid/net/eap/EapSessionConfig$EapAkaConfig;"
		);
	}
	inline android::net::eap::EapSessionConfig_EapAkaPrimeConfig EapSessionConfig::getEapAkaPrimeConfig() const
	{
		return callObjectMethod(
			"getEapAkaPrimeConfig",
			"()Landroid/net/eap/EapSessionConfig$EapAkaPrimeConfig;"
		);
	}
	inline JByteArray EapSessionConfig::getEapIdentity() const
	{
		return callObjectMethod(
			"getEapIdentity",
			"()[B"
		);
	}
	inline android::net::eap::EapSessionConfig_EapMsChapV2Config EapSessionConfig::getEapMsChapV2Config() const
	{
		return callObjectMethod(
			"getEapMsChapV2Config",
			"()Landroid/net/eap/EapSessionConfig$EapMsChapV2Config;"
		);
	}
	inline android::net::eap::EapSessionConfig_EapSimConfig EapSessionConfig::getEapSimConfig() const
	{
		return callObjectMethod(
			"getEapSimConfig",
			"()Landroid/net/eap/EapSessionConfig$EapSimConfig;"
		);
	}
	inline android::net::eap::EapSessionConfig_EapTtlsConfig EapSessionConfig::getEapTtlsConfig() const
	{
		return callObjectMethod(
			"getEapTtlsConfig",
			"()Landroid/net/eap/EapSessionConfig$EapTtlsConfig;"
		);
	}
	inline jint EapSessionConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
