#include "../../../../JObject.hpp"
#include "../../../../java/security/cert/X509Certificate.hpp"
#include "./IkeSessionParams_IkeAuthDigitalSignLocalConfig.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams_IkeAuthDigitalSignLocalConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::security::cert::X509Certificate IkeSessionParams_IkeAuthDigitalSignLocalConfig::getClientEndCertificate() const
	{
		return callObjectMethod(
			"getClientEndCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	JObject IkeSessionParams_IkeAuthDigitalSignLocalConfig::getIntermediateCertificates() const
	{
		return callObjectMethod(
			"getIntermediateCertificates",
			"()Ljava/util/List;"
		);
	}
	JObject IkeSessionParams_IkeAuthDigitalSignLocalConfig::getPrivateKey() const
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	jint IkeSessionParams_IkeAuthDigitalSignLocalConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

