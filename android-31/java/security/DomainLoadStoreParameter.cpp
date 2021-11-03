#include "../net/URI.hpp"
#include "./DomainLoadStoreParameter.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	DomainLoadStoreParameter::DomainLoadStoreParameter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DomainLoadStoreParameter::DomainLoadStoreParameter(java::net::URI arg0, JObject arg1)
		: JObject(
			"java.security.DomainLoadStoreParameter",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	java::net::URI DomainLoadStoreParameter::getConfiguration()
	{
		return callObjectMethod(
			"getConfiguration",
			"()Ljava/net/URI;"
		);
	}
	JObject DomainLoadStoreParameter::getProtectionParameter()
	{
		return callObjectMethod(
			"getProtectionParameter",
			"()Ljava/security/KeyStore$ProtectionParameter;"
		);
	}
	JObject DomainLoadStoreParameter::getProtectionParams()
	{
		return callObjectMethod(
			"getProtectionParams",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::security

