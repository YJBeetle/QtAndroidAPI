#include "../util/Optional.hpp"
#include "./SecureCacheResponse.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	SecureCacheResponse::SecureCacheResponse(QAndroidJniObject obj) : java::net::CacheResponse(obj) {}
	
	// Constructors
	SecureCacheResponse::SecureCacheResponse()
		: java::net::CacheResponse(
			"java.net.SecureCacheResponse",
			"()V"
		) {}
	
	// Methods
	jstring SecureCacheResponse::getCipherSuite()
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject SecureCacheResponse::getLocalCertificateChain()
	{
		return callObjectMethod(
			"getLocalCertificateChain",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getLocalPrincipal()
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getPeerPrincipal()
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getSSLSession()
	{
		return callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	QAndroidJniObject SecureCacheResponse::getServerCertificateChain()
	{
		return callObjectMethod(
			"getServerCertificateChain",
			"()Ljava/util/List;"
		);
	}
} // namespace java::net

