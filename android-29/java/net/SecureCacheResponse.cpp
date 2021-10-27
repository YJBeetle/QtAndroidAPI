#include "../util/Optional.hpp"
#include "./SecureCacheResponse.hpp"

namespace java::net
{
	// Fields
	
	SecureCacheResponse::SecureCacheResponse(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SecureCacheResponse::SecureCacheResponse()
	{
		__thiz = QAndroidJniObject(
			"java.net.SecureCacheResponse",
			"()V"
		);
	}
	
	// Methods
	jstring SecureCacheResponse::getCipherSuite()
	{
		return __thiz.callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SecureCacheResponse::getLocalCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getLocalCertificateChain",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getLocalPrincipal()
	{
		return __thiz.callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getPeerPrincipal()
	{
		return __thiz.callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getSSLSession()
	{
		return __thiz.callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getServerCertificateChain()
	{
		return __thiz.callObjectMethod(
			"getServerCertificateChain",
			"()Ljava/util/List;"
		);
	}
} // namespace java::net

