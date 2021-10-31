#include "../net/URI.hpp"
#include "./DomainLoadStoreParameter.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	DomainLoadStoreParameter::DomainLoadStoreParameter(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DomainLoadStoreParameter::DomainLoadStoreParameter(java::net::URI arg0, __JniBaseClass arg1)
		: __JniBaseClass(
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
	__JniBaseClass DomainLoadStoreParameter::getProtectionParameter()
	{
		return callObjectMethod(
			"getProtectionParameter",
			"()Ljava/security/KeyStore$ProtectionParameter;"
		);
	}
	__JniBaseClass DomainLoadStoreParameter::getProtectionParams()
	{
		return callObjectMethod(
			"getProtectionParams",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::security

