#include "../net/URI.hpp"
#include "./DomainLoadStoreParameter.hpp"

namespace java::security
{
	// Fields
	
	DomainLoadStoreParameter::DomainLoadStoreParameter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DomainLoadStoreParameter::DomainLoadStoreParameter(java::net::URI arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.DomainLoadStoreParameter",
			"(Ljava/net/URI;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DomainLoadStoreParameter::getConfiguration()
	{
		return __thiz.callObjectMethod(
			"getConfiguration",
			"()Ljava/net/URI;"
		);
	}
	QAndroidJniObject DomainLoadStoreParameter::getProtectionParameter()
	{
		return __thiz.callObjectMethod(
			"getProtectionParameter",
			"()Ljava/security/KeyStore$ProtectionParameter;"
		);
	}
	QAndroidJniObject DomainLoadStoreParameter::getProtectionParams()
	{
		return __thiz.callObjectMethod(
			"getProtectionParams",
			"()Ljava/util/Map;"
		);
	}
} // namespace java::security

