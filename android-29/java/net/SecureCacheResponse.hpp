#pragma once

#include "../../JObject.hpp"
#include "./CacheResponse.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecureCacheResponse(const char *className, const char *sig, Ts...agv) : java::net::CacheResponse(className, sig, std::forward<Ts>(agv)...) {}
		SecureCacheResponse(QAndroidJniObject obj);
		
		// Constructors
		SecureCacheResponse();
		
		// Methods
		jstring getCipherSuite();
		JObject getLocalCertificateChain();
		JObject getLocalPrincipal();
		JObject getPeerPrincipal();
		java::util::Optional getSSLSession();
		JObject getServerCertificateChain();
	};
} // namespace java::net

