#pragma once

#include "./EapSessionConfig.def.hpp"
#include "../../../JObject.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "./EapSessionConfig_EapTtlsConfig.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig_EapTtlsConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::eap::EapSessionConfig EapSessionConfig_EapTtlsConfig::getInnerEapSessionConfig() const
	{
		return callObjectMethod(
			"getInnerEapSessionConfig",
			"()Landroid/net/eap/EapSessionConfig;"
		);
	}
	inline java::security::cert::X509Certificate EapSessionConfig_EapTtlsConfig::getServerCaCert() const
	{
		return callObjectMethod(
			"getServerCaCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline jint EapSessionConfig_EapTtlsConfig::hashCode() const
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
