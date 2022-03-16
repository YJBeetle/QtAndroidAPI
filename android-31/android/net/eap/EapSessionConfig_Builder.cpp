#include "../../../JByteArray.hpp"
#include "./EapSessionConfig.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "./EapSessionConfig_Builder.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	EapSessionConfig_Builder::EapSessionConfig_Builder()
		: JObject(
			"android.net.eap.EapSessionConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::eap::EapSessionConfig EapSessionConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/eap/EapSessionConfig;"
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapAkaConfig(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setEapAkaConfig",
			"(II)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapAkaPrimeConfig(jint arg0, jint arg1, JString arg2, jboolean arg3) const
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
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapIdentity(JByteArray arg0) const
	{
		return callObjectMethod(
			"setEapIdentity",
			"([B)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0.object<jbyteArray>()
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapMsChapV2Config(JString arg0, JString arg1) const
	{
		return callObjectMethod(
			"setEapMsChapV2Config",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapSimConfig(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setEapSimConfig",
			"(II)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapTtlsConfig(java::security::cert::X509Certificate arg0, android::net::eap::EapSessionConfig arg1) const
	{
		return callObjectMethod(
			"setEapTtlsConfig",
			"(Ljava/security/cert/X509Certificate;Landroid/net/eap/EapSessionConfig;)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::eap

