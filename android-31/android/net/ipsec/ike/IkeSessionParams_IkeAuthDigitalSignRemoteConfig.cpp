#include "../../../../JObject.hpp"
#include "../../../../java/security/cert/X509Certificate.hpp"
#include "./IkeSessionParams_IkeAuthDigitalSignRemoteConfig.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// QJniObject forward
	IkeSessionParams_IkeAuthDigitalSignRemoteConfig::IkeSessionParams_IkeAuthDigitalSignRemoteConfig(QJniObject obj) : android::net::ipsec::ike::IkeSessionParams_IkeAuthConfig(obj) {}
	
	// Constructors
	
	// Methods
	jboolean IkeSessionParams_IkeAuthDigitalSignRemoteConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::security::cert::X509Certificate IkeSessionParams_IkeAuthDigitalSignRemoteConfig::getRemoteCaCert() const
	{
		return callObjectMethod(
			"getRemoteCaCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	jint IkeSessionParams_IkeAuthDigitalSignRemoteConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

