#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/security/cert/X509Certificate.def.hpp"
#include "./IkeSessionParams_IkeAuthDigitalSignLocalConfig.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean IkeSessionParams_IkeAuthDigitalSignLocalConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::security::cert::X509Certificate IkeSessionParams_IkeAuthDigitalSignLocalConfig::getClientEndCertificate() const
	{
		return callObjectMethod(
			"getClientEndCertificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JObject IkeSessionParams_IkeAuthDigitalSignLocalConfig::getIntermediateCertificates() const
	{
		return callObjectMethod(
			"getIntermediateCertificates",
			"()Ljava/util/List;"
		);
	}
	inline JObject IkeSessionParams_IkeAuthDigitalSignLocalConfig::getPrivateKey() const
	{
		return callObjectMethod(
			"getPrivateKey",
			"()Ljava/security/PrivateKey;"
		);
	}
	inline jint IkeSessionParams_IkeAuthDigitalSignLocalConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./IkeSessionParams_IkeAuthConfig.hpp"

