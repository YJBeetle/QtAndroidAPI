#pragma once

#include "../../../../JObject.hpp"
#include "../../../../java/security/cert/X509Certificate.def.hpp"
#include "./IkeSessionParams_IkeAuthDigitalSignRemoteConfig.def.hpp"

namespace android::net::ipsec::ike
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean IkeSessionParams_IkeAuthDigitalSignRemoteConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::security::cert::X509Certificate IkeSessionParams_IkeAuthDigitalSignRemoteConfig::getRemoteCaCert() const
	{
		return callObjectMethod(
			"getRemoteCaCert",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline jint IkeSessionParams_IkeAuthDigitalSignRemoteConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::ipsec::ike

// Base class headers
#include "./IkeSessionParams_IkeAuthConfig.hpp"

