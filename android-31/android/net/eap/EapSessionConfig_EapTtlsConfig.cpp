#include "./EapSessionConfig.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "./EapSessionConfig_EapTtlsConfig.hpp"

namespace android::net::eap
{
	// Fields
	
	// QJniObject forward
	EapSessionConfig_EapTtlsConfig::EapSessionConfig_EapTtlsConfig(QJniObject obj) : android::net::eap::EapSessionConfig_EapMethodConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapTtlsConfig::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::net::eap::EapSessionConfig EapSessionConfig_EapTtlsConfig::getInnerEapSessionConfig()
	{
		return callObjectMethod(
			"getInnerEapSessionConfig",
			"()Landroid/net/eap/EapSessionConfig;"
		);
	}
	java::security::cert::X509Certificate EapSessionConfig_EapTtlsConfig::getServerCaCert()
	{
		return callObjectMethod(
			"getServerCaCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jint EapSessionConfig_EapTtlsConfig::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

