#pragma once

#include "../net/URI.def.hpp"
#include "./DomainLoadStoreParameter.def.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	inline DomainLoadStoreParameter::DomainLoadStoreParameter(java::net::URI arg0, JObject arg1)
		: JObject(
			"java.security.DomainLoadStoreParameter",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline java::net::URI DomainLoadStoreParameter::getConfiguration() const
	{
		return callObjectMethod(
			"getConfiguration",
			"()Ljava/net/URI;"
		);
	}
	inline JObject DomainLoadStoreParameter::getProtectionParameter() const
	{
		return callObjectMethod(
			"getProtectionParameter",
			"()Ljava/security/KeyStore$ProtectionParameter;"
		);
	}
	inline JObject DomainLoadStoreParameter::getProtectionParams() const
	{
		return callObjectMethod(
			"getProtectionParams",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::security

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::security;
#endif
