#include "./EapSessionConfig.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "./EapSessionConfig_Builder.hpp"

namespace android::net::eap
{
	// Fields
	
	// QAndroidJniObject forward
	EapSessionConfig_Builder::EapSessionConfig_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	EapSessionConfig_Builder::EapSessionConfig_Builder()
		: __JniBaseClass(
			"android.net.eap.EapSessionConfig$Builder",
			"()V"
		) {}
	
	// Methods
	android::net::eap::EapSessionConfig EapSessionConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/net/eap/EapSessionConfig;"
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapAkaConfig(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setEapAkaConfig",
			"(II)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapAkaPrimeConfig(jint arg0, jint arg1, jstring arg2, jboolean arg3)
	{
		return callObjectMethod(
			"setEapAkaPrimeConfig",
			"(IILjava/lang/String;Z)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapIdentity(jbyteArray arg0)
	{
		return callObjectMethod(
			"setEapIdentity",
			"([B)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapMsChapV2Config(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"setEapMsChapV2Config",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapSimConfig(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"setEapSimConfig",
			"(II)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0,
			arg1
		);
	}
	android::net::eap::EapSessionConfig_Builder EapSessionConfig_Builder::setEapTtlsConfig(java::security::cert::X509Certificate arg0, android::net::eap::EapSessionConfig arg1)
	{
		return callObjectMethod(
			"setEapTtlsConfig",
			"(Ljava/security/cert/X509Certificate;Landroid/net/eap/EapSessionConfig;)Landroid/net/eap/EapSessionConfig$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::net::eap

