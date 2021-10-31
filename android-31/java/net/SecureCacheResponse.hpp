#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureCacheResponse(const char *className, const char *sig, Ts...agv) : java::net::CacheResponse(className, sig, std::forward<Ts>(agv)...) {}
		SecureCacheResponse(QJniObject obj);
		
		// Constructors
		SecureCacheResponse();
		
		// Methods
		jstring getCipherSuite();
		__JniBaseClass getLocalCertificateChain();
		__JniBaseClass getLocalPrincipal();
		__JniBaseClass getPeerPrincipal();
		java::util::Optional getSSLSession();
		__JniBaseClass getServerCertificateChain();
	};
} // namespace java::net

