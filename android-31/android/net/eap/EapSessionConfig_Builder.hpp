#pragma once

#include "../../../JByteArray.hpp"
#include "./EapSessionConfig.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "./EapSessionConfig_Builder.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	inline EapSessionConfig_Builder::EapSessionConfig_Builder()
		: JObject(
			"android.net.eap.EapSessionConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::net::eap::EapSessionConfig EapSessionConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/eap/EapSessionConfig;"
		);
	}
	inline android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapAkaConfig(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setEapAkaConfig",
			"(II)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapAkaPrimeConfig(jint arg0, jint arg1, JString arg2, jboolean arg3) const
	{
		return callObjectMethod(
			"setEapAkaPrimeConfig",
			"(IILjava/lang/String;Z)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1,
			arg2.object<jstring>(),
			arg3
		);
	}
	inline android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapIdentity(JByteArray arg0) const
	{
		return callObjectMethod(
			"setEapIdentity",
			"([B)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	inline android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapMsChapV2Config(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setEapMsChapV2Config",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	inline android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapSimConfig(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setEapSimConfig",
			"(II)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1
		);
	}
	inline android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapTtlsConfig(java::security::cert::X509Certificate arg0, android::net::eap::EapSessionConfig arg1) const
	{
		return callObjectMethod(
			"setEapTtlsConfig",
			"(Ljava/security/cert/X509Certificate;Landroid/net/eap/EapSessionConfig;)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::eap

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
