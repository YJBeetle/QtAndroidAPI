#include "../../JString.hpp"
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
	JString SecureCacheResponse::getCipherSuite() const
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		);
	}
	JObject SecureCacheResponse::getLocalCertificateChain() const
	{
		return callObjectMethod(
			"getLocalCertificateChain",
			"()Ljava/util/List;"
		);
	}
	JObject SecureCacheResponse::getLocalPrincipal() const
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	JObject SecureCacheResponse::getPeerPrincipal() const
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	java::util::Optional SecureCacheResponse::getSSLSession() const
	{
		return callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	JObject SecureCacheResponse::getServerCertificateChain() const
	{
		return callObjectMethod(
			"getServerCertificateChain",
			"()Ljava/util/List;"
		);
	}
} // namespace java::net

