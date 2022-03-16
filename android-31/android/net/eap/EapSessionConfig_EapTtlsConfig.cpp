#include "./EapSessionConfig.hpp"
#include "../../../JObject.hpp"
#include "../../../java/security/cert/X509Certificate.hpp"
#include "./EapSessionConfig_EapTtlsConfig.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean EapSessionConfig_EapTtlsConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::net::eap::EapSessionConfig EapSessionConfig_EapTtlsConfig::getInnerEapSessionConfig() const
	{
		return callObjectMethod(
			"getInnerEapSessionConfig",
			"()Landroid/net/eap/EapSessionConfig;"
		);
	}
	java::security::cert::X509Certificate EapSessionConfig_EapTtlsConfig::getServerCaCert() const
	{
		return callObjectMethod(
			"getServerCaCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jint EapSessionConfig_EapTtlsConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

