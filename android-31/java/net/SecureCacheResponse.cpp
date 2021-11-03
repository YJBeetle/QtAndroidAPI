#include "../util/Optional.hpp"
#include "./SecureCacheResponse.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	SecureCacheResponse::SecureCacheResponse(QJniObject obj) : java::net::CacheResponse(obj) {}
	
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
	JObject SecureCacheResponse::getLocalCertificateChain()
	{
		return callObjectMethod(
			"getLocalCertificateChain",
			"()Ljava/util/List;"
		);
	}
	JObject SecureCacheResponse::getLocalPrincipal()
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	JObject SecureCacheResponse::getPeerPrincipal()
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	java::util::Optional SecureCacheResponse::getSSLSession()
	{
		return callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	JObject SecureCacheResponse::getServerCertificateChain()
	{
		return callObjectMethod(
			"getServerCertificateChain",
			"()Ljava/util/List;"
		);
	}
} // namespace java::net

