#pragma once

#include "../../JString.hpp"
#include "../util/Optional.def.hpp"
#include "./SecureCacheResponse.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline SecureCacheResponse::SecureCacheResponse()
		: java::net::CacheResponse(
			"java.net.SecureCacheResponse",
			"()V"
		) {}
	
	// Methods
	inline JString SecureCacheResponse::getCipherSuite() const
	{
		return callObjectMethod(
			"getCipherSuite",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SecureCacheResponse::getLocalCertificateChain() const
	{
		return callObjectMethod(
			"getLocalCertificateChain",
			"()Ljava/util/List;"
		);
	}
	inline JObject SecureCacheResponse::getLocalPrincipal() const
	{
		return callObjectMethod(
			"getLocalPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	inline JObject SecureCacheResponse::getPeerPrincipal() const
	{
		return callObjectMethod(
			"getPeerPrincipal",
			"()Ljava/security/Principal;"
		);
	}
	inline java::util::Optional SecureCacheResponse::getSSLSession() const
	{
		return callObjectMethod(
			"getSSLSession",
			"()Ljava/util/Optional;"
		);
	}
	inline JObject SecureCacheResponse::getServerCertificateChain() const
	{
		return callObjectMethod(
			"getServerCertificateChain",
			"()Ljava/util/List;"
		);
	}
} // namespace java::net

// Base class headers
#include "./CacheResponse.hpp"

