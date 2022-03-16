#include "../net/URI.hpp"
#include "./DomainLoadStoreParameter.hpp"

namespace java::security
{
	// Fields
	
	// Constructors
	DomainLoadStoreParameter::DomainLoadStoreParameter(java::net::URI arg0, JObject arg1)
		: JObject(
			"java.security.DomainLoadStoreParameter",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::net::URI DomainLoadStoreParameter::getConfiguration() const
	{
		return callObjectMethod(
			"getConfiguration",
			"()Ljava/net/URI;"
		);
	}
	JObject DomainLoadStoreParameter::getProtectionParameter() const
	{
		return callObjectMethod(
			"getProtectionParameter",
			"()Ljava/security/KeyStore$ProtectionParameter;"
		);
	}
	JObject DomainLoadStoreParameter::getProtectionParams() const
	{
		return callObjectMethod(
			"getProtectionParams",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::security

