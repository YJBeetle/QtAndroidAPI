#pragma once

#include "./CacheResponse.hpp"

class JString;
namespace java::util
{
	class Optional;
}

namespace java::net
{
	class SecureCacheResponse : public java::net::CacheResponse
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureCacheResponse(const char *className, const char *sig, Ts...agv) : java::net::CacheResponse(className, sig, std::forward<Ts>(agv)...) {}
		SecureCacheResponse(QJniObject obj);
		
		// Constructors
		SecureCacheResponse();
		
		// Methods
		JString getCipherSuite() const;
		JObject getLocalCertificateChain() const;
		JObject getLocalPrincipal() const;
		JObject getPeerPrincipal() const;
		java::util::Optional getSSLSession() const;
		JObject getServerCertificateChain() const;
	};
} // namespace java::net

