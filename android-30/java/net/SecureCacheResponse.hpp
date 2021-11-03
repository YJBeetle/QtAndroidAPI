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
		JString getCipherSuite();
		JObject getLocalCertificateChain();
		JObject getLocalPrincipal();
		JObject getPeerPrincipal();
		java::util::Optional getSSLSession();
		JObject getServerCertificateChain();
	};
} // namespace java::net

