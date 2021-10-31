#include "../net/URI.hpp"
#include "./DomainLoadStoreParameter.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	DomainLoadStoreParameter::DomainLoadStoreParameter(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	DomainLoadStoreParameter::DomainLoadStoreParameter(java::net::URI arg0, __JniBaseClass arg1)
		: __JniBaseClass(
			"java.security.DomainLoadStoreParameter",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	QAndroidJniObject DomainLoadStoreParameter::getConfiguration()
	{
		return callObjectMethod(
			"getConfiguration",
			"()Ljava/net/URI;"
		);
	}
	QAndroidJniObject DomainLoadStoreParameter::getProtectionParameter()
	{
		return callObjectMethod(
			"getProtectionParameter",
			"()Ljava/security/KeyStore$ProtectionParameter;"
		);
	}
	QAndroidJniObject DomainLoadStoreParameter::getProtectionParams()
	{
		return callObjectMethod(
			"getProtectionParams",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::security

